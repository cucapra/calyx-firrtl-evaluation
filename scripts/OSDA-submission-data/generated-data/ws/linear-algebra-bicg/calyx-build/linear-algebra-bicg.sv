/* verilator lint_off MULTITOP */
/// =================== Unsigned, Fixed Point =========================
module std_fp_add #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out
);
  assign out = left + right;
endmodule

module std_fp_sub #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out
);
  assign out = left - right;
endmodule

module std_fp_mult_pipe #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16,
    parameter SIGNED = 0
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    input  logic             go,
    input  logic             clk,
    input  logic             reset,
    output logic [WIDTH-1:0] out,
    output logic             done
);
  logic [WIDTH-1:0]          rtmp;
  logic [WIDTH-1:0]          ltmp;
  logic [(WIDTH << 1) - 1:0] out_tmp;
  // Buffer used to walk through the 3 cycles of the pipeline.
  logic done_buf[1:0];

  assign done = done_buf[1];

  assign out = out_tmp[(WIDTH << 1) - INT_WIDTH - 1 : WIDTH - INT_WIDTH];

  // If the done buffer is completely empty and go is high then execution
  // just started.
  logic start;
  assign start = go;

  // Start sending the done signal.
  always_ff @(posedge clk) begin
    if (start)
      done_buf[0] <= 1;
    else
      done_buf[0] <= 0;
  end

  // Push the done signal through the pipeline.
  always_ff @(posedge clk) begin
    if (go) begin
      done_buf[1] <= done_buf[0];
    end else begin
      done_buf[1] <= 0;
    end
  end

  // Register the inputs
  always_ff @(posedge clk) begin
    if (reset) begin
      rtmp <= 0;
      ltmp <= 0;
    end else if (go) begin
      if (SIGNED) begin
        rtmp <= $signed(right);
        ltmp <= $signed(left);
      end else begin
        rtmp <= right;
        ltmp <= left;
      end
    end else begin
      rtmp <= 0;
      ltmp <= 0;
    end

  end

  // Compute the output and save it into out_tmp
  always_ff @(posedge clk) begin
    if (reset) begin
      out_tmp <= 0;
    end else if (go) begin
      if (SIGNED) begin
        // In the first cycle, this performs an invalid computation because
        // ltmp and rtmp only get their actual values in cycle 1
        out_tmp <= $signed(
          { {WIDTH{ltmp[WIDTH-1]}}, ltmp} *
          { {WIDTH{rtmp[WIDTH-1]}}, rtmp}
        );
      end else begin
        out_tmp <= ltmp * rtmp;
      end
    end else begin
      out_tmp <= out_tmp;
    end
  end
endmodule

/* verilator lint_off WIDTH */
module std_fp_div_pipe #(
  parameter WIDTH = 32,
  parameter INT_WIDTH = 16,
  parameter FRAC_WIDTH = 16
) (
    input  logic             go,
    input  logic             clk,
    input  logic             reset,
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out_remainder,
    output logic [WIDTH-1:0] out_quotient,
    output logic             done
);
    localparam ITERATIONS = WIDTH + FRAC_WIDTH;

    logic [WIDTH-1:0] quotient, quotient_next;
    logic [WIDTH:0] acc, acc_next;
    logic [$clog2(ITERATIONS)-1:0] idx;
    logic start, running, finished, dividend_is_zero;

    assign start = go && !running;
    assign dividend_is_zero = start && left == 0;
    assign finished = idx == ITERATIONS - 1 && running;

    always_ff @(posedge clk) begin
      if (reset || finished || dividend_is_zero)
        running <= 0;
      else if (start)
        running <= 1;
      else
        running <= running;
    end

    always_comb begin
      if (acc >= {1'b0, right}) begin
        acc_next = acc - right;
        {acc_next, quotient_next} = {acc_next[WIDTH-1:0], quotient, 1'b1};
      end else begin
        {acc_next, quotient_next} = {acc, quotient} << 1;
      end
    end

    // `done` signaling
    always_ff @(posedge clk) begin
      if (dividend_is_zero || finished)
        done <= 1;
      else
        done <= 0;
    end

    always_ff @(posedge clk) begin
      if (running)
        idx <= idx + 1;
      else
        idx <= 0;
    end

    always_ff @(posedge clk) begin
      if (reset) begin
        out_quotient <= 0;
        out_remainder <= 0;
      end else if (start) begin
        out_quotient <= 0;
        out_remainder <= left;
      end else if (go == 0) begin
        out_quotient <= out_quotient;
        out_remainder <= out_remainder;
      end else if (dividend_is_zero) begin
        out_quotient <= 0;
        out_remainder <= 0;
      end else if (finished) begin
        out_quotient <= quotient_next;
        out_remainder <= out_remainder;
      end else begin
        out_quotient <= out_quotient;
        if (right <= out_remainder)
          out_remainder <= out_remainder - right;
        else
          out_remainder <= out_remainder;
      end
    end

    always_ff @(posedge clk) begin
      if (reset) begin
        acc <= 0;
        quotient <= 0;
      end else if (start) begin
        {acc, quotient} <= {{WIDTH{1'b0}}, left, 1'b0};
      end else begin
        acc <= acc_next;
        quotient <= quotient_next;
      end
    end
endmodule

module std_fp_gt #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    output logic             out
);
  assign out = left > right;
endmodule

/// =================== Signed, Fixed Point =========================
module std_fp_sadd #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = $signed(left + right);
endmodule

module std_fp_ssub #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);

  assign out = $signed(left - right);
endmodule

module std_fp_smult_pipe #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  [WIDTH-1:0]              left,
    input  [WIDTH-1:0]              right,
    input  logic                    reset,
    input  logic                    go,
    input  logic                    clk,
    output logic [WIDTH-1:0]        out,
    output logic                    done
);
  std_fp_mult_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(INT_WIDTH),
    .FRAC_WIDTH(FRAC_WIDTH),
    .SIGNED(1)
  ) comp (
    .clk(clk),
    .done(done),
    .reset(reset),
    .go(go),
    .left(left),
    .right(right),
    .out(out)
  );
endmodule

module std_fp_sdiv_pipe #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input                     clk,
    input                     go,
    input                     reset,
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out_quotient,
    output signed [WIDTH-1:0] out_remainder,
    output logic              done
);

  logic signed [WIDTH-1:0] left_abs, right_abs, comp_out_q, comp_out_r, right_save, out_rem_intermediate;

  // Registers to figure out how to transform outputs.
  logic different_signs, left_sign, right_sign;

  // Latch the value of control registers so that their available after
  // go signal becomes low.
  always_ff @(posedge clk) begin
    if (go) begin
      right_save <= right_abs;
      left_sign <= left[WIDTH-1];
      right_sign <= right[WIDTH-1];
    end else begin
      left_sign <= left_sign;
      right_save <= right_save;
      right_sign <= right_sign;
    end
  end

  assign right_abs = right[WIDTH-1] ? -right : right;
  assign left_abs = left[WIDTH-1] ? -left : left;

  assign different_signs = left_sign ^ right_sign;
  assign out_quotient = different_signs ? -comp_out_q : comp_out_q;

  // Remainder is computed as:
  //  t0 = |left| % |right|
  //  t1 = if left * right < 0 and t0 != 0 then |right| - t0 else t0
  //  rem = if right < 0 then -t1 else t1
  assign out_rem_intermediate = different_signs & |comp_out_r ? $signed(right_save - comp_out_r) : comp_out_r;
  assign out_remainder = right_sign ? -out_rem_intermediate : out_rem_intermediate;

  std_fp_div_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(INT_WIDTH),
    .FRAC_WIDTH(FRAC_WIDTH)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left_abs),
    .right(right_abs),
    .out_quotient(comp_out_q),
    .out_remainder(comp_out_r)
  );
endmodule

module std_fp_sgt #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
    input  logic signed [WIDTH-1:0] left,
    input  logic signed [WIDTH-1:0] right,
    output logic signed             out
);
  assign out = $signed(left > right);
endmodule

module std_fp_slt #(
    parameter WIDTH = 32,
    parameter INT_WIDTH = 16,
    parameter FRAC_WIDTH = 16
) (
   input logic signed [WIDTH-1:0] left,
   input logic signed [WIDTH-1:0] right,
   output logic signed            out
);
  assign out = $signed(left < right);
endmodule

/// =================== Unsigned, Bitnum =========================
module std_mult_pipe #(
    parameter WIDTH = 32
) (
    input  logic [WIDTH-1:0] left,
    input  logic [WIDTH-1:0] right,
    input  logic             reset,
    input  logic             go,
    input  logic             clk,
    output logic [WIDTH-1:0] out,
    output logic             done
);
  std_fp_mult_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(WIDTH),
    .FRAC_WIDTH(0),
    .SIGNED(0)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left),
    .right(right),
    .out(out)
  );
endmodule

module std_div_pipe #(
    parameter WIDTH = 32
) (
    input                    reset,
    input                    clk,
    input                    go,
    input        [WIDTH-1:0] left,
    input        [WIDTH-1:0] right,
    output logic [WIDTH-1:0] out_remainder,
    output logic [WIDTH-1:0] out_quotient,
    output logic             done
);

  logic [WIDTH-1:0] dividend;
  logic [(WIDTH-1)*2:0] divisor;
  logic [WIDTH-1:0] quotient;
  logic [WIDTH-1:0] quotient_msk;
  logic start, running, finished, dividend_is_zero;

  assign start = go && !running;
  assign finished = quotient_msk == 0 && running;
  assign dividend_is_zero = start && left == 0;

  always_ff @(posedge clk) begin
    // Early return if the divisor is zero.
    if (finished || dividend_is_zero)
      done <= 1;
    else
      done <= 0;
  end

  always_ff @(posedge clk) begin
    if (reset || finished || dividend_is_zero)
      running <= 0;
    else if (start)
      running <= 1;
    else
      running <= running;
  end

  // Outputs
  always_ff @(posedge clk) begin
    if (dividend_is_zero || start) begin
      out_quotient <= 0;
      out_remainder <= 0;
    end else if (finished) begin
      out_quotient <= quotient;
      out_remainder <= dividend;
    end else begin
      // Otherwise, explicitly latch the values.
      out_quotient <= out_quotient;
      out_remainder <= out_remainder;
    end
  end

  // Calculate the quotient mask.
  always_ff @(posedge clk) begin
    if (start)
      quotient_msk <= 1 << WIDTH - 1;
    else if (running)
      quotient_msk <= quotient_msk >> 1;
    else
      quotient_msk <= quotient_msk;
  end

  // Calculate the quotient.
  always_ff @(posedge clk) begin
    if (start)
      quotient <= 0;
    else if (divisor <= dividend)
      quotient <= quotient | quotient_msk;
    else
      quotient <= quotient;
  end

  // Calculate the dividend.
  always_ff @(posedge clk) begin
    if (start)
      dividend <= left;
    else if (divisor <= dividend)
      dividend <= dividend - divisor;
    else
      dividend <= dividend;
  end

  always_ff @(posedge clk) begin
    if (start) begin
      divisor <= right << WIDTH - 1;
    end else if (finished) begin
      divisor <= 0;
    end else begin
      divisor <= divisor >> 1;
    end
  end

  // Simulation self test against unsynthesizable implementation.
  `ifdef VERILATOR
    logic [WIDTH-1:0] l, r;
    always_ff @(posedge clk) begin
      if (go) begin
        l <= left;
        r <= right;
      end else begin
        l <= l;
        r <= r;
      end
    end

    always @(posedge clk) begin
      if (done && $unsigned(out_remainder) != $unsigned(l % r))
        $error(
          "\nstd_div_pipe (Remainder): Computed and golden outputs do not match!\n",
          "left: %0d", $unsigned(l),
          "  right: %0d\n", $unsigned(r),
          "expected: %0d", $unsigned(l % r),
          "  computed: %0d", $unsigned(out_remainder)
        );

      if (done && $unsigned(out_quotient) != $unsigned(l / r))
        $error(
          "\nstd_div_pipe (Quotient): Computed and golden outputs do not match!\n",
          "left: %0d", $unsigned(l),
          "  right: %0d\n", $unsigned(r),
          "expected: %0d", $unsigned(l / r),
          "  computed: %0d", $unsigned(out_quotient)
        );
    end
  `endif
endmodule

/// =================== Signed, Bitnum =========================
module std_sadd #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = $signed(left + right);
endmodule

module std_ssub #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = $signed(left - right);
endmodule

module std_smult_pipe #(
    parameter WIDTH = 32
) (
    input  logic                    reset,
    input  logic                    go,
    input  logic                    clk,
    input  signed       [WIDTH-1:0] left,
    input  signed       [WIDTH-1:0] right,
    output logic signed [WIDTH-1:0] out,
    output logic                    done
);
  std_fp_mult_pipe #(
    .WIDTH(WIDTH),
    .INT_WIDTH(WIDTH),
    .FRAC_WIDTH(0),
    .SIGNED(1)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left),
    .right(right),
    .out(out)
  );
endmodule

/* verilator lint_off WIDTH */
module std_sdiv_pipe #(
    parameter WIDTH = 32
) (
    input                           reset,
    input                           clk,
    input                           go,
    input  logic signed [WIDTH-1:0] left,
    input  logic signed [WIDTH-1:0] right,
    output logic signed [WIDTH-1:0] out_quotient,
    output logic signed [WIDTH-1:0] out_remainder,
    output logic                    done
);

  logic signed [WIDTH-1:0] left_abs, right_abs, comp_out_q, comp_out_r, right_save, out_rem_intermediate;

  // Registers to figure out how to transform outputs.
  logic different_signs, left_sign, right_sign;

  // Latch the value of control registers so that their available after
  // go signal becomes low.
  always_ff @(posedge clk) begin
    if (go) begin
      right_save <= right_abs;
      left_sign <= left[WIDTH-1];
      right_sign <= right[WIDTH-1];
    end else begin
      left_sign <= left_sign;
      right_save <= right_save;
      right_sign <= right_sign;
    end
  end

  assign right_abs = right[WIDTH-1] ? -right : right;
  assign left_abs = left[WIDTH-1] ? -left : left;

  assign different_signs = left_sign ^ right_sign;
  assign out_quotient = different_signs ? -comp_out_q : comp_out_q;

  // Remainder is computed as:
  //  t0 = |left| % |right|
  //  t1 = if left * right < 0 and t0 != 0 then |right| - t0 else t0
  //  rem = if right < 0 then -t1 else t1
  assign out_rem_intermediate = different_signs & |comp_out_r ? $signed(right_save - comp_out_r) : comp_out_r;
  assign out_remainder = right_sign ? -out_rem_intermediate : out_rem_intermediate;

  std_div_pipe #(
    .WIDTH(WIDTH)
  ) comp (
    .reset(reset),
    .clk(clk),
    .done(done),
    .go(go),
    .left(left_abs),
    .right(right_abs),
    .out_quotient(comp_out_q),
    .out_remainder(comp_out_r)
  );

  // Simulation self test against unsynthesizable implementation.
  `ifdef VERILATOR
    logic signed [WIDTH-1:0] l, r;
    always_ff @(posedge clk) begin
      if (go) begin
        l <= left;
        r <= right;
      end else begin
        l <= l;
        r <= r;
      end
    end

    always @(posedge clk) begin
      if (done && out_quotient != $signed(l / r))
        $error(
          "\nstd_sdiv_pipe (Quotient): Computed and golden outputs do not match!\n",
          "left: %0d", l,
          "  right: %0d\n", r,
          "expected: %0d", $signed(l / r),
          "  computed: %0d", $signed(out_quotient),
        );
      if (done && out_remainder != $signed(((l % r) + r) % r))
        $error(
          "\nstd_sdiv_pipe (Remainder): Computed and golden outputs do not match!\n",
          "left: %0d", l,
          "  right: %0d\n", r,
          "expected: %0d", $signed(((l % r) + r) % r),
          "  computed: %0d", $signed(out_remainder),
        );
    end
  `endif
endmodule

module std_sgt #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left > right);
endmodule

module std_slt #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left < right);
endmodule

module std_seq #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left == right);
endmodule

module std_sneq #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left != right);
endmodule

module std_sge #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left >= right);
endmodule

module std_sle #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed             out
);
  assign out = $signed(left <= right);
endmodule

module std_slsh #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = left <<< right;
endmodule

module std_srsh #(
    parameter WIDTH = 32
) (
    input  signed [WIDTH-1:0] left,
    input  signed [WIDTH-1:0] right,
    output signed [WIDTH-1:0] out
);
  assign out = left >>> right;
endmodule

// Signed extension
module std_signext #(
  parameter IN_WIDTH  = 32,
  parameter OUT_WIDTH = 32
) (
  input wire logic [IN_WIDTH-1:0]  in,
  output logic     [OUT_WIDTH-1:0] out
);
  localparam EXTEND = OUT_WIDTH - IN_WIDTH;
  assign out = { {EXTEND {in[IN_WIDTH-1]}}, in};

  `ifdef VERILATOR
    always_comb begin
      if (IN_WIDTH > OUT_WIDTH)
        $error(
          "std_signext: Output width less than input width\n",
          "IN_WIDTH: %0d", IN_WIDTH,
          "OUT_WIDTH: %0d", OUT_WIDTH
        );
    end
  `endif
endmodule

/**
Implements a memory with sequential reads and writes.
- Both reads and writes take one cycle to perform.
- Attempting to read and write at the same time is an error.
- The out signal is registered to the last value requested by the read_en signal.
- The out signal is undefined once write_en is asserted.
*/
module seq_mem_d1 #(
    parameter WIDTH = 32,
    parameter SIZE = 16,
    parameter IDX_SIZE = 4
) (
   // Common signals
   input wire logic clk,
   input wire logic reset,
   input wire logic [IDX_SIZE-1:0] addr0,

   // Read signal
   input wire logic read_en,
   output logic [ WIDTH-1:0] read_data,
   output logic read_done,

   // Write signals
   input wire logic [ WIDTH-1:0] write_data,
   input wire logic write_en,
   output logic write_done
);
  // Internal memory
  (* ram_style = "ultra" *)  logic [WIDTH-1:0] mem[SIZE-1:0];

  // Register for the read output
  logic [WIDTH-1:0] read_out;
  assign read_data = read_out;

  // Read value from the memory
  always_ff @(posedge clk) begin
    if (reset) begin
      read_out <= '0;
    end else if (read_en) begin
      /* verilator lint_off WIDTH */
      read_out <= mem[addr0];
    end else if (write_en) begin
      // Explicitly clobber the read output when a write is performed
      read_out <= 'x;
    end else begin
      read_out <= read_out;
    end
  end

  // Propagate the read_done signal
  always_ff @(posedge clk) begin
    if (reset) begin
      read_done <= '0;
    end else if (read_en) begin
      read_done <= '1;
    end else begin
      read_done <= '0;
    end
  end

  // Write value to the memory
  always_ff @(posedge clk) begin
    if (!reset && write_en)
      mem[addr0] <= write_data;
  end

  // Propagate the write_done signal
  always_ff @(posedge clk) begin
    if (reset) begin
      write_done <= '0;
    end else if (write_en) begin
      write_done <= 1'd1;
    end else begin
      write_done <= '0;
    end
  end

  // Check for out of bounds access
  `ifdef VERILATOR
    always_comb begin
      if (read_en)
        if (addr0 >= SIZE)
          $error(
            "comb_mem_d1: Out of bounds access\n",
            "addr0: %0d\n", addr0,
            "SIZE: %0d", SIZE
          );
    end
    always_comb begin
      if (read_en && write_en)
        $error("Simultaneous read and write attempted\n");
    end
  `endif
endmodule

module seq_mem_d2 #(
    parameter WIDTH = 32,
    parameter D0_SIZE = 16,
    parameter D1_SIZE = 16,
    parameter D0_IDX_SIZE = 4,
    parameter D1_IDX_SIZE = 4
) (
   // Common signals
   input wire logic clk,
   input wire logic reset,
   input wire logic [D0_IDX_SIZE-1:0] addr0,
   input wire logic [D1_IDX_SIZE-1:0] addr1,

   // Read signal
   input wire logic read_en,
   output logic [WIDTH-1:0] read_data,
   output logic read_done,

   // Write signals
   input wire logic write_en,
   input wire logic [ WIDTH-1:0] write_data,
   output logic write_done
);
  wire [D0_IDX_SIZE+D1_IDX_SIZE-1:0] addr;
  assign addr = addr0 * D1_SIZE + addr1;

  seq_mem_d1 #(.WIDTH(WIDTH), .SIZE(D0_SIZE * D1_SIZE), .IDX_SIZE(D0_IDX_SIZE+D1_IDX_SIZE)) mem
     (.clk(clk), .reset(reset), .addr0(addr),
    .read_en(read_en), .read_data(read_data), .read_done(read_done), .write_data(write_data), .write_en(write_en),
    .write_done(write_done));
endmodule

module seq_mem_d3 #(
    parameter WIDTH = 32,
    parameter D0_SIZE = 16,
    parameter D1_SIZE = 16,
    parameter D2_SIZE = 16,
    parameter D0_IDX_SIZE = 4,
    parameter D1_IDX_SIZE = 4,
    parameter D2_IDX_SIZE = 4
) (
   // Common signals
   input wire logic clk,
   input wire logic reset,
   input wire logic [D0_IDX_SIZE-1:0] addr0,
   input wire logic [D1_IDX_SIZE-1:0] addr1,
   input wire logic [D2_IDX_SIZE-1:0] addr2,

   // Read signal
   input wire logic read_en,
   output logic [WIDTH-1:0] read_data,
   output logic read_done,

   // Write signals
   input wire logic write_en,
   input wire logic [ WIDTH-1:0] write_data,
   output logic write_done
);
  wire [D0_IDX_SIZE+D1_IDX_SIZE+D2_IDX_SIZE-1:0] addr;
  assign addr = addr0 * (D1_SIZE * D2_SIZE) + addr1 * (D2_SIZE) + addr2;

  seq_mem_d1 #(.WIDTH(WIDTH), .SIZE(D0_SIZE * D1_SIZE * D2_SIZE), .IDX_SIZE(D0_IDX_SIZE+D1_IDX_SIZE+D2_IDX_SIZE)) mem
     (.clk(clk), .reset(reset), .addr0(addr),
    .read_en(read_en), .read_data(read_data), .read_done(read_done), .write_data(write_data), .write_en(write_en),
    .write_done(write_done));
endmodule

module seq_mem_d4 #(
    parameter WIDTH = 32,
    parameter D0_SIZE = 16,
    parameter D1_SIZE = 16,
    parameter D2_SIZE = 16,
    parameter D3_SIZE = 16,
    parameter D0_IDX_SIZE = 4,
    parameter D1_IDX_SIZE = 4,
    parameter D2_IDX_SIZE = 4,
    parameter D3_IDX_SIZE = 4
) (
   // Common signals
   input wire logic clk,
   input wire logic reset,
   input wire logic [D0_IDX_SIZE-1:0] addr0,
   input wire logic [D1_IDX_SIZE-1:0] addr1,
   input wire logic [D2_IDX_SIZE-1:0] addr2,
   input wire logic [D3_IDX_SIZE-1:0] addr3,

   // Read signal
   input wire logic read_en,
   output logic [WIDTH-1:0] read_data,
   output logic read_done,

   // Write signals
   input wire logic write_en,
   input wire logic [ WIDTH-1:0] write_data,
   output logic write_done
);
  wire [D0_IDX_SIZE+D1_IDX_SIZE+D2_IDX_SIZE+D3_IDX_SIZE-1:0] addr;
  assign addr = addr0 * (D1_SIZE * D2_SIZE * D3_SIZE) + addr1 * (D2_SIZE * D3_SIZE) + addr2 * (D3_SIZE) + addr3;

  seq_mem_d1 #(.WIDTH(WIDTH), .SIZE(D0_SIZE * D1_SIZE * D2_SIZE * D3_SIZE), .IDX_SIZE(D0_IDX_SIZE+D1_IDX_SIZE+D2_IDX_SIZE+D3_IDX_SIZE)) mem
     (.clk(clk), .reset(reset), .addr0(addr),
    .read_en(read_en), .read_data(read_data), .read_done(read_done), .write_data(write_data), .write_en(write_en),
    .write_done(write_done));
endmodule
/**
 * Core primitives for Calyx.
 * Implements core primitives used by the compiler.
 *
 * Conventions:
 * - All parameter names must be SNAKE_CASE and all caps.
 * - Port names must be snake_case, no caps.
 */
`default_nettype none

module std_slice #(
    parameter IN_WIDTH  = 32,
    parameter OUT_WIDTH = 32
) (
   input wire                   logic [ IN_WIDTH-1:0] in,
   output logic [OUT_WIDTH-1:0] out
);
  assign out = in[OUT_WIDTH-1:0];

  `ifdef VERILATOR
    always_comb begin
      if (IN_WIDTH < OUT_WIDTH)
        $error(
          "std_slice: Input width less than output width\n",
          "IN_WIDTH: %0d", IN_WIDTH,
          "OUT_WIDTH: %0d", OUT_WIDTH
        );
    end
  `endif
endmodule

module std_pad #(
    parameter IN_WIDTH  = 32,
    parameter OUT_WIDTH = 32
) (
   input wire logic [IN_WIDTH-1:0]  in,
   output logic     [OUT_WIDTH-1:0] out
);
  localparam EXTEND = OUT_WIDTH - IN_WIDTH;
  assign out = { {EXTEND {1'b0}}, in};

  `ifdef VERILATOR
    always_comb begin
      if (IN_WIDTH > OUT_WIDTH)
        $error(
          "std_pad: Output width less than input width\n",
          "IN_WIDTH: %0d", IN_WIDTH,
          "OUT_WIDTH: %0d", OUT_WIDTH
        );
    end
  `endif
endmodule

module std_cat #(
  parameter LEFT_WIDTH  = 32,
  parameter RIGHT_WIDTH = 32,
  parameter OUT_WIDTH = 64
) (
  input wire logic [LEFT_WIDTH-1:0] left,
  input wire logic [RIGHT_WIDTH-1:0] right,
  output logic [OUT_WIDTH-1:0] out
);
  assign out = {left, right};

  `ifdef VERILATOR
    always_comb begin
      if (LEFT_WIDTH + RIGHT_WIDTH != OUT_WIDTH)
        $error(
          "std_cat: Output width must equal sum of input widths\n",
          "LEFT_WIDTH: %0d", LEFT_WIDTH,
          "RIGHT_WIDTH: %0d", RIGHT_WIDTH,
          "OUT_WIDTH: %0d", OUT_WIDTH
        );
    end
  `endif
endmodule

module std_not #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] in,
   output logic [WIDTH-1:0] out
);
  assign out = ~in;
endmodule

module std_and #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] left,
   input wire               logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
  assign out = left & right;
endmodule

module std_or #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] left,
   input wire               logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
  assign out = left | right;
endmodule

module std_xor #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] left,
   input wire               logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
  assign out = left ^ right;
endmodule

module std_sub #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] left,
   input wire               logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
  assign out = left - right;
endmodule

module std_gt #(
    parameter WIDTH = 32
) (
   input wire   logic [WIDTH-1:0] left,
   input wire   logic [WIDTH-1:0] right,
   output logic out
);
  assign out = left > right;
endmodule

module std_lt #(
    parameter WIDTH = 32
) (
   input wire   logic [WIDTH-1:0] left,
   input wire   logic [WIDTH-1:0] right,
   output logic out
);
  assign out = left < right;
endmodule

module std_eq #(
    parameter WIDTH = 32
) (
   input wire   logic [WIDTH-1:0] left,
   input wire   logic [WIDTH-1:0] right,
   output logic out
);
  assign out = left == right;
endmodule

module std_neq #(
    parameter WIDTH = 32
) (
   input wire   logic [WIDTH-1:0] left,
   input wire   logic [WIDTH-1:0] right,
   output logic out
);
  assign out = left != right;
endmodule

module std_ge #(
    parameter WIDTH = 32
) (
    input wire   logic [WIDTH-1:0] left,
    input wire   logic [WIDTH-1:0] right,
    output logic out
);
  assign out = left >= right;
endmodule

module std_le #(
    parameter WIDTH = 32
) (
   input wire   logic [WIDTH-1:0] left,
   input wire   logic [WIDTH-1:0] right,
   output logic out
);
  assign out = left <= right;
endmodule

module std_lsh #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] left,
   input wire               logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
  assign out = left << right;
endmodule

module std_rsh #(
    parameter WIDTH = 32
) (
   input wire               logic [WIDTH-1:0] left,
   input wire               logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
  assign out = left >> right;
endmodule

/// this primitive is intended to be used
/// for lowering purposes (not in source programs)
module std_mux #(
    parameter WIDTH = 32
) (
   input wire               logic cond,
   input wire               logic [WIDTH-1:0] tru,
   input wire               logic [WIDTH-1:0] fal,
   output logic [WIDTH-1:0] out
);
  assign out = cond ? tru : fal;
endmodule

`default_nettype wire

module undef #(
    parameter WIDTH = 32
) (
   output logic [WIDTH-1:0] out
);
assign out = 'x;
endmodule

module std_const #(
    parameter WIDTH = 32,
    parameter VALUE = 32
) (
   output logic [WIDTH-1:0] out
);
assign out = VALUE;
endmodule

module std_wire #(
    parameter WIDTH = 32
) (
   input logic [WIDTH-1:0] in,
   output logic [WIDTH-1:0] out
);
assign out = in;
endmodule

module std_add #(
    parameter WIDTH = 32
) (
   input logic [WIDTH-1:0] left,
   input logic [WIDTH-1:0] right,
   output logic [WIDTH-1:0] out
);
assign out = left + right;
endmodule

module std_reg #(
    parameter WIDTH = 32
) (
   input logic [WIDTH-1:0] in,
   input logic write_en,
   input logic clk,
   input logic reset,
   output logic [WIDTH-1:0] out,
   output logic done
);
always_ff @(posedge clk) begin
    if (reset) begin
       out <= 0;
       done <= 0;
    end else if (write_en) begin
      out <= in;
      done <= 1'd1;
    end else done <= 1'd0;
  end
endmodule

module main(
  input logic go,
  input logic clk,
  input logic reset,
  output logic done
);
// COMPONENT START: main
string DATA;
int CODE;
initial begin
    CODE = $value$plusargs("DATA=%s", DATA);
    $display("DATA (path to meminit files): %s", DATA);
    $readmemh({DATA, "/A_int.dat"}, A_int.mem.mem);
    $readmemh({DATA, "/p_int.dat"}, p_int.mem);
    $readmemh({DATA, "/q_int.dat"}, q_int.mem);
    $readmemh({DATA, "/r_int.dat"}, r_int.mem);
    $readmemh({DATA, "/s_int.dat"}, s_int.mem);
end
final begin
    $writememh({DATA, "/A_int.out"}, A_int.mem.mem);
    $writememh({DATA, "/p_int.out"}, p_int.mem);
    $writememh({DATA, "/q_int.out"}, q_int.mem);
    $writememh({DATA, "/r_int.out"}, r_int.mem);
    $writememh({DATA, "/s_int.out"}, s_int.mem);
end
logic [31:0] A_i_j_0_in;
logic A_i_j_0_write_en;
logic A_i_j_0_clk;
logic A_i_j_0_reset;
logic [31:0] A_i_j_0_out;
logic A_i_j_0_done;
logic A_int_clk;
logic A_int_reset;
logic [3:0] A_int_addr0;
logic [3:0] A_int_addr1;
logic A_int_write_en;
logic [31:0] A_int_write_data;
logic A_int_read_en;
logic [31:0] A_int_read_data;
logic A_int_write_done;
logic A_int_read_done;
logic [3:0] add0_left;
logic [3:0] add0_right;
logic [3:0] add0_out;
logic [31:0] add1_left;
logic [31:0] add1_right;
logic [31:0] add1_out;
logic [31:0] bin_read0_0_in;
logic bin_read0_0_write_en;
logic bin_read0_0_clk;
logic bin_read0_0_reset;
logic [31:0] bin_read0_0_out;
logic bin_read0_0_done;
logic [3:0] const0_out;
logic [3:0] const10_out;
logic [31:0] const2_out;
logic [3:0] i1_in;
logic i1_write_en;
logic i1_clk;
logic i1_reset;
logic [3:0] i1_out;
logic i1_done;
logic [3:0] j0_in;
logic j0_write_en;
logic j0_clk;
logic j0_reset;
logic [3:0] j0_out;
logic j0_done;
logic mult_pipe0_clk;
logic mult_pipe0_reset;
logic mult_pipe0_go;
logic [31:0] mult_pipe0_left;
logic [31:0] mult_pipe0_right;
logic [31:0] mult_pipe0_out;
logic mult_pipe0_done;
logic p_int_clk;
logic p_int_reset;
logic [3:0] p_int_addr0;
logic p_int_write_en;
logic [31:0] p_int_write_data;
logic p_int_read_en;
logic [31:0] p_int_read_data;
logic p_int_write_done;
logic p_int_read_done;
logic [31:0] p_int_read0_0_in;
logic p_int_read0_0_write_en;
logic p_int_read0_0_clk;
logic p_int_read0_0_reset;
logic [31:0] p_int_read0_0_out;
logic p_int_read0_0_done;
logic [31:0] q0_0_in;
logic q0_0_write_en;
logic q0_0_clk;
logic q0_0_reset;
logic [31:0] q0_0_out;
logic q0_0_done;
logic q_int_clk;
logic q_int_reset;
logic [3:0] q_int_addr0;
logic q_int_write_en;
logic [31:0] q_int_write_data;
logic q_int_read_en;
logic [31:0] q_int_read_data;
logic q_int_write_done;
logic q_int_read_done;
logic r_int_clk;
logic r_int_reset;
logic [3:0] r_int_addr0;
logic r_int_write_en;
logic [31:0] r_int_write_data;
logic r_int_read_en;
logic [31:0] r_int_read_data;
logic r_int_write_done;
logic r_int_read_done;
logic [31:0] s0_0_in;
logic s0_0_write_en;
logic s0_0_clk;
logic s0_0_reset;
logic [31:0] s0_0_out;
logic s0_0_done;
logic s_int_clk;
logic s_int_reset;
logic [3:0] s_int_addr0;
logic s_int_write_en;
logic [31:0] s_int_write_data;
logic s_int_read_en;
logic [31:0] s_int_read_data;
logic s_int_write_done;
logic s_int_read_done;
logic [6:0] fsm_in;
logic fsm_write_en;
logic fsm_clk;
logic fsm_reset;
logic [6:0] fsm_out;
logic fsm_done;
logic [9:0] fsm0_in;
logic fsm0_write_en;
logic fsm0_clk;
logic fsm0_reset;
logic [9:0] fsm0_out;
logic fsm0_done;
logic [1:0] fsm1_in;
logic fsm1_write_en;
logic fsm1_clk;
logic fsm1_reset;
logic [1:0] fsm1_out;
logic fsm1_done;
logic [3:0] fsm2_in;
logic fsm2_write_en;
logic fsm2_clk;
logic fsm2_reset;
logic [3:0] fsm2_out;
logic fsm2_done;
logic ud_out;
logic [9:0] adder_left;
logic [9:0] adder_right;
logic [9:0] adder_out;
logic ud0_out;
logic [1:0] adder0_left;
logic [1:0] adder0_right;
logic [1:0] adder0_out;
logic ud1_out;
logic [6:0] adder1_left;
logic [6:0] adder1_right;
logic [6:0] adder1_out;
logic ud2_out;
logic [3:0] adder2_left;
logic [3:0] adder2_right;
logic [3:0] adder2_out;
logic signal_reg_in;
logic signal_reg_write_en;
logic signal_reg_clk;
logic signal_reg_reset;
logic signal_reg_out;
logic signal_reg_done;
logic early_reset_static_seq_go_in;
logic early_reset_static_seq_go_out;
logic early_reset_static_seq_done_in;
logic early_reset_static_seq_done_out;
logic early_reset_static_seq0_go_in;
logic early_reset_static_seq0_go_out;
logic early_reset_static_seq0_done_in;
logic early_reset_static_seq0_done_out;
logic early_reset_static_seq1_go_in;
logic early_reset_static_seq1_go_out;
logic early_reset_static_seq1_done_in;
logic early_reset_static_seq1_done_out;
logic early_reset_static_seq3_go_in;
logic early_reset_static_seq3_go_out;
logic early_reset_static_seq3_done_in;
logic early_reset_static_seq3_done_out;
logic wrapper_early_reset_static_seq_go_in;
logic wrapper_early_reset_static_seq_go_out;
logic wrapper_early_reset_static_seq_done_in;
logic wrapper_early_reset_static_seq_done_out;
std_reg # (
    .WIDTH(32)
) A_i_j_0 (
    .clk(A_i_j_0_clk),
    .done(A_i_j_0_done),
    .in(A_i_j_0_in),
    .out(A_i_j_0_out),
    .reset(A_i_j_0_reset),
    .write_en(A_i_j_0_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) A_int (
    .addr0(A_int_addr0),
    .addr1(A_int_addr1),
    .clk(A_int_clk),
    .read_data(A_int_read_data),
    .read_done(A_int_read_done),
    .read_en(A_int_read_en),
    .reset(A_int_reset),
    .write_data(A_int_write_data),
    .write_done(A_int_write_done),
    .write_en(A_int_write_en)
);
std_add # (
    .WIDTH(4)
) add0 (
    .left(add0_left),
    .out(add0_out),
    .right(add0_right)
);
std_add # (
    .WIDTH(32)
) add1 (
    .left(add1_left),
    .out(add1_out),
    .right(add1_right)
);
std_reg # (
    .WIDTH(32)
) bin_read0_0 (
    .clk(bin_read0_0_clk),
    .done(bin_read0_0_done),
    .in(bin_read0_0_in),
    .out(bin_read0_0_out),
    .reset(bin_read0_0_reset),
    .write_en(bin_read0_0_write_en)
);
std_const # (
    .VALUE(4'd0),
    .WIDTH(4)
) const0 (
    .out(const0_out)
);
std_const # (
    .VALUE(4'd1),
    .WIDTH(4)
) const10 (
    .out(const10_out)
);
std_const # (
    .VALUE(32'd0),
    .WIDTH(32)
) const2 (
    .out(const2_out)
);
std_reg # (
    .WIDTH(4)
) i1 (
    .clk(i1_clk),
    .done(i1_done),
    .in(i1_in),
    .out(i1_out),
    .reset(i1_reset),
    .write_en(i1_write_en)
);
std_reg # (
    .WIDTH(4)
) j0 (
    .clk(j0_clk),
    .done(j0_done),
    .in(j0_in),
    .out(j0_out),
    .reset(j0_reset),
    .write_en(j0_write_en)
);
std_mult_pipe # (
    .WIDTH(32)
) mult_pipe0 (
    .clk(mult_pipe0_clk),
    .done(mult_pipe0_done),
    .go(mult_pipe0_go),
    .left(mult_pipe0_left),
    .out(mult_pipe0_out),
    .reset(mult_pipe0_reset),
    .right(mult_pipe0_right)
);
seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
) p_int (
    .addr0(p_int_addr0),
    .clk(p_int_clk),
    .read_data(p_int_read_data),
    .read_done(p_int_read_done),
    .read_en(p_int_read_en),
    .reset(p_int_reset),
    .write_data(p_int_write_data),
    .write_done(p_int_write_done),
    .write_en(p_int_write_en)
);
std_reg # (
    .WIDTH(32)
) p_int_read0_0 (
    .clk(p_int_read0_0_clk),
    .done(p_int_read0_0_done),
    .in(p_int_read0_0_in),
    .out(p_int_read0_0_out),
    .reset(p_int_read0_0_reset),
    .write_en(p_int_read0_0_write_en)
);
std_reg # (
    .WIDTH(32)
) q0_0 (
    .clk(q0_0_clk),
    .done(q0_0_done),
    .in(q0_0_in),
    .out(q0_0_out),
    .reset(q0_0_reset),
    .write_en(q0_0_write_en)
);
seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
) q_int (
    .addr0(q_int_addr0),
    .clk(q_int_clk),
    .read_data(q_int_read_data),
    .read_done(q_int_read_done),
    .read_en(q_int_read_en),
    .reset(q_int_reset),
    .write_data(q_int_write_data),
    .write_done(q_int_write_done),
    .write_en(q_int_write_en)
);
seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
) r_int (
    .addr0(r_int_addr0),
    .clk(r_int_clk),
    .read_data(r_int_read_data),
    .read_done(r_int_read_done),
    .read_en(r_int_read_en),
    .reset(r_int_reset),
    .write_data(r_int_write_data),
    .write_done(r_int_write_done),
    .write_en(r_int_write_en)
);
std_reg # (
    .WIDTH(32)
) s0_0 (
    .clk(s0_0_clk),
    .done(s0_0_done),
    .in(s0_0_in),
    .out(s0_0_out),
    .reset(s0_0_reset),
    .write_en(s0_0_write_en)
);
seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
) s_int (
    .addr0(s_int_addr0),
    .clk(s_int_clk),
    .read_data(s_int_read_data),
    .read_done(s_int_read_done),
    .read_en(s_int_read_en),
    .reset(s_int_reset),
    .write_data(s_int_write_data),
    .write_done(s_int_write_done),
    .write_en(s_int_write_en)
);
std_reg # (
    .WIDTH(7)
) fsm (
    .clk(fsm_clk),
    .done(fsm_done),
    .in(fsm_in),
    .out(fsm_out),
    .reset(fsm_reset),
    .write_en(fsm_write_en)
);
std_reg # (
    .WIDTH(10)
) fsm0 (
    .clk(fsm0_clk),
    .done(fsm0_done),
    .in(fsm0_in),
    .out(fsm0_out),
    .reset(fsm0_reset),
    .write_en(fsm0_write_en)
);
std_reg # (
    .WIDTH(2)
) fsm1 (
    .clk(fsm1_clk),
    .done(fsm1_done),
    .in(fsm1_in),
    .out(fsm1_out),
    .reset(fsm1_reset),
    .write_en(fsm1_write_en)
);
std_reg # (
    .WIDTH(4)
) fsm2 (
    .clk(fsm2_clk),
    .done(fsm2_done),
    .in(fsm2_in),
    .out(fsm2_out),
    .reset(fsm2_reset),
    .write_en(fsm2_write_en)
);
undef # (
    .WIDTH(1)
) ud (
    .out(ud_out)
);
std_add # (
    .WIDTH(10)
) adder (
    .left(adder_left),
    .out(adder_out),
    .right(adder_right)
);
undef # (
    .WIDTH(1)
) ud0 (
    .out(ud0_out)
);
std_add # (
    .WIDTH(2)
) adder0 (
    .left(adder0_left),
    .out(adder0_out),
    .right(adder0_right)
);
undef # (
    .WIDTH(1)
) ud1 (
    .out(ud1_out)
);
std_add # (
    .WIDTH(7)
) adder1 (
    .left(adder1_left),
    .out(adder1_out),
    .right(adder1_right)
);
undef # (
    .WIDTH(1)
) ud2 (
    .out(ud2_out)
);
std_add # (
    .WIDTH(4)
) adder2 (
    .left(adder2_left),
    .out(adder2_out),
    .right(adder2_right)
);
std_reg # (
    .WIDTH(1)
) signal_reg (
    .clk(signal_reg_clk),
    .done(signal_reg_done),
    .in(signal_reg_in),
    .out(signal_reg_out),
    .reset(signal_reg_reset),
    .write_en(signal_reg_write_en)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq_go (
    .in(early_reset_static_seq_go_in),
    .out(early_reset_static_seq_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq_done (
    .in(early_reset_static_seq_done_in),
    .out(early_reset_static_seq_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq0_go (
    .in(early_reset_static_seq0_go_in),
    .out(early_reset_static_seq0_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq0_done (
    .in(early_reset_static_seq0_done_in),
    .out(early_reset_static_seq0_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq1_go (
    .in(early_reset_static_seq1_go_in),
    .out(early_reset_static_seq1_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq1_done (
    .in(early_reset_static_seq1_done_in),
    .out(early_reset_static_seq1_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq3_go (
    .in(early_reset_static_seq3_go_in),
    .out(early_reset_static_seq3_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq3_done (
    .in(early_reset_static_seq3_done_in),
    .out(early_reset_static_seq3_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_seq_go (
    .in(wrapper_early_reset_static_seq_go_in),
    .out(wrapper_early_reset_static_seq_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_seq_done (
    .in(wrapper_early_reset_static_seq_done_in),
    .out(wrapper_early_reset_static_seq_done_out)
);
wire _guard0 = 1;
wire _guard1 = fsm2_out == 4'd0;
wire _guard2 = early_reset_static_seq3_go_out;
wire _guard3 = _guard1 & _guard2;
wire _guard4 = fsm2_out == 4'd0;
wire _guard5 = early_reset_static_seq3_go_out;
wire _guard6 = _guard4 & _guard5;
wire _guard7 = early_reset_static_seq1_go_out;
wire _guard8 = early_reset_static_seq1_go_out;
wire _guard9 = fsm2_out == 4'd0;
wire _guard10 = early_reset_static_seq3_go_out;
wire _guard11 = _guard9 & _guard10;
wire _guard12 = fsm2_out == 4'd0;
wire _guard13 = early_reset_static_seq3_go_out;
wire _guard14 = _guard12 & _guard13;
wire _guard15 = fsm2_out == 4'd0;
wire _guard16 = early_reset_static_seq3_go_out;
wire _guard17 = _guard15 & _guard16;
wire _guard18 = fsm2_out == 4'd6;
wire _guard19 = early_reset_static_seq3_go_out;
wire _guard20 = _guard18 & _guard19;
wire _guard21 = fsm2_out == 4'd11;
wire _guard22 = early_reset_static_seq3_go_out;
wire _guard23 = _guard21 & _guard22;
wire _guard24 = fsm2_out == 4'd6;
wire _guard25 = early_reset_static_seq3_go_out;
wire _guard26 = _guard24 & _guard25;
wire _guard27 = fsm2_out == 4'd11;
wire _guard28 = early_reset_static_seq3_go_out;
wire _guard29 = _guard27 & _guard28;
wire _guard30 = wrapper_early_reset_static_seq_done_out;
wire _guard31 = early_reset_static_seq1_go_out;
wire _guard32 = fsm_out != 7'd107;
wire _guard33 = early_reset_static_seq1_go_out;
wire _guard34 = _guard32 & _guard33;
wire _guard35 = fsm_out == 7'd107;
wire _guard36 = early_reset_static_seq1_go_out;
wire _guard37 = _guard35 & _guard36;
wire _guard38 = early_reset_static_seq_go_out;
wire _guard39 = early_reset_static_seq_go_out;
wire _guard40 = fsm1_out == 2'd1;
wire _guard41 = early_reset_static_seq0_go_out;
wire _guard42 = _guard40 & _guard41;
wire _guard43 = fsm_out == 7'd106;
wire _guard44 = early_reset_static_seq1_go_out;
wire _guard45 = _guard43 & _guard44;
wire _guard46 = _guard42 | _guard45;
wire _guard47 = fsm2_out == 4'd7;
wire _guard48 = early_reset_static_seq3_go_out;
wire _guard49 = _guard47 & _guard48;
wire _guard50 = fsm1_out == 2'd1;
wire _guard51 = early_reset_static_seq0_go_out;
wire _guard52 = _guard50 & _guard51;
wire _guard53 = fsm_out == 7'd106;
wire _guard54 = early_reset_static_seq1_go_out;
wire _guard55 = _guard53 & _guard54;
wire _guard56 = _guard52 | _guard55;
wire _guard57 = fsm2_out == 4'd7;
wire _guard58 = early_reset_static_seq3_go_out;
wire _guard59 = _guard57 & _guard58;
wire _guard60 = _guard56 | _guard59;
wire _guard61 = fsm2_out == 4'd2;
wire _guard62 = early_reset_static_seq3_go_out;
wire _guard63 = _guard61 & _guard62;
wire _guard64 = fsm2_out == 4'd2;
wire _guard65 = early_reset_static_seq3_go_out;
wire _guard66 = _guard64 & _guard65;
wire _guard67 = fsm1_out == 2'd0;
wire _guard68 = early_reset_static_seq0_go_out;
wire _guard69 = _guard67 & _guard68;
wire _guard70 = fsm2_out == 4'd6;
wire _guard71 = early_reset_static_seq3_go_out;
wire _guard72 = _guard70 & _guard71;
wire _guard73 = _guard69 | _guard72;
wire _guard74 = fsm2_out == 4'd0;
wire _guard75 = early_reset_static_seq3_go_out;
wire _guard76 = _guard74 & _guard75;
wire _guard77 = fsm1_out == 2'd0;
wire _guard78 = early_reset_static_seq0_go_out;
wire _guard79 = _guard77 & _guard78;
wire _guard80 = fsm2_out == 4'd0;
wire _guard81 = fsm2_out == 4'd6;
wire _guard82 = _guard80 | _guard81;
wire _guard83 = early_reset_static_seq3_go_out;
wire _guard84 = _guard82 & _guard83;
wire _guard85 = fsm2_out == 4'd6;
wire _guard86 = early_reset_static_seq3_go_out;
wire _guard87 = _guard85 & _guard86;
wire _guard88 = fsm1_out == 2'd0;
wire _guard89 = early_reset_static_seq0_go_out;
wire _guard90 = _guard88 & _guard89;
wire _guard91 = fsm_out == 7'd0;
wire _guard92 = early_reset_static_seq1_go_out;
wire _guard93 = _guard91 & _guard92;
wire _guard94 = fsm2_out == 4'd11;
wire _guard95 = early_reset_static_seq3_go_out;
wire _guard96 = _guard94 & _guard95;
wire _guard97 = _guard93 | _guard96;
wire _guard98 = fsm2_out == 4'd0;
wire _guard99 = early_reset_static_seq3_go_out;
wire _guard100 = _guard98 & _guard99;
wire _guard101 = fsm_out == 7'd0;
wire _guard102 = early_reset_static_seq1_go_out;
wire _guard103 = _guard101 & _guard102;
wire _guard104 = fsm2_out == 4'd0;
wire _guard105 = fsm2_out == 4'd11;
wire _guard106 = _guard104 | _guard105;
wire _guard107 = early_reset_static_seq3_go_out;
wire _guard108 = _guard106 & _guard107;
wire _guard109 = _guard103 | _guard108;
wire _guard110 = fsm2_out == 4'd11;
wire _guard111 = early_reset_static_seq3_go_out;
wire _guard112 = _guard110 & _guard111;
wire _guard113 = fsm_out == 7'd0;
wire _guard114 = early_reset_static_seq1_go_out;
wire _guard115 = _guard113 & _guard114;
wire _guard116 = fsm0_out >= 10'd2;
wire _guard117 = fsm0_out < 10'd26;
wire _guard118 = _guard116 & _guard117;
wire _guard119 = early_reset_static_seq_go_out;
wire _guard120 = _guard118 & _guard119;
wire _guard121 = early_reset_static_seq0_go_out;
wire _guard122 = fsm1_out == 2'd2;
wire _guard123 = early_reset_static_seq0_go_out;
wire _guard124 = _guard122 & _guard123;
wire _guard125 = fsm1_out != 2'd2;
wire _guard126 = early_reset_static_seq0_go_out;
wire _guard127 = _guard125 & _guard126;
wire _guard128 = fsm_out >= 7'd2;
wire _guard129 = fsm_out < 7'd106;
wire _guard130 = _guard128 & _guard129;
wire _guard131 = early_reset_static_seq1_go_out;
wire _guard132 = _guard130 & _guard131;
wire _guard133 = fsm0_out >= 10'd28;
wire _guard134 = fsm0_out < 10'd892;
wire _guard135 = _guard133 & _guard134;
wire _guard136 = early_reset_static_seq_go_out;
wire _guard137 = _guard135 & _guard136;
wire _guard138 = early_reset_static_seq_go_out;
wire _guard139 = fsm0_out == 10'd891;
wire _guard140 = early_reset_static_seq_go_out;
wire _guard141 = _guard139 & _guard140;
wire _guard142 = fsm0_out != 10'd891;
wire _guard143 = early_reset_static_seq_go_out;
wire _guard144 = _guard142 & _guard143;
wire _guard145 = early_reset_static_seq3_go_out;
wire _guard146 = fsm2_out == 4'd12;
wire _guard147 = early_reset_static_seq3_go_out;
wire _guard148 = _guard146 & _guard147;
wire _guard149 = fsm2_out != 4'd12;
wire _guard150 = early_reset_static_seq3_go_out;
wire _guard151 = _guard149 & _guard150;
wire _guard152 = early_reset_static_seq3_go_out;
wire _guard153 = early_reset_static_seq3_go_out;
wire _guard154 = fsm0_out == 10'd0;
wire _guard155 = signal_reg_out;
wire _guard156 = _guard154 & _guard155;
wire _guard157 = fsm2_out >= 4'd2;
wire _guard158 = fsm2_out < 4'd5;
wire _guard159 = _guard157 & _guard158;
wire _guard160 = early_reset_static_seq3_go_out;
wire _guard161 = _guard159 & _guard160;
wire _guard162 = fsm2_out >= 4'd7;
wire _guard163 = fsm2_out < 4'd10;
wire _guard164 = _guard162 & _guard163;
wire _guard165 = early_reset_static_seq3_go_out;
wire _guard166 = _guard164 & _guard165;
wire _guard167 = fsm2_out >= 4'd2;
wire _guard168 = fsm2_out < 4'd5;
wire _guard169 = _guard167 & _guard168;
wire _guard170 = fsm2_out >= 4'd7;
wire _guard171 = fsm2_out < 4'd10;
wire _guard172 = _guard170 & _guard171;
wire _guard173 = _guard169 | _guard172;
wire _guard174 = early_reset_static_seq3_go_out;
wire _guard175 = _guard173 & _guard174;
wire _guard176 = fsm2_out >= 4'd2;
wire _guard177 = fsm2_out < 4'd5;
wire _guard178 = _guard176 & _guard177;
wire _guard179 = early_reset_static_seq3_go_out;
wire _guard180 = _guard178 & _guard179;
wire _guard181 = fsm2_out >= 4'd7;
wire _guard182 = fsm2_out < 4'd10;
wire _guard183 = _guard181 & _guard182;
wire _guard184 = early_reset_static_seq3_go_out;
wire _guard185 = _guard183 & _guard184;
wire _guard186 = fsm2_out == 4'd1;
wire _guard187 = early_reset_static_seq3_go_out;
wire _guard188 = _guard186 & _guard187;
wire _guard189 = fsm2_out == 4'd1;
wire _guard190 = early_reset_static_seq3_go_out;
wire _guard191 = _guard189 & _guard190;
wire _guard192 = early_reset_static_seq0_go_out;
wire _guard193 = early_reset_static_seq0_go_out;
wire _guard194 = wrapper_early_reset_static_seq_go_out;
wire _guard195 = fsm0_out == 10'd0;
wire _guard196 = fsm0_out == 10'd26;
wire _guard197 = _guard195 | _guard196;
wire _guard198 = early_reset_static_seq_go_out;
wire _guard199 = _guard197 & _guard198;
wire _guard200 = fsm1_out == 2'd1;
wire _guard201 = early_reset_static_seq0_go_out;
wire _guard202 = _guard200 & _guard201;
wire _guard203 = _guard199 | _guard202;
wire _guard204 = fsm_out == 7'd106;
wire _guard205 = early_reset_static_seq1_go_out;
wire _guard206 = _guard204 & _guard205;
wire _guard207 = _guard203 | _guard206;
wire _guard208 = fsm1_out == 2'd1;
wire _guard209 = early_reset_static_seq0_go_out;
wire _guard210 = _guard208 & _guard209;
wire _guard211 = fsm_out == 7'd106;
wire _guard212 = early_reset_static_seq1_go_out;
wire _guard213 = _guard211 & _guard212;
wire _guard214 = _guard210 | _guard213;
wire _guard215 = fsm0_out == 10'd0;
wire _guard216 = fsm0_out == 10'd26;
wire _guard217 = _guard215 | _guard216;
wire _guard218 = early_reset_static_seq_go_out;
wire _guard219 = _guard217 & _guard218;
wire _guard220 = fsm0_out == 10'd0;
wire _guard221 = signal_reg_out;
wire _guard222 = _guard220 & _guard221;
wire _guard223 = fsm0_out == 10'd0;
wire _guard224 = signal_reg_out;
wire _guard225 = ~_guard224;
wire _guard226 = _guard223 & _guard225;
wire _guard227 = wrapper_early_reset_static_seq_go_out;
wire _guard228 = _guard226 & _guard227;
wire _guard229 = _guard222 | _guard228;
wire _guard230 = fsm0_out == 10'd0;
wire _guard231 = signal_reg_out;
wire _guard232 = ~_guard231;
wire _guard233 = _guard230 & _guard232;
wire _guard234 = wrapper_early_reset_static_seq_go_out;
wire _guard235 = _guard233 & _guard234;
wire _guard236 = fsm0_out == 10'd0;
wire _guard237 = signal_reg_out;
wire _guard238 = _guard236 & _guard237;
wire _guard239 = fsm2_out == 4'd5;
wire _guard240 = fsm2_out == 4'd1;
wire _guard241 = _guard239 | _guard240;
wire _guard242 = early_reset_static_seq3_go_out;
wire _guard243 = _guard241 & _guard242;
wire _guard244 = fsm2_out == 4'd1;
wire _guard245 = early_reset_static_seq3_go_out;
wire _guard246 = _guard244 & _guard245;
wire _guard247 = fsm2_out == 4'd5;
wire _guard248 = early_reset_static_seq3_go_out;
wire _guard249 = _guard247 & _guard248;
wire _guard250 = fsm_out == 7'd0;
wire _guard251 = early_reset_static_seq1_go_out;
wire _guard252 = _guard250 & _guard251;
wire _guard253 = fsm2_out == 4'd7;
wire _guard254 = early_reset_static_seq3_go_out;
wire _guard255 = _guard253 & _guard254;
wire _guard256 = _guard252 | _guard255;
wire _guard257 = fsm2_out == 4'd7;
wire _guard258 = early_reset_static_seq3_go_out;
wire _guard259 = _guard257 & _guard258;
wire _guard260 = fsm_out == 7'd0;
wire _guard261 = early_reset_static_seq1_go_out;
wire _guard262 = _guard260 & _guard261;
wire _guard263 = fsm2_out == 4'd1;
wire _guard264 = fsm2_out == 4'd10;
wire _guard265 = _guard263 | _guard264;
wire _guard266 = early_reset_static_seq3_go_out;
wire _guard267 = _guard265 & _guard266;
wire _guard268 = fsm2_out == 4'd1;
wire _guard269 = early_reset_static_seq3_go_out;
wire _guard270 = _guard268 & _guard269;
wire _guard271 = fsm2_out == 4'd10;
wire _guard272 = early_reset_static_seq3_go_out;
wire _guard273 = _guard271 & _guard272;
wire _guard274 = fsm2_out == 4'd3;
wire _guard275 = early_reset_static_seq3_go_out;
wire _guard276 = _guard274 & _guard275;
wire _guard277 = fsm2_out == 4'd3;
wire _guard278 = early_reset_static_seq3_go_out;
wire _guard279 = _guard277 & _guard278;
wire _guard280 = fsm2_out == 4'd1;
wire _guard281 = early_reset_static_seq3_go_out;
wire _guard282 = _guard280 & _guard281;
wire _guard283 = fsm2_out == 4'd1;
wire _guard284 = early_reset_static_seq3_go_out;
wire _guard285 = _guard283 & _guard284;
assign r_int_read_en = _guard3;
assign r_int_clk = clk;
assign r_int_addr0 = i1_out;
assign r_int_reset = reset;
assign adder1_left =
  _guard7 ? fsm_out :
  7'd0;
assign adder1_right =
  _guard8 ? 7'd1 :
  7'd0;
assign A_int_read_en = _guard11;
assign A_int_clk = clk;
assign A_int_addr0 = i1_out;
assign A_int_reset = reset;
assign A_int_addr1 = j0_out;
assign add1_left =
  _guard20 ? s0_0_out :
  _guard23 ? q0_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard23, _guard20})) begin
    $fatal(2, "Multiple assignment to port `add1.left'.");
end
end
assign add1_right =
  _guard26 ? bin_read0_0_out :
  _guard29 ? A_i_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard29, _guard26})) begin
    $fatal(2, "Multiple assignment to port `add1.right'.");
end
end
assign done = _guard30;
assign fsm_write_en = _guard31;
assign fsm_clk = clk;
assign fsm_reset = reset;
assign fsm_in =
  _guard34 ? adder1_out :
  _guard37 ? 7'd0 :
  7'd0;
always_comb begin
  if(~$onehot0({_guard37, _guard34})) begin
    $fatal(2, "Multiple assignment to port `fsm.in'.");
end
end
assign adder_left =
  _guard38 ? fsm0_out :
  10'd0;
assign adder_right =
  _guard39 ? 10'd1 :
  10'd0;
assign add0_left =
  _guard46 ? i1_out :
  _guard49 ? j0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard49, _guard46})) begin
    $fatal(2, "Multiple assignment to port `add0.left'.");
end
end
assign add0_right = const10_out;
assign p_int_read_en = _guard63;
assign p_int_clk = clk;
assign p_int_addr0 = j0_out;
assign p_int_reset = reset;
assign s_int_write_en = _guard73;
assign s_int_read_en = _guard76;
assign s_int_clk = clk;
assign s_int_addr0 =
  _guard79 ? i1_out :
  _guard84 ? j0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard84, _guard79})) begin
    $fatal(2, "Multiple assignment to port `s_int.addr0'.");
end
end
assign s_int_reset = reset;
assign s_int_write_data =
  _guard87 ? add1_out :
  _guard90 ? const2_out :
  'x;
always_comb begin
  if(~$onehot0({_guard90, _guard87})) begin
    $fatal(2, "Multiple assignment to port `s_int.write_data'.");
end
end
assign early_reset_static_seq3_done_in = ud2_out;
assign q_int_write_en = _guard97;
assign q_int_read_en = _guard100;
assign q_int_clk = clk;
assign q_int_addr0 = i1_out;
assign q_int_reset = reset;
assign q_int_write_data =
  _guard112 ? add1_out :
  _guard115 ? const2_out :
  'x;
always_comb begin
  if(~$onehot0({_guard115, _guard112})) begin
    $fatal(2, "Multiple assignment to port `q_int.write_data'.");
end
end
assign early_reset_static_seq0_go_in = _guard120;
assign fsm1_write_en = _guard121;
assign fsm1_clk = clk;
assign fsm1_reset = reset;
assign fsm1_in =
  _guard124 ? 2'd0 :
  _guard127 ? adder0_out :
  2'd0;
always_comb begin
  if(~$onehot0({_guard127, _guard124})) begin
    $fatal(2, "Multiple assignment to port `fsm1.in'.");
end
end
assign early_reset_static_seq1_done_in = ud1_out;
assign early_reset_static_seq3_go_in = _guard132;
assign early_reset_static_seq1_go_in = _guard137;
assign fsm0_write_en = _guard138;
assign fsm0_clk = clk;
assign fsm0_reset = reset;
assign fsm0_in =
  _guard141 ? 10'd0 :
  _guard144 ? adder_out :
  10'd0;
always_comb begin
  if(~$onehot0({_guard144, _guard141})) begin
    $fatal(2, "Multiple assignment to port `fsm0.in'.");
end
end
assign fsm2_write_en = _guard145;
assign fsm2_clk = clk;
assign fsm2_reset = reset;
assign fsm2_in =
  _guard148 ? 4'd0 :
  _guard151 ? adder2_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard151, _guard148})) begin
    $fatal(2, "Multiple assignment to port `fsm2.in'.");
end
end
assign adder2_left =
  _guard152 ? fsm2_out :
  4'd0;
assign adder2_right =
  _guard153 ? 4'd1 :
  4'd0;
assign wrapper_early_reset_static_seq_done_in = _guard156;
assign mult_pipe0_clk = clk;
assign mult_pipe0_left =
  _guard161 ? bin_read0_0_out :
  _guard166 ? A_i_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard166, _guard161})) begin
    $fatal(2, "Multiple assignment to port `mult_pipe0.left'.");
end
end
assign mult_pipe0_go = _guard175;
assign mult_pipe0_reset = reset;
assign mult_pipe0_right =
  _guard180 ? A_i_j_0_out :
  _guard185 ? p_int_read0_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard185, _guard180})) begin
    $fatal(2, "Multiple assignment to port `mult_pipe0.right'.");
end
end
assign s0_0_write_en = _guard188;
assign s0_0_clk = clk;
assign s0_0_reset = reset;
assign s0_0_in = s_int_read_data;
assign adder0_left =
  _guard192 ? fsm1_out :
  2'd0;
assign adder0_right =
  _guard193 ? 2'd1 :
  2'd0;
assign early_reset_static_seq_go_in = _guard194;
assign i1_write_en = _guard207;
assign i1_clk = clk;
assign i1_reset = reset;
assign i1_in =
  _guard214 ? add0_out :
  _guard219 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard219, _guard214})) begin
    $fatal(2, "Multiple assignment to port `i1.in'.");
end
end
assign signal_reg_write_en = _guard229;
assign signal_reg_clk = clk;
assign signal_reg_reset = reset;
assign signal_reg_in =
  _guard235 ? 1'd1 :
  _guard238 ? 1'd0 :
  1'd0;
always_comb begin
  if(~$onehot0({_guard238, _guard235})) begin
    $fatal(2, "Multiple assignment to port `signal_reg.in'.");
end
end
assign bin_read0_0_write_en = _guard243;
assign bin_read0_0_clk = clk;
assign bin_read0_0_reset = reset;
assign bin_read0_0_in =
  _guard246 ? r_int_read_data :
  _guard249 ? mult_pipe0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard249, _guard246})) begin
    $fatal(2, "Multiple assignment to port `bin_read0_0.in'.");
end
end
assign j0_write_en = _guard256;
assign j0_clk = clk;
assign j0_reset = reset;
assign j0_in =
  _guard259 ? add0_out :
  _guard262 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard262, _guard259})) begin
    $fatal(2, "Multiple assignment to port `j0.in'.");
end
end
assign early_reset_static_seq_done_in = ud_out;
assign A_i_j_0_write_en = _guard267;
assign A_i_j_0_clk = clk;
assign A_i_j_0_reset = reset;
assign A_i_j_0_in =
  _guard270 ? A_int_read_data :
  _guard273 ? mult_pipe0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard273, _guard270})) begin
    $fatal(2, "Multiple assignment to port `A_i_j_0.in'.");
end
end
assign p_int_read0_0_write_en = _guard276;
assign p_int_read0_0_clk = clk;
assign p_int_read0_0_reset = reset;
assign p_int_read0_0_in = p_int_read_data;
assign early_reset_static_seq0_done_in = ud0_out;
assign wrapper_early_reset_static_seq_go_in = go;
assign q0_0_write_en = _guard282;
assign q0_0_clk = clk;
assign q0_0_reset = reset;
assign q0_0_in = q_int_read_data;
// COMPONENT END: main
endmodule

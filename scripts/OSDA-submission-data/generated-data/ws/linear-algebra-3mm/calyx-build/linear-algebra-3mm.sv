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
    $readmemh({DATA, "/B_int.dat"}, B_int.mem.mem);
    $readmemh({DATA, "/C_int.dat"}, C_int.mem.mem);
    $readmemh({DATA, "/D_int.dat"}, D_int.mem.mem);
    $readmemh({DATA, "/E_int.dat"}, E_int.mem.mem);
    $readmemh({DATA, "/F_int.dat"}, F_int.mem.mem);
    $readmemh({DATA, "/G_int.dat"}, G_int.mem.mem);
end
final begin
    $writememh({DATA, "/A_int.out"}, A_int.mem.mem);
    $writememh({DATA, "/B_int.out"}, B_int.mem.mem);
    $writememh({DATA, "/C_int.out"}, C_int.mem.mem);
    $writememh({DATA, "/D_int.out"}, D_int.mem.mem);
    $writememh({DATA, "/E_int.out"}, E_int.mem.mem);
    $writememh({DATA, "/F_int.out"}, F_int.mem.mem);
    $writememh({DATA, "/G_int.out"}, G_int.mem.mem);
end
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
logic B_int_clk;
logic B_int_reset;
logic [3:0] B_int_addr0;
logic [3:0] B_int_addr1;
logic B_int_write_en;
logic [31:0] B_int_write_data;
logic B_int_read_en;
logic [31:0] B_int_read_data;
logic B_int_write_done;
logic B_int_read_done;
logic C_int_clk;
logic C_int_reset;
logic [3:0] C_int_addr0;
logic [3:0] C_int_addr1;
logic C_int_write_en;
logic [31:0] C_int_write_data;
logic C_int_read_en;
logic [31:0] C_int_read_data;
logic C_int_write_done;
logic C_int_read_done;
logic D_int_clk;
logic D_int_reset;
logic [3:0] D_int_addr0;
logic [3:0] D_int_addr1;
logic D_int_write_en;
logic [31:0] D_int_write_data;
logic D_int_read_en;
logic [31:0] D_int_read_data;
logic D_int_write_done;
logic D_int_read_done;
logic E_int_clk;
logic E_int_reset;
logic [3:0] E_int_addr0;
logic [3:0] E_int_addr1;
logic E_int_write_en;
logic [31:0] E_int_write_data;
logic E_int_read_en;
logic [31:0] E_int_read_data;
logic E_int_write_done;
logic E_int_read_done;
logic F_int_clk;
logic F_int_reset;
logic [3:0] F_int_addr0;
logic [3:0] F_int_addr1;
logic F_int_write_en;
logic [31:0] F_int_write_data;
logic F_int_read_en;
logic [31:0] F_int_read_data;
logic F_int_write_done;
logic F_int_read_done;
logic G_int_clk;
logic G_int_reset;
logic [3:0] G_int_addr0;
logic [3:0] G_int_addr1;
logic G_int_write_en;
logic [31:0] G_int_write_data;
logic G_int_read_en;
logic [31:0] G_int_read_data;
logic G_int_write_done;
logic G_int_read_done;
logic [31:0] add0_left;
logic [31:0] add0_right;
logic [31:0] add0_out;
logic [3:0] add1_left;
logic [3:0] add1_right;
logic [3:0] add1_out;
logic [31:0] bin_read0_0_in;
logic bin_read0_0_write_en;
logic bin_read0_0_clk;
logic bin_read0_0_reset;
logic [31:0] bin_read0_0_out;
logic bin_read0_0_done;
logic [3:0] const0_out;
logic [31:0] const14_out;
logic [3:0] const17_out;
logic [3:0] i0_in;
logic i0_write_en;
logic i0_clk;
logic i0_reset;
logic [3:0] i0_out;
logic i0_done;
logic [3:0] j0_in;
logic j0_write_en;
logic j0_clk;
logic j0_reset;
logic [3:0] j0_out;
logic j0_done;
logic [3:0] k0_in;
logic k0_write_en;
logic k0_clk;
logic k0_reset;
logic [3:0] k0_out;
logic k0_done;
logic mult_pipe0_clk;
logic mult_pipe0_reset;
logic mult_pipe0_go;
logic [31:0] mult_pipe0_left;
logic [31:0] mult_pipe0_right;
logic [31:0] mult_pipe0_out;
logic mult_pipe0_done;
logic [31:0] v_0_in;
logic v_0_write_en;
logic v_0_clk;
logic v_0_reset;
logic [31:0] v_0_out;
logic v_0_done;
logic [9:0] fsm_in;
logic fsm_write_en;
logic fsm_clk;
logic fsm_reset;
logic [9:0] fsm_out;
logic fsm_done;
logic [6:0] fsm0_in;
logic fsm0_write_en;
logic fsm0_clk;
logic fsm0_reset;
logic [6:0] fsm0_out;
logic fsm0_done;
logic [3:0] fsm1_in;
logic fsm1_write_en;
logic fsm1_clk;
logic fsm1_reset;
logic [3:0] fsm1_out;
logic fsm1_done;
logic [6:0] fsm2_in;
logic fsm2_write_en;
logic fsm2_clk;
logic fsm2_reset;
logic [6:0] fsm2_out;
logic fsm2_done;
logic [14:0] fsm3_in;
logic fsm3_write_en;
logic fsm3_clk;
logic fsm3_reset;
logic [14:0] fsm3_out;
logic fsm3_done;
logic [9:0] fsm4_in;
logic fsm4_write_en;
logic fsm4_clk;
logic fsm4_reset;
logic [9:0] fsm4_out;
logic fsm4_done;
logic [3:0] fsm5_in;
logic fsm5_write_en;
logic fsm5_clk;
logic fsm5_reset;
logic [3:0] fsm5_out;
logic fsm5_done;
logic [9:0] fsm6_in;
logic fsm6_write_en;
logic fsm6_clk;
logic fsm6_reset;
logic [9:0] fsm6_out;
logic fsm6_done;
logic [6:0] fsm7_in;
logic fsm7_write_en;
logic fsm7_clk;
logic fsm7_reset;
logic [6:0] fsm7_out;
logic fsm7_done;
logic [3:0] fsm8_in;
logic fsm8_write_en;
logic fsm8_clk;
logic fsm8_reset;
logic [3:0] fsm8_out;
logic fsm8_done;
logic ud_out;
logic [14:0] adder_left;
logic [14:0] adder_right;
logic [14:0] adder_out;
logic ud0_out;
logic [9:0] adder0_left;
logic [9:0] adder0_right;
logic [9:0] adder0_out;
logic ud1_out;
logic [6:0] adder1_left;
logic [6:0] adder1_right;
logic [6:0] adder1_out;
logic ud2_out;
logic [3:0] adder2_left;
logic [3:0] adder2_right;
logic [3:0] adder2_out;
logic ud3_out;
logic [9:0] adder3_left;
logic [9:0] adder3_right;
logic [9:0] adder3_out;
logic ud4_out;
logic [6:0] adder4_left;
logic [6:0] adder4_right;
logic [6:0] adder4_out;
logic ud5_out;
logic [3:0] adder5_left;
logic [3:0] adder5_right;
logic [3:0] adder5_out;
logic ud6_out;
logic [9:0] adder6_left;
logic [9:0] adder6_right;
logic [9:0] adder6_out;
logic ud7_out;
logic [6:0] adder7_left;
logic [6:0] adder7_right;
logic [6:0] adder7_out;
logic ud8_out;
logic [3:0] adder8_left;
logic [3:0] adder8_right;
logic [3:0] adder8_out;
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
logic early_reset_static_seq8_go_in;
logic early_reset_static_seq8_go_out;
logic early_reset_static_seq8_done_in;
logic early_reset_static_seq8_done_out;
logic early_reset_static_seq9_go_in;
logic early_reset_static_seq9_go_out;
logic early_reset_static_seq9_done_in;
logic early_reset_static_seq9_done_out;
logic early_reset_static_seq11_go_in;
logic early_reset_static_seq11_go_out;
logic early_reset_static_seq11_done_in;
logic early_reset_static_seq11_done_out;
logic early_reset_static_seq16_go_in;
logic early_reset_static_seq16_go_out;
logic early_reset_static_seq16_done_in;
logic early_reset_static_seq16_done_out;
logic early_reset_static_seq17_go_in;
logic early_reset_static_seq17_go_out;
logic early_reset_static_seq17_done_in;
logic early_reset_static_seq17_done_out;
logic early_reset_static_seq19_go_in;
logic early_reset_static_seq19_go_out;
logic early_reset_static_seq19_done_in;
logic early_reset_static_seq19_done_out;
logic wrapper_early_reset_static_seq_go_in;
logic wrapper_early_reset_static_seq_go_out;
logic wrapper_early_reset_static_seq_done_in;
logic wrapper_early_reset_static_seq_done_out;
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
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) B_int (
    .addr0(B_int_addr0),
    .addr1(B_int_addr1),
    .clk(B_int_clk),
    .read_data(B_int_read_data),
    .read_done(B_int_read_done),
    .read_en(B_int_read_en),
    .reset(B_int_reset),
    .write_data(B_int_write_data),
    .write_done(B_int_write_done),
    .write_en(B_int_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) C_int (
    .addr0(C_int_addr0),
    .addr1(C_int_addr1),
    .clk(C_int_clk),
    .read_data(C_int_read_data),
    .read_done(C_int_read_done),
    .read_en(C_int_read_en),
    .reset(C_int_reset),
    .write_data(C_int_write_data),
    .write_done(C_int_write_done),
    .write_en(C_int_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) D_int (
    .addr0(D_int_addr0),
    .addr1(D_int_addr1),
    .clk(D_int_clk),
    .read_data(D_int_read_data),
    .read_done(D_int_read_done),
    .read_en(D_int_read_en),
    .reset(D_int_reset),
    .write_data(D_int_write_data),
    .write_done(D_int_write_done),
    .write_en(D_int_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) E_int (
    .addr0(E_int_addr0),
    .addr1(E_int_addr1),
    .clk(E_int_clk),
    .read_data(E_int_read_data),
    .read_done(E_int_read_done),
    .read_en(E_int_read_en),
    .reset(E_int_reset),
    .write_data(E_int_write_data),
    .write_done(E_int_write_done),
    .write_en(E_int_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) F_int (
    .addr0(F_int_addr0),
    .addr1(F_int_addr1),
    .clk(F_int_clk),
    .read_data(F_int_read_data),
    .read_done(F_int_read_done),
    .read_en(F_int_read_en),
    .reset(F_int_reset),
    .write_data(F_int_write_data),
    .write_done(F_int_write_done),
    .write_en(F_int_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(8),
    .WIDTH(32)
) G_int (
    .addr0(G_int_addr0),
    .addr1(G_int_addr1),
    .clk(G_int_clk),
    .read_data(G_int_read_data),
    .read_done(G_int_read_done),
    .read_en(G_int_read_en),
    .reset(G_int_reset),
    .write_data(G_int_write_data),
    .write_done(G_int_write_done),
    .write_en(G_int_write_en)
);
std_add # (
    .WIDTH(32)
) add0 (
    .left(add0_left),
    .out(add0_out),
    .right(add0_right)
);
std_add # (
    .WIDTH(4)
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
    .VALUE(32'd0),
    .WIDTH(32)
) const14 (
    .out(const14_out)
);
std_const # (
    .VALUE(4'd1),
    .WIDTH(4)
) const17 (
    .out(const17_out)
);
std_reg # (
    .WIDTH(4)
) i0 (
    .clk(i0_clk),
    .done(i0_done),
    .in(i0_in),
    .out(i0_out),
    .reset(i0_reset),
    .write_en(i0_write_en)
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
std_reg # (
    .WIDTH(4)
) k0 (
    .clk(k0_clk),
    .done(k0_done),
    .in(k0_in),
    .out(k0_out),
    .reset(k0_reset),
    .write_en(k0_write_en)
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
std_reg # (
    .WIDTH(32)
) v_0 (
    .clk(v_0_clk),
    .done(v_0_done),
    .in(v_0_in),
    .out(v_0_out),
    .reset(v_0_reset),
    .write_en(v_0_write_en)
);
std_reg # (
    .WIDTH(10)
) fsm (
    .clk(fsm_clk),
    .done(fsm_done),
    .in(fsm_in),
    .out(fsm_out),
    .reset(fsm_reset),
    .write_en(fsm_write_en)
);
std_reg # (
    .WIDTH(7)
) fsm0 (
    .clk(fsm0_clk),
    .done(fsm0_done),
    .in(fsm0_in),
    .out(fsm0_out),
    .reset(fsm0_reset),
    .write_en(fsm0_write_en)
);
std_reg # (
    .WIDTH(4)
) fsm1 (
    .clk(fsm1_clk),
    .done(fsm1_done),
    .in(fsm1_in),
    .out(fsm1_out),
    .reset(fsm1_reset),
    .write_en(fsm1_write_en)
);
std_reg # (
    .WIDTH(7)
) fsm2 (
    .clk(fsm2_clk),
    .done(fsm2_done),
    .in(fsm2_in),
    .out(fsm2_out),
    .reset(fsm2_reset),
    .write_en(fsm2_write_en)
);
std_reg # (
    .WIDTH(15)
) fsm3 (
    .clk(fsm3_clk),
    .done(fsm3_done),
    .in(fsm3_in),
    .out(fsm3_out),
    .reset(fsm3_reset),
    .write_en(fsm3_write_en)
);
std_reg # (
    .WIDTH(10)
) fsm4 (
    .clk(fsm4_clk),
    .done(fsm4_done),
    .in(fsm4_in),
    .out(fsm4_out),
    .reset(fsm4_reset),
    .write_en(fsm4_write_en)
);
std_reg # (
    .WIDTH(4)
) fsm5 (
    .clk(fsm5_clk),
    .done(fsm5_done),
    .in(fsm5_in),
    .out(fsm5_out),
    .reset(fsm5_reset),
    .write_en(fsm5_write_en)
);
std_reg # (
    .WIDTH(10)
) fsm6 (
    .clk(fsm6_clk),
    .done(fsm6_done),
    .in(fsm6_in),
    .out(fsm6_out),
    .reset(fsm6_reset),
    .write_en(fsm6_write_en)
);
std_reg # (
    .WIDTH(7)
) fsm7 (
    .clk(fsm7_clk),
    .done(fsm7_done),
    .in(fsm7_in),
    .out(fsm7_out),
    .reset(fsm7_reset),
    .write_en(fsm7_write_en)
);
std_reg # (
    .WIDTH(4)
) fsm8 (
    .clk(fsm8_clk),
    .done(fsm8_done),
    .in(fsm8_in),
    .out(fsm8_out),
    .reset(fsm8_reset),
    .write_en(fsm8_write_en)
);
undef # (
    .WIDTH(1)
) ud (
    .out(ud_out)
);
std_add # (
    .WIDTH(15)
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
    .WIDTH(10)
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
undef # (
    .WIDTH(1)
) ud3 (
    .out(ud3_out)
);
std_add # (
    .WIDTH(10)
) adder3 (
    .left(adder3_left),
    .out(adder3_out),
    .right(adder3_right)
);
undef # (
    .WIDTH(1)
) ud4 (
    .out(ud4_out)
);
std_add # (
    .WIDTH(7)
) adder4 (
    .left(adder4_left),
    .out(adder4_out),
    .right(adder4_right)
);
undef # (
    .WIDTH(1)
) ud5 (
    .out(ud5_out)
);
std_add # (
    .WIDTH(4)
) adder5 (
    .left(adder5_left),
    .out(adder5_out),
    .right(adder5_right)
);
undef # (
    .WIDTH(1)
) ud6 (
    .out(ud6_out)
);
std_add # (
    .WIDTH(10)
) adder6 (
    .left(adder6_left),
    .out(adder6_out),
    .right(adder6_right)
);
undef # (
    .WIDTH(1)
) ud7 (
    .out(ud7_out)
);
std_add # (
    .WIDTH(7)
) adder7 (
    .left(adder7_left),
    .out(adder7_out),
    .right(adder7_right)
);
undef # (
    .WIDTH(1)
) ud8 (
    .out(ud8_out)
);
std_add # (
    .WIDTH(4)
) adder8 (
    .left(adder8_left),
    .out(adder8_out),
    .right(adder8_right)
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
) early_reset_static_seq8_go (
    .in(early_reset_static_seq8_go_in),
    .out(early_reset_static_seq8_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq8_done (
    .in(early_reset_static_seq8_done_in),
    .out(early_reset_static_seq8_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq9_go (
    .in(early_reset_static_seq9_go_in),
    .out(early_reset_static_seq9_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq9_done (
    .in(early_reset_static_seq9_done_in),
    .out(early_reset_static_seq9_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq11_go (
    .in(early_reset_static_seq11_go_in),
    .out(early_reset_static_seq11_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq11_done (
    .in(early_reset_static_seq11_done_in),
    .out(early_reset_static_seq11_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq16_go (
    .in(early_reset_static_seq16_go_in),
    .out(early_reset_static_seq16_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq16_done (
    .in(early_reset_static_seq16_done_in),
    .out(early_reset_static_seq16_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq17_go (
    .in(early_reset_static_seq17_go_in),
    .out(early_reset_static_seq17_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq17_done (
    .in(early_reset_static_seq17_done_in),
    .out(early_reset_static_seq17_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq19_go (
    .in(early_reset_static_seq19_go_in),
    .out(early_reset_static_seq19_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_seq19_done (
    .in(early_reset_static_seq19_done_in),
    .out(early_reset_static_seq19_done_out)
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
wire _guard1 = fsm3_out == 15'd0;
wire _guard2 = fsm3_out == 15'd5922;
wire _guard3 = _guard1 | _guard2;
wire _guard4 = fsm3_out == 15'd11844;
wire _guard5 = _guard3 | _guard4;
wire _guard6 = early_reset_static_seq_go_out;
wire _guard7 = _guard5 & _guard6;
wire _guard8 = fsm4_out == 10'd738;
wire _guard9 = early_reset_static_seq0_go_out;
wire _guard10 = _guard8 & _guard9;
wire _guard11 = _guard7 | _guard10;
wire _guard12 = fsm6_out == 10'd738;
wire _guard13 = early_reset_static_seq8_go_out;
wire _guard14 = _guard12 & _guard13;
wire _guard15 = _guard11 | _guard14;
wire _guard16 = fsm_out == 10'd738;
wire _guard17 = early_reset_static_seq16_go_out;
wire _guard18 = _guard16 & _guard17;
wire _guard19 = _guard15 | _guard18;
wire _guard20 = fsm4_out == 10'd738;
wire _guard21 = early_reset_static_seq0_go_out;
wire _guard22 = _guard20 & _guard21;
wire _guard23 = fsm6_out == 10'd738;
wire _guard24 = early_reset_static_seq8_go_out;
wire _guard25 = _guard23 & _guard24;
wire _guard26 = _guard22 | _guard25;
wire _guard27 = fsm_out == 10'd738;
wire _guard28 = early_reset_static_seq16_go_out;
wire _guard29 = _guard27 & _guard28;
wire _guard30 = _guard26 | _guard29;
wire _guard31 = fsm3_out == 15'd0;
wire _guard32 = fsm3_out == 15'd5922;
wire _guard33 = _guard31 | _guard32;
wire _guard34 = fsm3_out == 15'd11844;
wire _guard35 = _guard33 | _guard34;
wire _guard36 = early_reset_static_seq_go_out;
wire _guard37 = _guard35 & _guard36;
wire _guard38 = fsm5_out == 4'd1;
wire _guard39 = fsm5_out == 4'd6;
wire _guard40 = _guard38 | _guard39;
wire _guard41 = early_reset_static_seq3_go_out;
wire _guard42 = _guard40 & _guard41;
wire _guard43 = fsm8_out == 4'd1;
wire _guard44 = fsm8_out == 4'd6;
wire _guard45 = _guard43 | _guard44;
wire _guard46 = early_reset_static_seq11_go_out;
wire _guard47 = _guard45 & _guard46;
wire _guard48 = _guard42 | _guard47;
wire _guard49 = fsm1_out == 4'd1;
wire _guard50 = fsm1_out == 4'd6;
wire _guard51 = _guard49 | _guard50;
wire _guard52 = early_reset_static_seq19_go_out;
wire _guard53 = _guard51 & _guard52;
wire _guard54 = _guard48 | _guard53;
wire _guard55 = fsm8_out == 4'd1;
wire _guard56 = early_reset_static_seq11_go_out;
wire _guard57 = _guard55 & _guard56;
wire _guard58 = fsm5_out == 4'd1;
wire _guard59 = early_reset_static_seq3_go_out;
wire _guard60 = _guard58 & _guard59;
wire _guard61 = fsm5_out == 4'd6;
wire _guard62 = early_reset_static_seq3_go_out;
wire _guard63 = _guard61 & _guard62;
wire _guard64 = fsm8_out == 4'd6;
wire _guard65 = early_reset_static_seq11_go_out;
wire _guard66 = _guard64 & _guard65;
wire _guard67 = _guard63 | _guard66;
wire _guard68 = fsm1_out == 4'd6;
wire _guard69 = early_reset_static_seq19_go_out;
wire _guard70 = _guard68 & _guard69;
wire _guard71 = _guard67 | _guard70;
wire _guard72 = fsm1_out == 4'd1;
wire _guard73 = early_reset_static_seq19_go_out;
wire _guard74 = _guard72 & _guard73;
wire _guard75 = early_reset_static_seq1_go_out;
wire _guard76 = early_reset_static_seq1_go_out;
wire _guard77 = fsm6_out >= 10'd2;
wire _guard78 = fsm6_out < 10'd738;
wire _guard79 = _guard77 & _guard78;
wire _guard80 = early_reset_static_seq8_go_out;
wire _guard81 = _guard79 & _guard80;
wire _guard82 = fsm5_out == 4'd0;
wire _guard83 = early_reset_static_seq3_go_out;
wire _guard84 = _guard82 & _guard83;
wire _guard85 = fsm5_out == 4'd0;
wire _guard86 = early_reset_static_seq3_go_out;
wire _guard87 = _guard85 & _guard86;
wire _guard88 = fsm5_out == 4'd0;
wire _guard89 = early_reset_static_seq3_go_out;
wire _guard90 = _guard88 & _guard89;
wire _guard91 = fsm8_out == 4'd0;
wire _guard92 = early_reset_static_seq11_go_out;
wire _guard93 = _guard91 & _guard92;
wire _guard94 = fsm8_out == 4'd0;
wire _guard95 = early_reset_static_seq11_go_out;
wire _guard96 = _guard94 & _guard95;
wire _guard97 = fsm8_out == 4'd0;
wire _guard98 = early_reset_static_seq11_go_out;
wire _guard99 = _guard97 & _guard98;
wire _guard100 = fsm4_out == 10'd738;
wire _guard101 = early_reset_static_seq0_go_out;
wire _guard102 = _guard100 & _guard101;
wire _guard103 = fsm6_out == 10'd738;
wire _guard104 = early_reset_static_seq8_go_out;
wire _guard105 = _guard103 & _guard104;
wire _guard106 = _guard102 | _guard105;
wire _guard107 = fsm_out == 10'd738;
wire _guard108 = early_reset_static_seq16_go_out;
wire _guard109 = _guard107 & _guard108;
wire _guard110 = _guard106 | _guard109;
wire _guard111 = fsm2_out == 7'd90;
wire _guard112 = early_reset_static_seq1_go_out;
wire _guard113 = _guard111 & _guard112;
wire _guard114 = fsm7_out == 7'd90;
wire _guard115 = early_reset_static_seq9_go_out;
wire _guard116 = _guard114 & _guard115;
wire _guard117 = _guard113 | _guard116;
wire _guard118 = fsm0_out == 7'd90;
wire _guard119 = early_reset_static_seq17_go_out;
wire _guard120 = _guard118 & _guard119;
wire _guard121 = _guard117 | _guard120;
wire _guard122 = fsm5_out == 4'd2;
wire _guard123 = early_reset_static_seq3_go_out;
wire _guard124 = _guard122 & _guard123;
wire _guard125 = fsm8_out == 4'd2;
wire _guard126 = early_reset_static_seq11_go_out;
wire _guard127 = _guard125 & _guard126;
wire _guard128 = _guard124 | _guard127;
wire _guard129 = fsm1_out == 4'd2;
wire _guard130 = early_reset_static_seq19_go_out;
wire _guard131 = _guard129 & _guard130;
wire _guard132 = _guard128 | _guard131;
wire _guard133 = fsm4_out == 10'd738;
wire _guard134 = early_reset_static_seq0_go_out;
wire _guard135 = _guard133 & _guard134;
wire _guard136 = fsm2_out == 7'd90;
wire _guard137 = early_reset_static_seq1_go_out;
wire _guard138 = _guard136 & _guard137;
wire _guard139 = _guard135 | _guard138;
wire _guard140 = fsm5_out == 4'd2;
wire _guard141 = early_reset_static_seq3_go_out;
wire _guard142 = _guard140 & _guard141;
wire _guard143 = _guard139 | _guard142;
wire _guard144 = fsm6_out == 10'd738;
wire _guard145 = early_reset_static_seq8_go_out;
wire _guard146 = _guard144 & _guard145;
wire _guard147 = _guard143 | _guard146;
wire _guard148 = fsm7_out == 7'd90;
wire _guard149 = early_reset_static_seq9_go_out;
wire _guard150 = _guard148 & _guard149;
wire _guard151 = _guard147 | _guard150;
wire _guard152 = fsm8_out == 4'd2;
wire _guard153 = early_reset_static_seq11_go_out;
wire _guard154 = _guard152 & _guard153;
wire _guard155 = _guard151 | _guard154;
wire _guard156 = fsm_out == 10'd738;
wire _guard157 = early_reset_static_seq16_go_out;
wire _guard158 = _guard156 & _guard157;
wire _guard159 = _guard155 | _guard158;
wire _guard160 = fsm0_out == 7'd90;
wire _guard161 = early_reset_static_seq17_go_out;
wire _guard162 = _guard160 & _guard161;
wire _guard163 = _guard159 | _guard162;
wire _guard164 = fsm1_out == 4'd2;
wire _guard165 = early_reset_static_seq19_go_out;
wire _guard166 = _guard164 & _guard165;
wire _guard167 = _guard163 | _guard166;
wire _guard168 = wrapper_early_reset_static_seq_done_out;
wire _guard169 = early_reset_static_seq16_go_out;
wire _guard170 = fsm_out == 10'd739;
wire _guard171 = early_reset_static_seq16_go_out;
wire _guard172 = _guard170 & _guard171;
wire _guard173 = fsm_out != 10'd739;
wire _guard174 = early_reset_static_seq16_go_out;
wire _guard175 = _guard173 & _guard174;
wire _guard176 = early_reset_static_seq8_go_out;
wire _guard177 = fsm6_out == 10'd739;
wire _guard178 = early_reset_static_seq8_go_out;
wire _guard179 = _guard177 & _guard178;
wire _guard180 = fsm6_out != 10'd739;
wire _guard181 = early_reset_static_seq8_go_out;
wire _guard182 = _guard180 & _guard181;
wire _guard183 = early_reset_static_seq_go_out;
wire _guard184 = early_reset_static_seq_go_out;
wire _guard185 = fsm_out >= 10'd2;
wire _guard186 = fsm_out < 10'd738;
wire _guard187 = _guard185 & _guard186;
wire _guard188 = early_reset_static_seq16_go_out;
wire _guard189 = _guard187 & _guard188;
wire _guard190 = fsm5_out == 4'd9;
wire _guard191 = early_reset_static_seq3_go_out;
wire _guard192 = _guard190 & _guard191;
wire _guard193 = fsm8_out == 4'd9;
wire _guard194 = early_reset_static_seq11_go_out;
wire _guard195 = _guard193 & _guard194;
wire _guard196 = _guard192 | _guard195;
wire _guard197 = fsm1_out == 4'd9;
wire _guard198 = early_reset_static_seq19_go_out;
wire _guard199 = _guard197 & _guard198;
wire _guard200 = _guard196 | _guard199;
wire _guard201 = fsm5_out == 4'd9;
wire _guard202 = early_reset_static_seq3_go_out;
wire _guard203 = _guard201 & _guard202;
wire _guard204 = fsm8_out == 4'd9;
wire _guard205 = early_reset_static_seq11_go_out;
wire _guard206 = _guard204 & _guard205;
wire _guard207 = _guard203 | _guard206;
wire _guard208 = fsm1_out == 4'd9;
wire _guard209 = early_reset_static_seq19_go_out;
wire _guard210 = _guard208 & _guard209;
wire _guard211 = _guard207 | _guard210;
wire _guard212 = early_reset_static_seq_go_out;
wire _guard213 = fsm3_out != 15'd17765;
wire _guard214 = early_reset_static_seq_go_out;
wire _guard215 = _guard213 & _guard214;
wire _guard216 = fsm3_out == 15'd17765;
wire _guard217 = early_reset_static_seq_go_out;
wire _guard218 = _guard216 & _guard217;
wire _guard219 = early_reset_static_seq3_go_out;
wire _guard220 = fsm5_out == 4'd10;
wire _guard221 = early_reset_static_seq3_go_out;
wire _guard222 = _guard220 & _guard221;
wire _guard223 = fsm5_out != 4'd10;
wire _guard224 = early_reset_static_seq3_go_out;
wire _guard225 = _guard223 & _guard224;
wire _guard226 = early_reset_static_seq9_go_out;
wire _guard227 = early_reset_static_seq9_go_out;
wire _guard228 = fsm8_out == 4'd0;
wire _guard229 = early_reset_static_seq11_go_out;
wire _guard230 = _guard228 & _guard229;
wire _guard231 = fsm8_out == 4'd0;
wire _guard232 = early_reset_static_seq11_go_out;
wire _guard233 = _guard231 & _guard232;
wire _guard234 = fsm8_out == 4'd0;
wire _guard235 = early_reset_static_seq11_go_out;
wire _guard236 = _guard234 & _guard235;
wire _guard237 = early_reset_static_seq11_go_out;
wire _guard238 = fsm8_out == 4'd10;
wire _guard239 = early_reset_static_seq11_go_out;
wire _guard240 = _guard238 & _guard239;
wire _guard241 = fsm8_out != 4'd10;
wire _guard242 = early_reset_static_seq11_go_out;
wire _guard243 = _guard241 & _guard242;
wire _guard244 = fsm3_out >= 15'd2;
wire _guard245 = fsm3_out < 15'd5922;
wire _guard246 = _guard244 & _guard245;
wire _guard247 = early_reset_static_seq_go_out;
wire _guard248 = _guard246 & _guard247;
wire _guard249 = fsm3_out >= 15'd11846;
wire _guard250 = fsm3_out < 15'd17766;
wire _guard251 = _guard249 & _guard250;
wire _guard252 = early_reset_static_seq_go_out;
wire _guard253 = _guard251 & _guard252;
wire _guard254 = early_reset_static_seq19_go_out;
wire _guard255 = fsm1_out == 4'd10;
wire _guard256 = early_reset_static_seq19_go_out;
wire _guard257 = _guard255 & _guard256;
wire _guard258 = fsm1_out != 4'd10;
wire _guard259 = early_reset_static_seq19_go_out;
wire _guard260 = _guard258 & _guard259;
wire _guard261 = early_reset_static_seq0_go_out;
wire _guard262 = fsm4_out == 10'd739;
wire _guard263 = early_reset_static_seq0_go_out;
wire _guard264 = _guard262 & _guard263;
wire _guard265 = fsm4_out != 10'd739;
wire _guard266 = early_reset_static_seq0_go_out;
wire _guard267 = _guard265 & _guard266;
wire _guard268 = fsm2_out >= 7'd2;
wire _guard269 = fsm2_out < 7'd90;
wire _guard270 = _guard268 & _guard269;
wire _guard271 = early_reset_static_seq1_go_out;
wire _guard272 = _guard270 & _guard271;
wire _guard273 = fsm5_out == 4'd0;
wire _guard274 = early_reset_static_seq3_go_out;
wire _guard275 = _guard273 & _guard274;
wire _guard276 = fsm5_out == 4'd0;
wire _guard277 = early_reset_static_seq3_go_out;
wire _guard278 = _guard276 & _guard277;
wire _guard279 = fsm5_out == 4'd0;
wire _guard280 = early_reset_static_seq3_go_out;
wire _guard281 = _guard279 & _guard280;
wire _guard282 = early_reset_static_seq9_go_out;
wire _guard283 = fsm7_out != 7'd91;
wire _guard284 = early_reset_static_seq9_go_out;
wire _guard285 = _guard283 & _guard284;
wire _guard286 = fsm7_out == 7'd91;
wire _guard287 = early_reset_static_seq9_go_out;
wire _guard288 = _guard286 & _guard287;
wire _guard289 = early_reset_static_seq16_go_out;
wire _guard290 = early_reset_static_seq16_go_out;
wire _guard291 = fsm4_out >= 10'd2;
wire _guard292 = fsm4_out < 10'd738;
wire _guard293 = _guard291 & _guard292;
wire _guard294 = early_reset_static_seq0_go_out;
wire _guard295 = _guard293 & _guard294;
wire _guard296 = early_reset_static_seq17_go_out;
wire _guard297 = fsm0_out == 7'd91;
wire _guard298 = early_reset_static_seq17_go_out;
wire _guard299 = _guard297 & _guard298;
wire _guard300 = fsm0_out != 7'd91;
wire _guard301 = early_reset_static_seq17_go_out;
wire _guard302 = _guard300 & _guard301;
wire _guard303 = early_reset_static_seq1_go_out;
wire _guard304 = fsm2_out != 7'd91;
wire _guard305 = early_reset_static_seq1_go_out;
wire _guard306 = _guard304 & _guard305;
wire _guard307 = fsm2_out == 7'd91;
wire _guard308 = early_reset_static_seq1_go_out;
wire _guard309 = _guard307 & _guard308;
wire _guard310 = early_reset_static_seq3_go_out;
wire _guard311 = early_reset_static_seq3_go_out;
wire _guard312 = early_reset_static_seq8_go_out;
wire _guard313 = early_reset_static_seq8_go_out;
wire _guard314 = early_reset_static_seq11_go_out;
wire _guard315 = early_reset_static_seq11_go_out;
wire _guard316 = fsm3_out == 15'd0;
wire _guard317 = signal_reg_out;
wire _guard318 = _guard316 & _guard317;
wire _guard319 = fsm2_out == 7'd0;
wire _guard320 = early_reset_static_seq1_go_out;
wire _guard321 = _guard319 & _guard320;
wire _guard322 = fsm5_out == 4'd9;
wire _guard323 = early_reset_static_seq3_go_out;
wire _guard324 = _guard322 & _guard323;
wire _guard325 = _guard321 | _guard324;
wire _guard326 = fsm5_out == 4'd7;
wire _guard327 = early_reset_static_seq3_go_out;
wire _guard328 = _guard326 & _guard327;
wire _guard329 = fsm1_out == 4'd0;
wire _guard330 = early_reset_static_seq19_go_out;
wire _guard331 = _guard329 & _guard330;
wire _guard332 = _guard328 | _guard331;
wire _guard333 = fsm2_out == 7'd0;
wire _guard334 = early_reset_static_seq1_go_out;
wire _guard335 = _guard333 & _guard334;
wire _guard336 = fsm5_out == 4'd7;
wire _guard337 = fsm5_out == 4'd9;
wire _guard338 = _guard336 | _guard337;
wire _guard339 = early_reset_static_seq3_go_out;
wire _guard340 = _guard338 & _guard339;
wire _guard341 = _guard335 | _guard340;
wire _guard342 = fsm1_out == 4'd0;
wire _guard343 = early_reset_static_seq19_go_out;
wire _guard344 = _guard342 & _guard343;
wire _guard345 = _guard341 | _guard344;
wire _guard346 = fsm5_out == 4'd9;
wire _guard347 = early_reset_static_seq3_go_out;
wire _guard348 = _guard346 & _guard347;
wire _guard349 = fsm2_out == 7'd0;
wire _guard350 = early_reset_static_seq1_go_out;
wire _guard351 = _guard349 & _guard350;
wire _guard352 = fsm2_out == 7'd0;
wire _guard353 = early_reset_static_seq1_go_out;
wire _guard354 = _guard352 & _guard353;
wire _guard355 = fsm5_out == 4'd7;
wire _guard356 = fsm5_out == 4'd9;
wire _guard357 = _guard355 | _guard356;
wire _guard358 = early_reset_static_seq3_go_out;
wire _guard359 = _guard357 & _guard358;
wire _guard360 = _guard354 | _guard359;
wire _guard361 = fsm1_out == 4'd0;
wire _guard362 = early_reset_static_seq19_go_out;
wire _guard363 = _guard361 & _guard362;
wire _guard364 = fsm5_out >= 4'd2;
wire _guard365 = fsm5_out < 4'd5;
wire _guard366 = _guard364 & _guard365;
wire _guard367 = early_reset_static_seq3_go_out;
wire _guard368 = _guard366 & _guard367;
wire _guard369 = fsm8_out >= 4'd2;
wire _guard370 = fsm8_out < 4'd5;
wire _guard371 = _guard369 & _guard370;
wire _guard372 = early_reset_static_seq11_go_out;
wire _guard373 = _guard371 & _guard372;
wire _guard374 = _guard368 | _guard373;
wire _guard375 = fsm1_out >= 4'd2;
wire _guard376 = fsm1_out < 4'd5;
wire _guard377 = _guard375 & _guard376;
wire _guard378 = early_reset_static_seq19_go_out;
wire _guard379 = _guard377 & _guard378;
wire _guard380 = _guard374 | _guard379;
wire _guard381 = fsm5_out >= 4'd2;
wire _guard382 = fsm5_out < 4'd5;
wire _guard383 = _guard381 & _guard382;
wire _guard384 = early_reset_static_seq3_go_out;
wire _guard385 = _guard383 & _guard384;
wire _guard386 = fsm8_out >= 4'd2;
wire _guard387 = fsm8_out < 4'd5;
wire _guard388 = _guard386 & _guard387;
wire _guard389 = early_reset_static_seq11_go_out;
wire _guard390 = _guard388 & _guard389;
wire _guard391 = _guard385 | _guard390;
wire _guard392 = fsm1_out >= 4'd2;
wire _guard393 = fsm1_out < 4'd5;
wire _guard394 = _guard392 & _guard393;
wire _guard395 = early_reset_static_seq19_go_out;
wire _guard396 = _guard394 & _guard395;
wire _guard397 = _guard391 | _guard396;
wire _guard398 = fsm5_out >= 4'd2;
wire _guard399 = fsm5_out < 4'd5;
wire _guard400 = _guard398 & _guard399;
wire _guard401 = early_reset_static_seq3_go_out;
wire _guard402 = _guard400 & _guard401;
wire _guard403 = fsm8_out >= 4'd2;
wire _guard404 = fsm8_out < 4'd5;
wire _guard405 = _guard403 & _guard404;
wire _guard406 = early_reset_static_seq11_go_out;
wire _guard407 = _guard405 & _guard406;
wire _guard408 = _guard402 | _guard407;
wire _guard409 = fsm1_out >= 4'd2;
wire _guard410 = fsm1_out < 4'd5;
wire _guard411 = _guard409 & _guard410;
wire _guard412 = early_reset_static_seq19_go_out;
wire _guard413 = _guard411 & _guard412;
wire _guard414 = _guard408 | _guard413;
wire _guard415 = early_reset_static_seq0_go_out;
wire _guard416 = early_reset_static_seq0_go_out;
wire _guard417 = wrapper_early_reset_static_seq_go_out;
wire _guard418 = fsm3_out >= 15'd5924;
wire _guard419 = fsm3_out < 15'd11844;
wire _guard420 = _guard418 & _guard419;
wire _guard421 = early_reset_static_seq_go_out;
wire _guard422 = _guard420 & _guard421;
wire _guard423 = early_reset_static_seq19_go_out;
wire _guard424 = early_reset_static_seq19_go_out;
wire _guard425 = fsm3_out == 15'd0;
wire _guard426 = signal_reg_out;
wire _guard427 = _guard425 & _guard426;
wire _guard428 = fsm3_out == 15'd0;
wire _guard429 = signal_reg_out;
wire _guard430 = ~_guard429;
wire _guard431 = _guard428 & _guard430;
wire _guard432 = wrapper_early_reset_static_seq_go_out;
wire _guard433 = _guard431 & _guard432;
wire _guard434 = _guard427 | _guard433;
wire _guard435 = fsm3_out == 15'd0;
wire _guard436 = signal_reg_out;
wire _guard437 = ~_guard436;
wire _guard438 = _guard435 & _guard437;
wire _guard439 = wrapper_early_reset_static_seq_go_out;
wire _guard440 = _guard438 & _guard439;
wire _guard441 = fsm3_out == 15'd0;
wire _guard442 = signal_reg_out;
wire _guard443 = _guard441 & _guard442;
wire _guard444 = fsm7_out >= 7'd2;
wire _guard445 = fsm7_out < 7'd90;
wire _guard446 = _guard444 & _guard445;
wire _guard447 = early_reset_static_seq9_go_out;
wire _guard448 = _guard446 & _guard447;
wire _guard449 = fsm5_out == 4'd1;
wire _guard450 = fsm5_out == 4'd5;
wire _guard451 = _guard449 | _guard450;
wire _guard452 = fsm5_out == 4'd8;
wire _guard453 = _guard451 | _guard452;
wire _guard454 = early_reset_static_seq3_go_out;
wire _guard455 = _guard453 & _guard454;
wire _guard456 = fsm8_out == 4'd1;
wire _guard457 = fsm8_out == 4'd5;
wire _guard458 = _guard456 | _guard457;
wire _guard459 = fsm8_out == 4'd8;
wire _guard460 = _guard458 | _guard459;
wire _guard461 = early_reset_static_seq11_go_out;
wire _guard462 = _guard460 & _guard461;
wire _guard463 = _guard455 | _guard462;
wire _guard464 = fsm1_out == 4'd1;
wire _guard465 = fsm1_out == 4'd5;
wire _guard466 = _guard464 | _guard465;
wire _guard467 = fsm1_out == 4'd8;
wire _guard468 = _guard466 | _guard467;
wire _guard469 = early_reset_static_seq19_go_out;
wire _guard470 = _guard468 & _guard469;
wire _guard471 = _guard463 | _guard470;
wire _guard472 = fsm5_out == 4'd1;
wire _guard473 = early_reset_static_seq3_go_out;
wire _guard474 = _guard472 & _guard473;
wire _guard475 = fsm8_out == 4'd1;
wire _guard476 = early_reset_static_seq11_go_out;
wire _guard477 = _guard475 & _guard476;
wire _guard478 = fsm5_out == 4'd8;
wire _guard479 = early_reset_static_seq3_go_out;
wire _guard480 = _guard478 & _guard479;
wire _guard481 = fsm1_out == 4'd1;
wire _guard482 = early_reset_static_seq19_go_out;
wire _guard483 = _guard481 & _guard482;
wire _guard484 = _guard480 | _guard483;
wire _guard485 = fsm5_out == 4'd5;
wire _guard486 = early_reset_static_seq3_go_out;
wire _guard487 = _guard485 & _guard486;
wire _guard488 = fsm8_out == 4'd5;
wire _guard489 = early_reset_static_seq11_go_out;
wire _guard490 = _guard488 & _guard489;
wire _guard491 = _guard487 | _guard490;
wire _guard492 = fsm1_out == 4'd5;
wire _guard493 = early_reset_static_seq19_go_out;
wire _guard494 = _guard492 & _guard493;
wire _guard495 = _guard491 | _guard494;
wire _guard496 = fsm1_out == 4'd8;
wire _guard497 = early_reset_static_seq19_go_out;
wire _guard498 = _guard496 & _guard497;
wire _guard499 = fsm8_out == 4'd8;
wire _guard500 = early_reset_static_seq11_go_out;
wire _guard501 = _guard499 & _guard500;
wire _guard502 = fsm4_out == 10'd0;
wire _guard503 = early_reset_static_seq0_go_out;
wire _guard504 = _guard502 & _guard503;
wire _guard505 = fsm2_out == 7'd90;
wire _guard506 = early_reset_static_seq1_go_out;
wire _guard507 = _guard505 & _guard506;
wire _guard508 = _guard504 | _guard507;
wire _guard509 = fsm6_out == 10'd0;
wire _guard510 = early_reset_static_seq8_go_out;
wire _guard511 = _guard509 & _guard510;
wire _guard512 = _guard508 | _guard511;
wire _guard513 = fsm7_out == 7'd90;
wire _guard514 = early_reset_static_seq9_go_out;
wire _guard515 = _guard513 & _guard514;
wire _guard516 = _guard512 | _guard515;
wire _guard517 = fsm_out == 10'd0;
wire _guard518 = early_reset_static_seq16_go_out;
wire _guard519 = _guard517 & _guard518;
wire _guard520 = _guard516 | _guard519;
wire _guard521 = fsm0_out == 7'd90;
wire _guard522 = early_reset_static_seq17_go_out;
wire _guard523 = _guard521 & _guard522;
wire _guard524 = _guard520 | _guard523;
wire _guard525 = fsm2_out == 7'd90;
wire _guard526 = early_reset_static_seq1_go_out;
wire _guard527 = _guard525 & _guard526;
wire _guard528 = fsm7_out == 7'd90;
wire _guard529 = early_reset_static_seq9_go_out;
wire _guard530 = _guard528 & _guard529;
wire _guard531 = _guard527 | _guard530;
wire _guard532 = fsm0_out == 7'd90;
wire _guard533 = early_reset_static_seq17_go_out;
wire _guard534 = _guard532 & _guard533;
wire _guard535 = _guard531 | _guard534;
wire _guard536 = fsm4_out == 10'd0;
wire _guard537 = early_reset_static_seq0_go_out;
wire _guard538 = _guard536 & _guard537;
wire _guard539 = fsm6_out == 10'd0;
wire _guard540 = early_reset_static_seq8_go_out;
wire _guard541 = _guard539 & _guard540;
wire _guard542 = _guard538 | _guard541;
wire _guard543 = fsm_out == 10'd0;
wire _guard544 = early_reset_static_seq16_go_out;
wire _guard545 = _guard543 & _guard544;
wire _guard546 = _guard542 | _guard545;
wire _guard547 = fsm2_out == 7'd0;
wire _guard548 = early_reset_static_seq1_go_out;
wire _guard549 = _guard547 & _guard548;
wire _guard550 = fsm5_out == 4'd2;
wire _guard551 = early_reset_static_seq3_go_out;
wire _guard552 = _guard550 & _guard551;
wire _guard553 = _guard549 | _guard552;
wire _guard554 = fsm7_out == 7'd0;
wire _guard555 = early_reset_static_seq9_go_out;
wire _guard556 = _guard554 & _guard555;
wire _guard557 = _guard553 | _guard556;
wire _guard558 = fsm8_out == 4'd2;
wire _guard559 = early_reset_static_seq11_go_out;
wire _guard560 = _guard558 & _guard559;
wire _guard561 = _guard557 | _guard560;
wire _guard562 = fsm0_out == 7'd0;
wire _guard563 = early_reset_static_seq17_go_out;
wire _guard564 = _guard562 & _guard563;
wire _guard565 = _guard561 | _guard564;
wire _guard566 = fsm1_out == 4'd2;
wire _guard567 = early_reset_static_seq19_go_out;
wire _guard568 = _guard566 & _guard567;
wire _guard569 = _guard565 | _guard568;
wire _guard570 = fsm5_out == 4'd2;
wire _guard571 = early_reset_static_seq3_go_out;
wire _guard572 = _guard570 & _guard571;
wire _guard573 = fsm8_out == 4'd2;
wire _guard574 = early_reset_static_seq11_go_out;
wire _guard575 = _guard573 & _guard574;
wire _guard576 = _guard572 | _guard575;
wire _guard577 = fsm1_out == 4'd2;
wire _guard578 = early_reset_static_seq19_go_out;
wire _guard579 = _guard577 & _guard578;
wire _guard580 = _guard576 | _guard579;
wire _guard581 = fsm2_out == 7'd0;
wire _guard582 = early_reset_static_seq1_go_out;
wire _guard583 = _guard581 & _guard582;
wire _guard584 = fsm7_out == 7'd0;
wire _guard585 = early_reset_static_seq9_go_out;
wire _guard586 = _guard584 & _guard585;
wire _guard587 = _guard583 | _guard586;
wire _guard588 = fsm0_out == 7'd0;
wire _guard589 = early_reset_static_seq17_go_out;
wire _guard590 = _guard588 & _guard589;
wire _guard591 = _guard587 | _guard590;
wire _guard592 = fsm0_out == 7'd0;
wire _guard593 = early_reset_static_seq17_go_out;
wire _guard594 = _guard592 & _guard593;
wire _guard595 = fsm1_out == 4'd9;
wire _guard596 = early_reset_static_seq19_go_out;
wire _guard597 = _guard595 & _guard596;
wire _guard598 = _guard594 | _guard597;
wire _guard599 = fsm1_out == 4'd7;
wire _guard600 = early_reset_static_seq19_go_out;
wire _guard601 = _guard599 & _guard600;
wire _guard602 = fsm0_out == 7'd0;
wire _guard603 = early_reset_static_seq17_go_out;
wire _guard604 = _guard602 & _guard603;
wire _guard605 = fsm1_out == 4'd7;
wire _guard606 = fsm1_out == 4'd9;
wire _guard607 = _guard605 | _guard606;
wire _guard608 = early_reset_static_seq19_go_out;
wire _guard609 = _guard607 & _guard608;
wire _guard610 = _guard604 | _guard609;
wire _guard611 = fsm1_out == 4'd9;
wire _guard612 = early_reset_static_seq19_go_out;
wire _guard613 = _guard611 & _guard612;
wire _guard614 = fsm0_out == 7'd0;
wire _guard615 = early_reset_static_seq17_go_out;
wire _guard616 = _guard614 & _guard615;
wire _guard617 = fsm0_out == 7'd0;
wire _guard618 = early_reset_static_seq17_go_out;
wire _guard619 = _guard617 & _guard618;
wire _guard620 = fsm1_out == 4'd7;
wire _guard621 = fsm1_out == 4'd9;
wire _guard622 = _guard620 | _guard621;
wire _guard623 = early_reset_static_seq19_go_out;
wire _guard624 = _guard622 & _guard623;
wire _guard625 = _guard619 | _guard624;
wire _guard626 = fsm0_out >= 7'd2;
wire _guard627 = fsm0_out < 7'd90;
wire _guard628 = _guard626 & _guard627;
wire _guard629 = early_reset_static_seq17_go_out;
wire _guard630 = _guard628 & _guard629;
wire _guard631 = fsm7_out == 7'd0;
wire _guard632 = early_reset_static_seq9_go_out;
wire _guard633 = _guard631 & _guard632;
wire _guard634 = fsm8_out == 4'd9;
wire _guard635 = early_reset_static_seq11_go_out;
wire _guard636 = _guard634 & _guard635;
wire _guard637 = _guard633 | _guard636;
wire _guard638 = fsm8_out == 4'd7;
wire _guard639 = early_reset_static_seq11_go_out;
wire _guard640 = _guard638 & _guard639;
wire _guard641 = fsm1_out == 4'd0;
wire _guard642 = early_reset_static_seq19_go_out;
wire _guard643 = _guard641 & _guard642;
wire _guard644 = _guard640 | _guard643;
wire _guard645 = fsm7_out == 7'd0;
wire _guard646 = early_reset_static_seq9_go_out;
wire _guard647 = _guard645 & _guard646;
wire _guard648 = fsm8_out == 4'd7;
wire _guard649 = fsm8_out == 4'd9;
wire _guard650 = _guard648 | _guard649;
wire _guard651 = early_reset_static_seq11_go_out;
wire _guard652 = _guard650 & _guard651;
wire _guard653 = _guard647 | _guard652;
wire _guard654 = fsm1_out == 4'd0;
wire _guard655 = early_reset_static_seq19_go_out;
wire _guard656 = _guard654 & _guard655;
wire _guard657 = fsm8_out == 4'd9;
wire _guard658 = early_reset_static_seq11_go_out;
wire _guard659 = _guard657 & _guard658;
wire _guard660 = fsm7_out == 7'd0;
wire _guard661 = early_reset_static_seq9_go_out;
wire _guard662 = _guard660 & _guard661;
wire _guard663 = fsm7_out == 7'd0;
wire _guard664 = early_reset_static_seq9_go_out;
wire _guard665 = _guard663 & _guard664;
wire _guard666 = fsm8_out == 4'd7;
wire _guard667 = fsm8_out == 4'd9;
wire _guard668 = _guard666 | _guard667;
wire _guard669 = early_reset_static_seq11_go_out;
wire _guard670 = _guard668 & _guard669;
wire _guard671 = _guard665 | _guard670;
wire _guard672 = fsm1_out == 4'd0;
wire _guard673 = early_reset_static_seq19_go_out;
wire _guard674 = _guard672 & _guard673;
wire _guard675 = _guard671 | _guard674;
wire _guard676 = early_reset_static_seq17_go_out;
wire _guard677 = early_reset_static_seq17_go_out;
assign i0_write_en = _guard19;
assign i0_clk = clk;
assign i0_reset = reset;
assign i0_in =
  _guard30 ? add1_out :
  _guard37 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard37, _guard30})) begin
    $fatal(2, "Multiple assignment to port `i0.in'.");
end
end
assign v_0_write_en = _guard54;
assign v_0_clk = clk;
assign v_0_reset = reset;
assign v_0_in =
  _guard57 ? D_int_read_data :
  _guard60 ? B_int_read_data :
  _guard71 ? bin_read0_0_out :
  _guard74 ? F_int_read_data :
  'x;
always_comb begin
  if(~$onehot0({_guard74, _guard71, _guard60, _guard57})) begin
    $fatal(2, "Multiple assignment to port `v_0.in'.");
end
end
assign adder1_left =
  _guard75 ? fsm2_out :
  7'd0;
assign adder1_right =
  _guard76 ? 7'd1 :
  7'd0;
assign early_reset_static_seq9_go_in = _guard81;
assign A_int_read_en = _guard84;
assign A_int_clk = clk;
assign A_int_addr0 = i0_out;
assign A_int_reset = reset;
assign A_int_addr1 = k0_out;
assign C_int_read_en = _guard93;
assign C_int_clk = clk;
assign C_int_addr0 = i0_out;
assign C_int_reset = reset;
assign C_int_addr1 = k0_out;
assign add1_left =
  _guard110 ? i0_out :
  _guard121 ? j0_out :
  _guard132 ? k0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard132, _guard121, _guard110})) begin
    $fatal(2, "Multiple assignment to port `add1.left'.");
end
end
assign add1_right = const17_out;
assign done = _guard168;
assign fsm_write_en = _guard169;
assign fsm_clk = clk;
assign fsm_reset = reset;
assign fsm_in =
  _guard172 ? 10'd0 :
  _guard175 ? adder6_out :
  10'd0;
always_comb begin
  if(~$onehot0({_guard175, _guard172})) begin
    $fatal(2, "Multiple assignment to port `fsm.in'.");
end
end
assign fsm6_write_en = _guard176;
assign fsm6_clk = clk;
assign fsm6_reset = reset;
assign fsm6_in =
  _guard179 ? 10'd0 :
  _guard182 ? adder3_out :
  10'd0;
always_comb begin
  if(~$onehot0({_guard182, _guard179})) begin
    $fatal(2, "Multiple assignment to port `fsm6.in'.");
end
end
assign adder_left =
  _guard183 ? fsm3_out :
  15'd0;
assign adder_right =
  _guard184 ? 15'd1 :
  15'd0;
assign early_reset_static_seq17_go_in = _guard189;
assign add0_left = bin_read0_0_out;
assign add0_right = v_0_out;
assign fsm3_write_en = _guard212;
assign fsm3_clk = clk;
assign fsm3_reset = reset;
assign fsm3_in =
  _guard215 ? adder_out :
  _guard218 ? 15'd0 :
  15'd0;
always_comb begin
  if(~$onehot0({_guard218, _guard215})) begin
    $fatal(2, "Multiple assignment to port `fsm3.in'.");
end
end
assign fsm5_write_en = _guard219;
assign fsm5_clk = clk;
assign fsm5_reset = reset;
assign fsm5_in =
  _guard222 ? 4'd0 :
  _guard225 ? adder2_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard225, _guard222})) begin
    $fatal(2, "Multiple assignment to port `fsm5.in'.");
end
end
assign adder4_left =
  _guard226 ? fsm7_out :
  7'd0;
assign adder4_right =
  _guard227 ? 7'd1 :
  7'd0;
assign D_int_read_en = _guard230;
assign D_int_clk = clk;
assign D_int_addr0 = k0_out;
assign D_int_reset = reset;
assign D_int_addr1 = j0_out;
assign fsm8_write_en = _guard237;
assign fsm8_clk = clk;
assign fsm8_reset = reset;
assign fsm8_in =
  _guard240 ? 4'd0 :
  _guard243 ? adder5_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard243, _guard240})) begin
    $fatal(2, "Multiple assignment to port `fsm8.in'.");
end
end
assign early_reset_static_seq3_done_in = ud2_out;
assign early_reset_static_seq0_go_in = _guard248;
assign early_reset_static_seq16_go_in = _guard253;
assign early_reset_static_seq16_done_in = ud6_out;
assign fsm1_write_en = _guard254;
assign fsm1_clk = clk;
assign fsm1_reset = reset;
assign fsm1_in =
  _guard257 ? 4'd0 :
  _guard260 ? adder8_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard260, _guard257})) begin
    $fatal(2, "Multiple assignment to port `fsm1.in'.");
end
end
assign fsm4_write_en = _guard261;
assign fsm4_clk = clk;
assign fsm4_reset = reset;
assign fsm4_in =
  _guard264 ? 10'd0 :
  _guard267 ? adder0_out :
  10'd0;
always_comb begin
  if(~$onehot0({_guard267, _guard264})) begin
    $fatal(2, "Multiple assignment to port `fsm4.in'.");
end
end
assign early_reset_static_seq1_done_in = ud1_out;
assign early_reset_static_seq3_go_in = _guard272;
assign B_int_read_en = _guard275;
assign B_int_clk = clk;
assign B_int_addr0 = k0_out;
assign B_int_reset = reset;
assign B_int_addr1 = j0_out;
assign fsm7_write_en = _guard282;
assign fsm7_clk = clk;
assign fsm7_reset = reset;
assign fsm7_in =
  _guard285 ? adder4_out :
  _guard288 ? 7'd0 :
  7'd0;
always_comb begin
  if(~$onehot0({_guard288, _guard285})) begin
    $fatal(2, "Multiple assignment to port `fsm7.in'.");
end
end
assign adder6_left =
  _guard289 ? fsm_out :
  10'd0;
assign adder6_right =
  _guard290 ? 10'd1 :
  10'd0;
assign early_reset_static_seq1_go_in = _guard295;
assign early_reset_static_seq8_done_in = ud3_out;
assign fsm0_write_en = _guard296;
assign fsm0_clk = clk;
assign fsm0_reset = reset;
assign fsm0_in =
  _guard299 ? 7'd0 :
  _guard302 ? adder7_out :
  7'd0;
always_comb begin
  if(~$onehot0({_guard302, _guard299})) begin
    $fatal(2, "Multiple assignment to port `fsm0.in'.");
end
end
assign fsm2_write_en = _guard303;
assign fsm2_clk = clk;
assign fsm2_reset = reset;
assign fsm2_in =
  _guard306 ? adder1_out :
  _guard309 ? 7'd0 :
  7'd0;
always_comb begin
  if(~$onehot0({_guard309, _guard306})) begin
    $fatal(2, "Multiple assignment to port `fsm2.in'.");
end
end
assign adder2_left =
  _guard310 ? fsm5_out :
  4'd0;
assign adder2_right =
  _guard311 ? 4'd1 :
  4'd0;
assign adder3_left =
  _guard312 ? fsm6_out :
  10'd0;
assign adder3_right =
  _guard313 ? 10'd1 :
  10'd0;
assign adder5_left =
  _guard314 ? fsm8_out :
  4'd0;
assign adder5_right =
  _guard315 ? 4'd1 :
  4'd0;
assign wrapper_early_reset_static_seq_done_in = _guard318;
assign E_int_write_en = _guard325;
assign E_int_read_en = _guard332;
assign E_int_clk = clk;
assign E_int_addr0 = i0_out;
assign E_int_reset = reset;
assign E_int_write_data =
  _guard348 ? add0_out :
  _guard351 ? const14_out :
  'x;
always_comb begin
  if(~$onehot0({_guard351, _guard348})) begin
    $fatal(2, "Multiple assignment to port `E_int.write_data'.");
end
end
assign E_int_addr1 =
  _guard360 ? j0_out :
  _guard363 ? k0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard363, _guard360})) begin
    $fatal(2, "Multiple assignment to port `E_int.addr1'.");
end
end
assign mult_pipe0_clk = clk;
assign mult_pipe0_left = bin_read0_0_out;
assign mult_pipe0_go = _guard397;
assign mult_pipe0_reset = reset;
assign mult_pipe0_right = v_0_out;
assign adder0_left =
  _guard415 ? fsm4_out :
  10'd0;
assign adder0_right =
  _guard416 ? 10'd1 :
  10'd0;
assign early_reset_static_seq_go_in = _guard417;
assign early_reset_static_seq8_go_in = _guard422;
assign early_reset_static_seq11_done_in = ud5_out;
assign adder8_left =
  _guard423 ? fsm1_out :
  4'd0;
assign adder8_right =
  _guard424 ? 4'd1 :
  4'd0;
assign signal_reg_write_en = _guard434;
assign signal_reg_clk = clk;
assign signal_reg_reset = reset;
assign signal_reg_in =
  _guard440 ? 1'd1 :
  _guard443 ? 1'd0 :
  1'd0;
always_comb begin
  if(~$onehot0({_guard443, _guard440})) begin
    $fatal(2, "Multiple assignment to port `signal_reg.in'.");
end
end
assign early_reset_static_seq11_go_in = _guard448;
assign bin_read0_0_write_en = _guard471;
assign bin_read0_0_clk = clk;
assign bin_read0_0_reset = reset;
assign bin_read0_0_in =
  _guard474 ? A_int_read_data :
  _guard477 ? C_int_read_data :
  _guard484 ? E_int_read_data :
  _guard495 ? mult_pipe0_out :
  _guard498 ? G_int_read_data :
  _guard501 ? F_int_read_data :
  'x;
always_comb begin
  if(~$onehot0({_guard501, _guard498, _guard495, _guard484, _guard477, _guard474})) begin
    $fatal(2, "Multiple assignment to port `bin_read0_0.in'.");
end
end
assign j0_write_en = _guard524;
assign j0_clk = clk;
assign j0_reset = reset;
assign j0_in =
  _guard535 ? add1_out :
  _guard546 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard546, _guard535})) begin
    $fatal(2, "Multiple assignment to port `j0.in'.");
end
end
assign k0_write_en = _guard569;
assign k0_clk = clk;
assign k0_reset = reset;
assign k0_in =
  _guard580 ? add1_out :
  _guard591 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard591, _guard580})) begin
    $fatal(2, "Multiple assignment to port `k0.in'.");
end
end
assign early_reset_static_seq_done_in = ud_out;
assign early_reset_static_seq19_done_in = ud8_out;
assign G_int_write_en = _guard598;
assign G_int_read_en = _guard601;
assign G_int_clk = clk;
assign G_int_addr0 = i0_out;
assign G_int_reset = reset;
assign G_int_write_data =
  _guard613 ? add0_out :
  _guard616 ? const14_out :
  'x;
always_comb begin
  if(~$onehot0({_guard616, _guard613})) begin
    $fatal(2, "Multiple assignment to port `G_int.write_data'.");
end
end
assign G_int_addr1 = j0_out;
assign early_reset_static_seq0_done_in = ud0_out;
assign early_reset_static_seq19_go_in = _guard630;
assign wrapper_early_reset_static_seq_go_in = go;
assign F_int_write_en = _guard637;
assign F_int_read_en = _guard644;
assign F_int_clk = clk;
assign F_int_addr0 =
  _guard653 ? i0_out :
  _guard656 ? k0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard656, _guard653})) begin
    $fatal(2, "Multiple assignment to port `F_int.addr0'.");
end
end
assign F_int_reset = reset;
assign F_int_write_data =
  _guard659 ? add0_out :
  _guard662 ? const14_out :
  'x;
always_comb begin
  if(~$onehot0({_guard662, _guard659})) begin
    $fatal(2, "Multiple assignment to port `F_int.write_data'.");
end
end
assign F_int_addr1 = j0_out;
assign adder7_left =
  _guard676 ? fsm0_out :
  7'd0;
assign adder7_right =
  _guard677 ? 7'd1 :
  7'd0;
assign early_reset_static_seq9_done_in = ud4_out;
assign early_reset_static_seq17_done_in = ud7_out;
// COMPONENT END: main
endmodule

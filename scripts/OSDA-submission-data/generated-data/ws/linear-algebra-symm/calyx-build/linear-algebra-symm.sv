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
    $readmemh({DATA, "/alpha_int.dat"}, alpha_int.mem);
    $readmemh({DATA, "/beta_int.dat"}, beta_int.mem);
end
final begin
    $writememh({DATA, "/A_int.out"}, A_int.mem.mem);
    $writememh({DATA, "/B_int.out"}, B_int.mem.mem);
    $writememh({DATA, "/C_int.out"}, C_int.mem.mem);
    $writememh({DATA, "/alpha_int.out"}, alpha_int.mem);
    $writememh({DATA, "/beta_int.out"}, beta_int.mem);
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
logic [31:0] A_int_read0_0_in;
logic A_int_read0_0_write_en;
logic A_int_read0_0_clk;
logic A_int_read0_0_reset;
logic [31:0] A_int_read0_0_out;
logic A_int_read0_0_done;
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
logic [31:0] B_int_read0_0_in;
logic B_int_read0_0_write_en;
logic B_int_read0_0_clk;
logic B_int_read0_0_reset;
logic [31:0] B_int_read0_0_out;
logic B_int_read0_0_done;
logic [31:0] C_i_j_0_in;
logic C_i_j_0_write_en;
logic C_i_j_0_clk;
logic C_i_j_0_reset;
logic [31:0] C_i_j_0_out;
logic C_i_j_0_done;
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
logic [3:0] add2_left;
logic [3:0] add2_right;
logic [3:0] add2_out;
logic [31:0] add3_left;
logic [31:0] add3_right;
logic [31:0] add3_out;
logic [31:0] add4_left;
logic [31:0] add4_right;
logic [31:0] add4_out;
logic alpha_int_clk;
logic alpha_int_reset;
logic alpha_int_addr0;
logic alpha_int_write_en;
logic [31:0] alpha_int_write_data;
logic alpha_int_read_en;
logic [31:0] alpha_int_read_data;
logic alpha_int_write_done;
logic alpha_int_read_done;
logic [31:0] alpha_int_read0_0_in;
logic alpha_int_read0_0_write_en;
logic alpha_int_read0_0_clk;
logic alpha_int_read0_0_reset;
logic [31:0] alpha_int_read0_0_out;
logic alpha_int_read0_0_done;
logic beta_int_clk;
logic beta_int_reset;
logic beta_int_addr0;
logic beta_int_write_en;
logic [31:0] beta_int_write_data;
logic beta_int_read_en;
logic [31:0] beta_int_read_data;
logic beta_int_write_done;
logic beta_int_read_done;
logic [31:0] beta_int_read0_0_in;
logic beta_int_read0_0_write_en;
logic beta_int_read0_0_clk;
logic beta_int_read0_0_reset;
logic [31:0] beta_int_read0_0_out;
logic beta_int_read0_0_done;
logic [31:0] const0_out;
logic [3:0] const1_out;
logic const10_out;
logic [3:0] const11_out;
logic [3:0] const2_out;
logic [3:0] const4_out;
logic const9_out;
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
logic [3:0] k_0_in;
logic k_0_write_en;
logic k_0_clk;
logic k_0_reset;
logic [3:0] k_0_out;
logic k_0_done;
logic [3:0] le0_left;
logic [3:0] le0_right;
logic le0_out;
logic [3:0] lt0_left;
logic [3:0] lt0_right;
logic lt0_out;
logic mult_pipe0_clk;
logic mult_pipe0_reset;
logic mult_pipe0_go;
logic [31:0] mult_pipe0_left;
logic [31:0] mult_pipe0_right;
logic [31:0] mult_pipe0_out;
logic mult_pipe0_done;
logic [31:0] temp2_0_in;
logic temp2_0_write_en;
logic temp2_0_clk;
logic temp2_0_reset;
logic [31:0] temp2_0_out;
logic temp2_0_done;
logic comb_reg_in;
logic comb_reg_write_en;
logic comb_reg_clk;
logic comb_reg_reset;
logic comb_reg_out;
logic comb_reg_done;
logic comb_reg0_in;
logic comb_reg0_write_en;
logic comb_reg0_clk;
logic comb_reg0_reset;
logic comb_reg0_out;
logic comb_reg0_done;
logic comb_reg1_in;
logic comb_reg1_write_en;
logic comb_reg1_clk;
logic comb_reg1_reset;
logic comb_reg1_out;
logic comb_reg1_done;
logic [4:0] fsm_in;
logic fsm_write_en;
logic fsm_clk;
logic fsm_reset;
logic [4:0] fsm_out;
logic fsm_done;
logic ud_out;
logic [4:0] adder_left;
logic [4:0] adder_right;
logic [4:0] adder_out;
logic ud0_out;
logic [4:0] adder0_left;
logic [4:0] adder0_right;
logic [4:0] adder0_out;
logic ud1_out;
logic [4:0] adder1_left;
logic [4:0] adder1_right;
logic [4:0] adder1_out;
logic ud2_out;
logic [4:0] adder2_left;
logic [4:0] adder2_right;
logic [4:0] adder2_out;
logic ud3_out;
logic [4:0] adder3_left;
logic [4:0] adder3_right;
logic [4:0] adder3_out;
logic ud4_out;
logic [4:0] adder4_left;
logic [4:0] adder4_right;
logic [4:0] adder4_out;
logic ud5_out;
logic [4:0] adder5_left;
logic [4:0] adder5_right;
logic [4:0] adder5_out;
logic signal_reg_in;
logic signal_reg_write_en;
logic signal_reg_clk;
logic signal_reg_reset;
logic signal_reg_out;
logic signal_reg_done;
logic [3:0] fsm0_in;
logic fsm0_write_en;
logic fsm0_clk;
logic fsm0_reset;
logic [3:0] fsm0_out;
logic fsm0_done;
logic invoke2_go_in;
logic invoke2_go_out;
logic invoke2_done_in;
logic invoke2_done_out;
logic invoke33_go_in;
logic invoke33_go_out;
logic invoke33_done_in;
logic invoke33_done_out;
logic early_reset_cond00_go_in;
logic early_reset_cond00_go_out;
logic early_reset_cond00_done_in;
logic early_reset_cond00_done_out;
logic early_reset_cond10_go_in;
logic early_reset_cond10_go_out;
logic early_reset_cond10_done_in;
logic early_reset_cond10_done_out;
logic early_reset_cond20_go_in;
logic early_reset_cond20_go_out;
logic early_reset_cond20_done_in;
logic early_reset_cond20_done_out;
logic early_reset_static_par_go_in;
logic early_reset_static_par_go_out;
logic early_reset_static_par_done_in;
logic early_reset_static_par_done_out;
logic early_reset_static_par0_go_in;
logic early_reset_static_par0_go_out;
logic early_reset_static_par0_done_in;
logic early_reset_static_par0_done_out;
logic early_reset_static_seq_go_in;
logic early_reset_static_seq_go_out;
logic early_reset_static_seq_done_in;
logic early_reset_static_seq_done_out;
logic early_reset_static_par4_go_in;
logic early_reset_static_par4_go_out;
logic early_reset_static_par4_done_in;
logic early_reset_static_par4_done_out;
logic wrapper_early_reset_static_par_go_in;
logic wrapper_early_reset_static_par_go_out;
logic wrapper_early_reset_static_par_done_in;
logic wrapper_early_reset_static_par_done_out;
logic wrapper_early_reset_cond00_go_in;
logic wrapper_early_reset_cond00_go_out;
logic wrapper_early_reset_cond00_done_in;
logic wrapper_early_reset_cond00_done_out;
logic wrapper_early_reset_cond10_go_in;
logic wrapper_early_reset_cond10_go_out;
logic wrapper_early_reset_cond10_done_in;
logic wrapper_early_reset_cond10_done_out;
logic wrapper_early_reset_static_par0_go_in;
logic wrapper_early_reset_static_par0_go_out;
logic wrapper_early_reset_static_par0_done_in;
logic wrapper_early_reset_static_par0_done_out;
logic wrapper_early_reset_cond20_go_in;
logic wrapper_early_reset_cond20_go_out;
logic wrapper_early_reset_cond20_done_in;
logic wrapper_early_reset_cond20_done_out;
logic while_wrapper_early_reset_static_seq_go_in;
logic while_wrapper_early_reset_static_seq_go_out;
logic while_wrapper_early_reset_static_seq_done_in;
logic while_wrapper_early_reset_static_seq_done_out;
logic wrapper_early_reset_static_par4_go_in;
logic wrapper_early_reset_static_par4_go_out;
logic wrapper_early_reset_static_par4_done_in;
logic wrapper_early_reset_static_par4_done_out;
logic tdcc_go_in;
logic tdcc_go_out;
logic tdcc_done_in;
logic tdcc_done_out;
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
std_reg # (
    .WIDTH(32)
) A_int_read0_0 (
    .clk(A_int_read0_0_clk),
    .done(A_int_read0_0_done),
    .in(A_int_read0_0_in),
    .out(A_int_read0_0_out),
    .reset(A_int_read0_0_reset),
    .write_en(A_int_read0_0_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(12),
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
std_reg # (
    .WIDTH(32)
) B_int_read0_0 (
    .clk(B_int_read0_0_clk),
    .done(B_int_read0_0_done),
    .in(B_int_read0_0_in),
    .out(B_int_read0_0_out),
    .reset(B_int_read0_0_reset),
    .write_en(B_int_read0_0_write_en)
);
std_reg # (
    .WIDTH(32)
) C_i_j_0 (
    .clk(C_i_j_0_clk),
    .done(C_i_j_0_done),
    .in(C_i_j_0_in),
    .out(C_i_j_0_out),
    .reset(C_i_j_0_reset),
    .write_en(C_i_j_0_write_en)
);
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_IDX_SIZE(4),
    .D1_SIZE(12),
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
std_add # (
    .WIDTH(4)
) add2 (
    .left(add2_left),
    .out(add2_out),
    .right(add2_right)
);
std_add # (
    .WIDTH(32)
) add3 (
    .left(add3_left),
    .out(add3_out),
    .right(add3_right)
);
std_add # (
    .WIDTH(32)
) add4 (
    .left(add4_left),
    .out(add4_out),
    .right(add4_right)
);
seq_mem_d1 # (
    .IDX_SIZE(1),
    .SIZE(1),
    .WIDTH(32)
) alpha_int (
    .addr0(alpha_int_addr0),
    .clk(alpha_int_clk),
    .read_data(alpha_int_read_data),
    .read_done(alpha_int_read_done),
    .read_en(alpha_int_read_en),
    .reset(alpha_int_reset),
    .write_data(alpha_int_write_data),
    .write_done(alpha_int_write_done),
    .write_en(alpha_int_write_en)
);
std_reg # (
    .WIDTH(32)
) alpha_int_read0_0 (
    .clk(alpha_int_read0_0_clk),
    .done(alpha_int_read0_0_done),
    .in(alpha_int_read0_0_in),
    .out(alpha_int_read0_0_out),
    .reset(alpha_int_read0_0_reset),
    .write_en(alpha_int_read0_0_write_en)
);
seq_mem_d1 # (
    .IDX_SIZE(1),
    .SIZE(1),
    .WIDTH(32)
) beta_int (
    .addr0(beta_int_addr0),
    .clk(beta_int_clk),
    .read_data(beta_int_read_data),
    .read_done(beta_int_read_done),
    .read_en(beta_int_read_en),
    .reset(beta_int_reset),
    .write_data(beta_int_write_data),
    .write_done(beta_int_write_done),
    .write_en(beta_int_write_en)
);
std_reg # (
    .WIDTH(32)
) beta_int_read0_0 (
    .clk(beta_int_read0_0_clk),
    .done(beta_int_read0_0_done),
    .in(beta_int_read0_0_in),
    .out(beta_int_read0_0_out),
    .reset(beta_int_read0_0_reset),
    .write_en(beta_int_read0_0_write_en)
);
std_const # (
    .VALUE(32'd0),
    .WIDTH(32)
) const0 (
    .out(const0_out)
);
std_const # (
    .VALUE(4'd0),
    .WIDTH(4)
) const1 (
    .out(const1_out)
);
std_const # (
    .VALUE(1'd0),
    .WIDTH(1)
) const10 (
    .out(const10_out)
);
std_const # (
    .VALUE(4'd1),
    .WIDTH(4)
) const11 (
    .out(const11_out)
);
std_const # (
    .VALUE(4'd7),
    .WIDTH(4)
) const2 (
    .out(const2_out)
);
std_const # (
    .VALUE(4'd11),
    .WIDTH(4)
) const4 (
    .out(const4_out)
);
std_const # (
    .VALUE(1'd0),
    .WIDTH(1)
) const9 (
    .out(const9_out)
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
) k_0 (
    .clk(k_0_clk),
    .done(k_0_done),
    .in(k_0_in),
    .out(k_0_out),
    .reset(k_0_reset),
    .write_en(k_0_write_en)
);
std_le # (
    .WIDTH(4)
) le0 (
    .left(le0_left),
    .out(le0_out),
    .right(le0_right)
);
std_lt # (
    .WIDTH(4)
) lt0 (
    .left(lt0_left),
    .out(lt0_out),
    .right(lt0_right)
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
) temp2_0 (
    .clk(temp2_0_clk),
    .done(temp2_0_done),
    .in(temp2_0_in),
    .out(temp2_0_out),
    .reset(temp2_0_reset),
    .write_en(temp2_0_write_en)
);
std_reg # (
    .WIDTH(1)
) comb_reg (
    .clk(comb_reg_clk),
    .done(comb_reg_done),
    .in(comb_reg_in),
    .out(comb_reg_out),
    .reset(comb_reg_reset),
    .write_en(comb_reg_write_en)
);
std_reg # (
    .WIDTH(1)
) comb_reg0 (
    .clk(comb_reg0_clk),
    .done(comb_reg0_done),
    .in(comb_reg0_in),
    .out(comb_reg0_out),
    .reset(comb_reg0_reset),
    .write_en(comb_reg0_write_en)
);
std_reg # (
    .WIDTH(1)
) comb_reg1 (
    .clk(comb_reg1_clk),
    .done(comb_reg1_done),
    .in(comb_reg1_in),
    .out(comb_reg1_out),
    .reset(comb_reg1_reset),
    .write_en(comb_reg1_write_en)
);
std_reg # (
    .WIDTH(5)
) fsm (
    .clk(fsm_clk),
    .done(fsm_done),
    .in(fsm_in),
    .out(fsm_out),
    .reset(fsm_reset),
    .write_en(fsm_write_en)
);
undef # (
    .WIDTH(1)
) ud (
    .out(ud_out)
);
std_add # (
    .WIDTH(5)
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
    .WIDTH(5)
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
    .WIDTH(5)
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
    .WIDTH(5)
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
    .WIDTH(5)
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
    .WIDTH(5)
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
    .WIDTH(5)
) adder5 (
    .left(adder5_left),
    .out(adder5_out),
    .right(adder5_right)
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
std_reg # (
    .WIDTH(4)
) fsm0 (
    .clk(fsm0_clk),
    .done(fsm0_done),
    .in(fsm0_in),
    .out(fsm0_out),
    .reset(fsm0_reset),
    .write_en(fsm0_write_en)
);
std_wire # (
    .WIDTH(1)
) invoke2_go (
    .in(invoke2_go_in),
    .out(invoke2_go_out)
);
std_wire # (
    .WIDTH(1)
) invoke2_done (
    .in(invoke2_done_in),
    .out(invoke2_done_out)
);
std_wire # (
    .WIDTH(1)
) invoke33_go (
    .in(invoke33_go_in),
    .out(invoke33_go_out)
);
std_wire # (
    .WIDTH(1)
) invoke33_done (
    .in(invoke33_done_in),
    .out(invoke33_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_cond00_go (
    .in(early_reset_cond00_go_in),
    .out(early_reset_cond00_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_cond00_done (
    .in(early_reset_cond00_done_in),
    .out(early_reset_cond00_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_cond10_go (
    .in(early_reset_cond10_go_in),
    .out(early_reset_cond10_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_cond10_done (
    .in(early_reset_cond10_done_in),
    .out(early_reset_cond10_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_cond20_go (
    .in(early_reset_cond20_go_in),
    .out(early_reset_cond20_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_cond20_done (
    .in(early_reset_cond20_done_in),
    .out(early_reset_cond20_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par_go (
    .in(early_reset_static_par_go_in),
    .out(early_reset_static_par_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par_done (
    .in(early_reset_static_par_done_in),
    .out(early_reset_static_par_done_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par0_go (
    .in(early_reset_static_par0_go_in),
    .out(early_reset_static_par0_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par0_done (
    .in(early_reset_static_par0_done_in),
    .out(early_reset_static_par0_done_out)
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
) early_reset_static_par4_go (
    .in(early_reset_static_par4_go_in),
    .out(early_reset_static_par4_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par4_done (
    .in(early_reset_static_par4_done_in),
    .out(early_reset_static_par4_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par_go (
    .in(wrapper_early_reset_static_par_go_in),
    .out(wrapper_early_reset_static_par_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par_done (
    .in(wrapper_early_reset_static_par_done_in),
    .out(wrapper_early_reset_static_par_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_cond00_go (
    .in(wrapper_early_reset_cond00_go_in),
    .out(wrapper_early_reset_cond00_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_cond00_done (
    .in(wrapper_early_reset_cond00_done_in),
    .out(wrapper_early_reset_cond00_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_cond10_go (
    .in(wrapper_early_reset_cond10_go_in),
    .out(wrapper_early_reset_cond10_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_cond10_done (
    .in(wrapper_early_reset_cond10_done_in),
    .out(wrapper_early_reset_cond10_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par0_go (
    .in(wrapper_early_reset_static_par0_go_in),
    .out(wrapper_early_reset_static_par0_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par0_done (
    .in(wrapper_early_reset_static_par0_done_in),
    .out(wrapper_early_reset_static_par0_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_cond20_go (
    .in(wrapper_early_reset_cond20_go_in),
    .out(wrapper_early_reset_cond20_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_cond20_done (
    .in(wrapper_early_reset_cond20_done_in),
    .out(wrapper_early_reset_cond20_done_out)
);
std_wire # (
    .WIDTH(1)
) while_wrapper_early_reset_static_seq_go (
    .in(while_wrapper_early_reset_static_seq_go_in),
    .out(while_wrapper_early_reset_static_seq_go_out)
);
std_wire # (
    .WIDTH(1)
) while_wrapper_early_reset_static_seq_done (
    .in(while_wrapper_early_reset_static_seq_done_in),
    .out(while_wrapper_early_reset_static_seq_done_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par4_go (
    .in(wrapper_early_reset_static_par4_go_in),
    .out(wrapper_early_reset_static_par4_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par4_done (
    .in(wrapper_early_reset_static_par4_done_in),
    .out(wrapper_early_reset_static_par4_done_out)
);
std_wire # (
    .WIDTH(1)
) tdcc_go (
    .in(tdcc_go_in),
    .out(tdcc_go_out)
);
std_wire # (
    .WIDTH(1)
) tdcc_done (
    .in(tdcc_done_in),
    .out(tdcc_done_out)
);
wire _guard0 = 1;
wire _guard1 = invoke33_go_out;
wire _guard2 = early_reset_static_par_go_out;
wire _guard3 = _guard1 | _guard2;
wire _guard4 = invoke33_go_out;
wire _guard5 = early_reset_static_par_go_out;
wire _guard6 = early_reset_cond20_go_out;
wire _guard7 = early_reset_cond20_go_out;
wire _guard8 = wrapper_early_reset_cond00_go_out;
wire _guard9 = wrapper_early_reset_cond10_go_out;
wire _guard10 = fsm_out == 5'd11;
wire _guard11 = fsm_out == 5'd0;
wire _guard12 = _guard10 | _guard11;
wire _guard13 = early_reset_static_seq_go_out;
wire _guard14 = _guard12 & _guard13;
wire _guard15 = fsm_out == 5'd0;
wire _guard16 = early_reset_static_par4_go_out;
wire _guard17 = _guard15 & _guard16;
wire _guard18 = _guard14 | _guard17;
wire _guard19 = fsm_out == 5'd11;
wire _guard20 = fsm_out == 5'd0;
wire _guard21 = _guard19 | _guard20;
wire _guard22 = early_reset_static_seq_go_out;
wire _guard23 = _guard21 & _guard22;
wire _guard24 = fsm_out == 5'd0;
wire _guard25 = early_reset_static_par4_go_out;
wire _guard26 = _guard24 & _guard25;
wire _guard27 = _guard23 | _guard26;
wire _guard28 = fsm_out == 5'd0;
wire _guard29 = early_reset_static_par4_go_out;
wire _guard30 = _guard28 & _guard29;
wire _guard31 = fsm_out == 5'd11;
wire _guard32 = fsm_out == 5'd0;
wire _guard33 = _guard31 | _guard32;
wire _guard34 = early_reset_static_seq_go_out;
wire _guard35 = _guard33 & _guard34;
wire _guard36 = fsm_out == 5'd10;
wire _guard37 = early_reset_static_seq_go_out;
wire _guard38 = _guard36 & _guard37;
wire _guard39 = fsm_out == 5'd18;
wire _guard40 = early_reset_static_par4_go_out;
wire _guard41 = _guard39 & _guard40;
wire _guard42 = _guard38 | _guard41;
wire _guard43 = fsm_out == 5'd0;
wire _guard44 = early_reset_static_seq_go_out;
wire _guard45 = _guard43 & _guard44;
wire _guard46 = fsm_out == 5'd0;
wire _guard47 = early_reset_static_par4_go_out;
wire _guard48 = _guard46 & _guard47;
wire _guard49 = _guard45 | _guard48;
wire _guard50 = fsm_out == 5'd0;
wire _guard51 = fsm_out == 5'd18;
wire _guard52 = _guard50 | _guard51;
wire _guard53 = early_reset_static_par4_go_out;
wire _guard54 = _guard52 & _guard53;
wire _guard55 = fsm_out == 5'd0;
wire _guard56 = fsm_out == 5'd10;
wire _guard57 = _guard55 | _guard56;
wire _guard58 = early_reset_static_seq_go_out;
wire _guard59 = _guard57 & _guard58;
wire _guard60 = fsm_out == 5'd10;
wire _guard61 = early_reset_static_seq_go_out;
wire _guard62 = _guard60 & _guard61;
wire _guard63 = fsm_out == 5'd18;
wire _guard64 = early_reset_static_par4_go_out;
wire _guard65 = _guard63 & _guard64;
wire _guard66 = fsm_out == 5'd0;
wire _guard67 = fsm_out == 5'd10;
wire _guard68 = _guard66 | _guard67;
wire _guard69 = early_reset_static_seq_go_out;
wire _guard70 = _guard68 & _guard69;
wire _guard71 = fsm_out == 5'd0;
wire _guard72 = fsm_out == 5'd18;
wire _guard73 = _guard71 | _guard72;
wire _guard74 = early_reset_static_par4_go_out;
wire _guard75 = _guard73 & _guard74;
wire _guard76 = _guard70 | _guard75;
wire _guard77 = tdcc_done_out;
wire _guard78 = early_reset_cond00_go_out;
wire _guard79 = early_reset_cond10_go_out;
wire _guard80 = _guard78 | _guard79;
wire _guard81 = early_reset_cond20_go_out;
wire _guard82 = _guard80 | _guard81;
wire _guard83 = early_reset_static_par_go_out;
wire _guard84 = _guard82 | _guard83;
wire _guard85 = early_reset_static_par0_go_out;
wire _guard86 = _guard84 | _guard85;
wire _guard87 = early_reset_static_seq_go_out;
wire _guard88 = _guard86 | _guard87;
wire _guard89 = early_reset_static_par4_go_out;
wire _guard90 = _guard88 | _guard89;
wire _guard91 = fsm_out != 5'd0;
wire _guard92 = early_reset_cond20_go_out;
wire _guard93 = _guard91 & _guard92;
wire _guard94 = fsm_out != 5'd0;
wire _guard95 = early_reset_cond00_go_out;
wire _guard96 = _guard94 & _guard95;
wire _guard97 = fsm_out != 5'd18;
wire _guard98 = early_reset_static_seq_go_out;
wire _guard99 = _guard97 & _guard98;
wire _guard100 = fsm_out == 5'd0;
wire _guard101 = early_reset_cond00_go_out;
wire _guard102 = _guard100 & _guard101;
wire _guard103 = fsm_out == 5'd0;
wire _guard104 = early_reset_cond10_go_out;
wire _guard105 = _guard103 & _guard104;
wire _guard106 = _guard102 | _guard105;
wire _guard107 = fsm_out == 5'd0;
wire _guard108 = early_reset_cond20_go_out;
wire _guard109 = _guard107 & _guard108;
wire _guard110 = _guard106 | _guard109;
wire _guard111 = fsm_out == 5'd0;
wire _guard112 = early_reset_static_par_go_out;
wire _guard113 = _guard111 & _guard112;
wire _guard114 = _guard110 | _guard113;
wire _guard115 = fsm_out == 5'd0;
wire _guard116 = early_reset_static_par0_go_out;
wire _guard117 = _guard115 & _guard116;
wire _guard118 = _guard114 | _guard117;
wire _guard119 = fsm_out == 5'd18;
wire _guard120 = early_reset_static_seq_go_out;
wire _guard121 = _guard119 & _guard120;
wire _guard122 = _guard118 | _guard121;
wire _guard123 = fsm_out == 5'd19;
wire _guard124 = early_reset_static_par4_go_out;
wire _guard125 = _guard123 & _guard124;
wire _guard126 = _guard122 | _guard125;
wire _guard127 = fsm_out != 5'd0;
wire _guard128 = early_reset_static_par_go_out;
wire _guard129 = _guard127 & _guard128;
wire _guard130 = fsm_out != 5'd0;
wire _guard131 = early_reset_static_par0_go_out;
wire _guard132 = _guard130 & _guard131;
wire _guard133 = fsm_out != 5'd19;
wire _guard134 = early_reset_static_par4_go_out;
wire _guard135 = _guard133 & _guard134;
wire _guard136 = fsm_out != 5'd0;
wire _guard137 = early_reset_cond10_go_out;
wire _guard138 = _guard136 & _guard137;
wire _guard139 = early_reset_cond00_go_out;
wire _guard140 = early_reset_cond00_go_out;
wire _guard141 = wrapper_early_reset_static_par0_go_out;
wire _guard142 = fsm_out == 5'd1;
wire _guard143 = early_reset_static_par4_go_out;
wire _guard144 = _guard142 & _guard143;
wire _guard145 = fsm_out == 5'd1;
wire _guard146 = early_reset_static_par4_go_out;
wire _guard147 = _guard145 & _guard146;
wire _guard148 = early_reset_static_seq_go_out;
wire _guard149 = early_reset_static_seq_go_out;
wire _guard150 = invoke2_done_out;
wire _guard151 = ~_guard150;
wire _guard152 = fsm0_out == 4'd2;
wire _guard153 = _guard151 & _guard152;
wire _guard154 = tdcc_go_out;
wire _guard155 = _guard153 & _guard154;
wire _guard156 = fsm_out == 5'd9;
wire _guard157 = fsm_out == 5'd12;
wire _guard158 = _guard156 | _guard157;
wire _guard159 = fsm_out == 5'd16;
wire _guard160 = _guard158 | _guard159;
wire _guard161 = fsm_out == 5'd1;
wire _guard162 = _guard160 | _guard161;
wire _guard163 = early_reset_static_seq_go_out;
wire _guard164 = _guard162 & _guard163;
wire _guard165 = fsm_out == 5'd13;
wire _guard166 = fsm_out == 5'd1;
wire _guard167 = _guard165 | _guard166;
wire _guard168 = early_reset_static_par4_go_out;
wire _guard169 = _guard167 & _guard168;
wire _guard170 = _guard164 | _guard169;
wire _guard171 = fsm_out == 5'd12;
wire _guard172 = fsm_out == 5'd1;
wire _guard173 = _guard171 | _guard172;
wire _guard174 = early_reset_static_seq_go_out;
wire _guard175 = _guard173 & _guard174;
wire _guard176 = fsm_out == 5'd1;
wire _guard177 = early_reset_static_par4_go_out;
wire _guard178 = _guard176 & _guard177;
wire _guard179 = _guard175 | _guard178;
wire _guard180 = fsm_out == 5'd9;
wire _guard181 = fsm_out == 5'd16;
wire _guard182 = _guard180 | _guard181;
wire _guard183 = early_reset_static_seq_go_out;
wire _guard184 = _guard182 & _guard183;
wire _guard185 = fsm_out == 5'd13;
wire _guard186 = early_reset_static_par4_go_out;
wire _guard187 = _guard185 & _guard186;
wire _guard188 = _guard184 | _guard187;
wire _guard189 = invoke33_go_out;
wire _guard190 = fsm_out == 5'd13;
wire _guard191 = early_reset_static_seq_go_out;
wire _guard192 = _guard190 & _guard191;
wire _guard193 = fsm_out == 5'd19;
wire _guard194 = early_reset_static_par4_go_out;
wire _guard195 = _guard193 & _guard194;
wire _guard196 = invoke33_go_out;
wire _guard197 = fsm_out == 5'd13;
wire _guard198 = early_reset_static_seq_go_out;
wire _guard199 = _guard197 & _guard198;
wire _guard200 = _guard196 | _guard199;
wire _guard201 = fsm_out == 5'd19;
wire _guard202 = early_reset_static_par4_go_out;
wire _guard203 = _guard201 & _guard202;
wire _guard204 = _guard200 | _guard203;
wire _guard205 = early_reset_cond00_go_out;
wire _guard206 = early_reset_cond00_go_out;
wire _guard207 = fsm_out == 5'd10;
wire _guard208 = early_reset_static_seq_go_out;
wire _guard209 = _guard207 & _guard208;
wire _guard210 = fsm_out == 5'd17;
wire _guard211 = early_reset_static_seq_go_out;
wire _guard212 = _guard210 & _guard211;
wire _guard213 = fsm_out == 5'd18;
wire _guard214 = early_reset_static_par4_go_out;
wire _guard215 = _guard213 & _guard214;
wire _guard216 = fsm_out == 5'd17;
wire _guard217 = early_reset_static_seq_go_out;
wire _guard218 = _guard216 & _guard217;
wire _guard219 = fsm_out == 5'd18;
wire _guard220 = early_reset_static_par4_go_out;
wire _guard221 = _guard219 & _guard220;
wire _guard222 = _guard218 | _guard221;
wire _guard223 = fsm_out == 5'd10;
wire _guard224 = early_reset_static_seq_go_out;
wire _guard225 = _guard223 & _guard224;
wire _guard226 = fsm_out == 5'd18;
wire _guard227 = early_reset_static_par4_go_out;
wire _guard228 = _guard226 & _guard227;
wire _guard229 = fsm_out == 5'd18;
wire _guard230 = early_reset_static_par4_go_out;
wire _guard231 = _guard229 & _guard230;
wire _guard232 = early_reset_cond20_go_out;
wire _guard233 = fsm_out == 5'd18;
wire _guard234 = early_reset_static_seq_go_out;
wire _guard235 = _guard233 & _guard234;
wire _guard236 = _guard232 | _guard235;
wire _guard237 = early_reset_cond20_go_out;
wire _guard238 = fsm_out == 5'd18;
wire _guard239 = early_reset_static_seq_go_out;
wire _guard240 = _guard238 & _guard239;
wire _guard241 = _guard237 | _guard240;
wire _guard242 = wrapper_early_reset_cond20_go_out;
wire _guard243 = wrapper_early_reset_static_par4_go_out;
wire _guard244 = wrapper_early_reset_static_par_done_out;
wire _guard245 = ~_guard244;
wire _guard246 = fsm0_out == 4'd0;
wire _guard247 = _guard245 & _guard246;
wire _guard248 = tdcc_go_out;
wire _guard249 = _guard247 & _guard248;
wire _guard250 = wrapper_early_reset_cond10_done_out;
wire _guard251 = ~_guard250;
wire _guard252 = fsm0_out == 4'd3;
wire _guard253 = _guard251 & _guard252;
wire _guard254 = tdcc_go_out;
wire _guard255 = _guard253 & _guard254;
wire _guard256 = wrapper_early_reset_cond10_done_out;
wire _guard257 = ~_guard256;
wire _guard258 = fsm0_out == 4'd8;
wire _guard259 = _guard257 & _guard258;
wire _guard260 = tdcc_go_out;
wire _guard261 = _guard259 & _guard260;
wire _guard262 = _guard255 | _guard261;
wire _guard263 = while_wrapper_early_reset_static_seq_done_out;
wire _guard264 = ~_guard263;
wire _guard265 = fsm0_out == 4'd6;
wire _guard266 = _guard264 & _guard265;
wire _guard267 = tdcc_go_out;
wire _guard268 = _guard266 & _guard267;
wire _guard269 = fsm_out == 5'd11;
wire _guard270 = fsm_out == 5'd0;
wire _guard271 = _guard269 | _guard270;
wire _guard272 = early_reset_static_seq_go_out;
wire _guard273 = _guard271 & _guard272;
wire _guard274 = fsm_out == 5'd0;
wire _guard275 = early_reset_static_par4_go_out;
wire _guard276 = _guard274 & _guard275;
wire _guard277 = _guard273 | _guard276;
wire _guard278 = fsm_out == 5'd0;
wire _guard279 = early_reset_static_seq_go_out;
wire _guard280 = _guard278 & _guard279;
wire _guard281 = fsm_out == 5'd0;
wire _guard282 = early_reset_static_par4_go_out;
wire _guard283 = _guard281 & _guard282;
wire _guard284 = _guard280 | _guard283;
wire _guard285 = fsm_out == 5'd11;
wire _guard286 = early_reset_static_seq_go_out;
wire _guard287 = _guard285 & _guard286;
wire _guard288 = fsm_out == 5'd11;
wire _guard289 = fsm_out == 5'd0;
wire _guard290 = _guard288 | _guard289;
wire _guard291 = early_reset_static_seq_go_out;
wire _guard292 = _guard290 & _guard291;
wire _guard293 = fsm_out == 5'd0;
wire _guard294 = early_reset_static_par4_go_out;
wire _guard295 = _guard293 & _guard294;
wire _guard296 = _guard292 | _guard295;
wire _guard297 = early_reset_static_par0_go_out;
wire _guard298 = fsm_out == 5'd13;
wire _guard299 = early_reset_static_seq_go_out;
wire _guard300 = _guard298 & _guard299;
wire _guard301 = _guard297 | _guard300;
wire _guard302 = fsm_out == 5'd13;
wire _guard303 = early_reset_static_seq_go_out;
wire _guard304 = _guard302 & _guard303;
wire _guard305 = early_reset_static_par0_go_out;
wire _guard306 = early_reset_cond10_go_out;
wire _guard307 = early_reset_cond10_go_out;
wire _guard308 = fsm_out == 5'd0;
wire _guard309 = signal_reg_out;
wire _guard310 = _guard308 & _guard309;
wire _guard311 = fsm_out == 5'd0;
wire _guard312 = signal_reg_out;
wire _guard313 = _guard311 & _guard312;
wire _guard314 = fsm_out == 5'd0;
wire _guard315 = early_reset_static_seq_go_out;
wire _guard316 = _guard314 & _guard315;
wire _guard317 = fsm_out == 5'd0;
wire _guard318 = early_reset_static_par4_go_out;
wire _guard319 = _guard317 & _guard318;
wire _guard320 = _guard316 | _guard319;
wire _guard321 = fsm_out == 5'd0;
wire _guard322 = early_reset_static_seq_go_out;
wire _guard323 = _guard321 & _guard322;
wire _guard324 = fsm_out == 5'd0;
wire _guard325 = early_reset_static_par4_go_out;
wire _guard326 = _guard324 & _guard325;
wire _guard327 = _guard323 | _guard326;
wire _guard328 = early_reset_static_par_go_out;
wire _guard329 = early_reset_static_par_go_out;
wire _guard330 = fsm0_out == 4'd11;
wire _guard331 = fsm0_out == 4'd0;
wire _guard332 = wrapper_early_reset_static_par_done_out;
wire _guard333 = _guard331 & _guard332;
wire _guard334 = tdcc_go_out;
wire _guard335 = _guard333 & _guard334;
wire _guard336 = _guard330 | _guard335;
wire _guard337 = fsm0_out == 4'd1;
wire _guard338 = wrapper_early_reset_cond00_done_out;
wire _guard339 = comb_reg_out;
wire _guard340 = _guard338 & _guard339;
wire _guard341 = _guard337 & _guard340;
wire _guard342 = tdcc_go_out;
wire _guard343 = _guard341 & _guard342;
wire _guard344 = _guard336 | _guard343;
wire _guard345 = fsm0_out == 4'd10;
wire _guard346 = wrapper_early_reset_cond00_done_out;
wire _guard347 = comb_reg_out;
wire _guard348 = _guard346 & _guard347;
wire _guard349 = _guard345 & _guard348;
wire _guard350 = tdcc_go_out;
wire _guard351 = _guard349 & _guard350;
wire _guard352 = _guard344 | _guard351;
wire _guard353 = fsm0_out == 4'd2;
wire _guard354 = invoke2_done_out;
wire _guard355 = _guard353 & _guard354;
wire _guard356 = tdcc_go_out;
wire _guard357 = _guard355 & _guard356;
wire _guard358 = _guard352 | _guard357;
wire _guard359 = fsm0_out == 4'd3;
wire _guard360 = wrapper_early_reset_cond10_done_out;
wire _guard361 = comb_reg0_out;
wire _guard362 = _guard360 & _guard361;
wire _guard363 = _guard359 & _guard362;
wire _guard364 = tdcc_go_out;
wire _guard365 = _guard363 & _guard364;
wire _guard366 = _guard358 | _guard365;
wire _guard367 = fsm0_out == 4'd8;
wire _guard368 = wrapper_early_reset_cond10_done_out;
wire _guard369 = comb_reg0_out;
wire _guard370 = _guard368 & _guard369;
wire _guard371 = _guard367 & _guard370;
wire _guard372 = tdcc_go_out;
wire _guard373 = _guard371 & _guard372;
wire _guard374 = _guard366 | _guard373;
wire _guard375 = fsm0_out == 4'd4;
wire _guard376 = wrapper_early_reset_static_par0_done_out;
wire _guard377 = _guard375 & _guard376;
wire _guard378 = tdcc_go_out;
wire _guard379 = _guard377 & _guard378;
wire _guard380 = _guard374 | _guard379;
wire _guard381 = fsm0_out == 4'd5;
wire _guard382 = wrapper_early_reset_cond20_done_out;
wire _guard383 = _guard381 & _guard382;
wire _guard384 = tdcc_go_out;
wire _guard385 = _guard383 & _guard384;
wire _guard386 = _guard380 | _guard385;
wire _guard387 = fsm0_out == 4'd6;
wire _guard388 = while_wrapper_early_reset_static_seq_done_out;
wire _guard389 = _guard387 & _guard388;
wire _guard390 = tdcc_go_out;
wire _guard391 = _guard389 & _guard390;
wire _guard392 = _guard386 | _guard391;
wire _guard393 = fsm0_out == 4'd7;
wire _guard394 = wrapper_early_reset_static_par4_done_out;
wire _guard395 = _guard393 & _guard394;
wire _guard396 = tdcc_go_out;
wire _guard397 = _guard395 & _guard396;
wire _guard398 = _guard392 | _guard397;
wire _guard399 = fsm0_out == 4'd3;
wire _guard400 = wrapper_early_reset_cond10_done_out;
wire _guard401 = comb_reg0_out;
wire _guard402 = ~_guard401;
wire _guard403 = _guard400 & _guard402;
wire _guard404 = _guard399 & _guard403;
wire _guard405 = tdcc_go_out;
wire _guard406 = _guard404 & _guard405;
wire _guard407 = _guard398 | _guard406;
wire _guard408 = fsm0_out == 4'd8;
wire _guard409 = wrapper_early_reset_cond10_done_out;
wire _guard410 = comb_reg0_out;
wire _guard411 = ~_guard410;
wire _guard412 = _guard409 & _guard411;
wire _guard413 = _guard408 & _guard412;
wire _guard414 = tdcc_go_out;
wire _guard415 = _guard413 & _guard414;
wire _guard416 = _guard407 | _guard415;
wire _guard417 = fsm0_out == 4'd9;
wire _guard418 = invoke33_done_out;
wire _guard419 = _guard417 & _guard418;
wire _guard420 = tdcc_go_out;
wire _guard421 = _guard419 & _guard420;
wire _guard422 = _guard416 | _guard421;
wire _guard423 = fsm0_out == 4'd1;
wire _guard424 = wrapper_early_reset_cond00_done_out;
wire _guard425 = comb_reg_out;
wire _guard426 = ~_guard425;
wire _guard427 = _guard424 & _guard426;
wire _guard428 = _guard423 & _guard427;
wire _guard429 = tdcc_go_out;
wire _guard430 = _guard428 & _guard429;
wire _guard431 = _guard422 | _guard430;
wire _guard432 = fsm0_out == 4'd10;
wire _guard433 = wrapper_early_reset_cond00_done_out;
wire _guard434 = comb_reg_out;
wire _guard435 = ~_guard434;
wire _guard436 = _guard433 & _guard435;
wire _guard437 = _guard432 & _guard436;
wire _guard438 = tdcc_go_out;
wire _guard439 = _guard437 & _guard438;
wire _guard440 = _guard431 | _guard439;
wire _guard441 = fsm0_out == 4'd2;
wire _guard442 = invoke2_done_out;
wire _guard443 = _guard441 & _guard442;
wire _guard444 = tdcc_go_out;
wire _guard445 = _guard443 & _guard444;
wire _guard446 = fsm0_out == 4'd4;
wire _guard447 = wrapper_early_reset_static_par0_done_out;
wire _guard448 = _guard446 & _guard447;
wire _guard449 = tdcc_go_out;
wire _guard450 = _guard448 & _guard449;
wire _guard451 = fsm0_out == 4'd3;
wire _guard452 = wrapper_early_reset_cond10_done_out;
wire _guard453 = comb_reg0_out;
wire _guard454 = _guard452 & _guard453;
wire _guard455 = _guard451 & _guard454;
wire _guard456 = tdcc_go_out;
wire _guard457 = _guard455 & _guard456;
wire _guard458 = fsm0_out == 4'd8;
wire _guard459 = wrapper_early_reset_cond10_done_out;
wire _guard460 = comb_reg0_out;
wire _guard461 = _guard459 & _guard460;
wire _guard462 = _guard458 & _guard461;
wire _guard463 = tdcc_go_out;
wire _guard464 = _guard462 & _guard463;
wire _guard465 = _guard457 | _guard464;
wire _guard466 = fsm0_out == 4'd3;
wire _guard467 = wrapper_early_reset_cond10_done_out;
wire _guard468 = comb_reg0_out;
wire _guard469 = ~_guard468;
wire _guard470 = _guard467 & _guard469;
wire _guard471 = _guard466 & _guard470;
wire _guard472 = tdcc_go_out;
wire _guard473 = _guard471 & _guard472;
wire _guard474 = fsm0_out == 4'd8;
wire _guard475 = wrapper_early_reset_cond10_done_out;
wire _guard476 = comb_reg0_out;
wire _guard477 = ~_guard476;
wire _guard478 = _guard475 & _guard477;
wire _guard479 = _guard474 & _guard478;
wire _guard480 = tdcc_go_out;
wire _guard481 = _guard479 & _guard480;
wire _guard482 = _guard473 | _guard481;
wire _guard483 = fsm0_out == 4'd9;
wire _guard484 = invoke33_done_out;
wire _guard485 = _guard483 & _guard484;
wire _guard486 = tdcc_go_out;
wire _guard487 = _guard485 & _guard486;
wire _guard488 = fsm0_out == 4'd11;
wire _guard489 = fsm0_out == 4'd6;
wire _guard490 = while_wrapper_early_reset_static_seq_done_out;
wire _guard491 = _guard489 & _guard490;
wire _guard492 = tdcc_go_out;
wire _guard493 = _guard491 & _guard492;
wire _guard494 = fsm0_out == 4'd1;
wire _guard495 = wrapper_early_reset_cond00_done_out;
wire _guard496 = comb_reg_out;
wire _guard497 = _guard495 & _guard496;
wire _guard498 = _guard494 & _guard497;
wire _guard499 = tdcc_go_out;
wire _guard500 = _guard498 & _guard499;
wire _guard501 = fsm0_out == 4'd10;
wire _guard502 = wrapper_early_reset_cond00_done_out;
wire _guard503 = comb_reg_out;
wire _guard504 = _guard502 & _guard503;
wire _guard505 = _guard501 & _guard504;
wire _guard506 = tdcc_go_out;
wire _guard507 = _guard505 & _guard506;
wire _guard508 = _guard500 | _guard507;
wire _guard509 = fsm0_out == 4'd5;
wire _guard510 = wrapper_early_reset_cond20_done_out;
wire _guard511 = _guard509 & _guard510;
wire _guard512 = tdcc_go_out;
wire _guard513 = _guard511 & _guard512;
wire _guard514 = fsm0_out == 4'd7;
wire _guard515 = wrapper_early_reset_static_par4_done_out;
wire _guard516 = _guard514 & _guard515;
wire _guard517 = tdcc_go_out;
wire _guard518 = _guard516 & _guard517;
wire _guard519 = fsm0_out == 4'd0;
wire _guard520 = wrapper_early_reset_static_par_done_out;
wire _guard521 = _guard519 & _guard520;
wire _guard522 = tdcc_go_out;
wire _guard523 = _guard521 & _guard522;
wire _guard524 = fsm0_out == 4'd1;
wire _guard525 = wrapper_early_reset_cond00_done_out;
wire _guard526 = comb_reg_out;
wire _guard527 = ~_guard526;
wire _guard528 = _guard525 & _guard527;
wire _guard529 = _guard524 & _guard528;
wire _guard530 = tdcc_go_out;
wire _guard531 = _guard529 & _guard530;
wire _guard532 = fsm0_out == 4'd10;
wire _guard533 = wrapper_early_reset_cond00_done_out;
wire _guard534 = comb_reg_out;
wire _guard535 = ~_guard534;
wire _guard536 = _guard533 & _guard535;
wire _guard537 = _guard532 & _guard536;
wire _guard538 = tdcc_go_out;
wire _guard539 = _guard537 & _guard538;
wire _guard540 = _guard531 | _guard539;
wire _guard541 = early_reset_static_par0_go_out;
wire _guard542 = early_reset_static_par0_go_out;
wire _guard543 = early_reset_static_par4_go_out;
wire _guard544 = early_reset_static_par4_go_out;
wire _guard545 = wrapper_early_reset_static_par4_done_out;
wire _guard546 = ~_guard545;
wire _guard547 = fsm0_out == 4'd7;
wire _guard548 = _guard546 & _guard547;
wire _guard549 = tdcc_go_out;
wire _guard550 = _guard548 & _guard549;
wire _guard551 = fsm_out == 5'd1;
wire _guard552 = early_reset_static_seq_go_out;
wire _guard553 = _guard551 & _guard552;
wire _guard554 = fsm_out == 5'd1;
wire _guard555 = early_reset_static_par4_go_out;
wire _guard556 = _guard554 & _guard555;
wire _guard557 = _guard553 | _guard556;
wire _guard558 = fsm_out == 5'd1;
wire _guard559 = early_reset_static_seq_go_out;
wire _guard560 = _guard558 & _guard559;
wire _guard561 = fsm_out == 5'd1;
wire _guard562 = early_reset_static_par4_go_out;
wire _guard563 = _guard561 & _guard562;
wire _guard564 = _guard560 | _guard563;
wire _guard565 = fsm_out >= 5'd2;
wire _guard566 = fsm_out < 5'd5;
wire _guard567 = _guard565 & _guard566;
wire _guard568 = early_reset_static_par4_go_out;
wire _guard569 = _guard567 & _guard568;
wire _guard570 = fsm_out >= 5'd2;
wire _guard571 = fsm_out < 5'd5;
wire _guard572 = _guard570 & _guard571;
wire _guard573 = early_reset_static_seq_go_out;
wire _guard574 = _guard572 & _guard573;
wire _guard575 = fsm_out >= 5'd6;
wire _guard576 = fsm_out < 5'd9;
wire _guard577 = _guard575 & _guard576;
wire _guard578 = fsm_out >= 5'd14;
wire _guard579 = fsm_out < 5'd17;
wire _guard580 = _guard578 & _guard579;
wire _guard581 = _guard577 | _guard580;
wire _guard582 = early_reset_static_par4_go_out;
wire _guard583 = _guard581 & _guard582;
wire _guard584 = _guard574 | _guard583;
wire _guard585 = fsm_out >= 5'd6;
wire _guard586 = fsm_out < 5'd9;
wire _guard587 = _guard585 & _guard586;
wire _guard588 = fsm_out >= 5'd13;
wire _guard589 = fsm_out < 5'd16;
wire _guard590 = _guard588 & _guard589;
wire _guard591 = _guard587 | _guard590;
wire _guard592 = early_reset_static_seq_go_out;
wire _guard593 = _guard591 & _guard592;
wire _guard594 = fsm_out >= 5'd10;
wire _guard595 = fsm_out < 5'd13;
wire _guard596 = _guard594 & _guard595;
wire _guard597 = early_reset_static_par4_go_out;
wire _guard598 = _guard596 & _guard597;
wire _guard599 = _guard593 | _guard598;
wire _guard600 = fsm_out >= 5'd2;
wire _guard601 = fsm_out < 5'd5;
wire _guard602 = _guard600 & _guard601;
wire _guard603 = fsm_out >= 5'd6;
wire _guard604 = fsm_out < 5'd9;
wire _guard605 = _guard603 & _guard604;
wire _guard606 = _guard602 | _guard605;
wire _guard607 = fsm_out >= 5'd13;
wire _guard608 = fsm_out < 5'd16;
wire _guard609 = _guard607 & _guard608;
wire _guard610 = _guard606 | _guard609;
wire _guard611 = early_reset_static_seq_go_out;
wire _guard612 = _guard610 & _guard611;
wire _guard613 = fsm_out >= 5'd2;
wire _guard614 = fsm_out < 5'd5;
wire _guard615 = _guard613 & _guard614;
wire _guard616 = fsm_out >= 5'd6;
wire _guard617 = fsm_out < 5'd9;
wire _guard618 = _guard616 & _guard617;
wire _guard619 = _guard615 | _guard618;
wire _guard620 = fsm_out >= 5'd10;
wire _guard621 = fsm_out < 5'd13;
wire _guard622 = _guard620 & _guard621;
wire _guard623 = _guard619 | _guard622;
wire _guard624 = fsm_out >= 5'd14;
wire _guard625 = fsm_out < 5'd17;
wire _guard626 = _guard624 & _guard625;
wire _guard627 = _guard623 | _guard626;
wire _guard628 = early_reset_static_par4_go_out;
wire _guard629 = _guard627 & _guard628;
wire _guard630 = _guard612 | _guard629;
wire _guard631 = fsm_out >= 5'd6;
wire _guard632 = fsm_out < 5'd9;
wire _guard633 = _guard631 & _guard632;
wire _guard634 = fsm_out >= 5'd13;
wire _guard635 = fsm_out < 5'd16;
wire _guard636 = _guard634 & _guard635;
wire _guard637 = _guard633 | _guard636;
wire _guard638 = early_reset_static_seq_go_out;
wire _guard639 = _guard637 & _guard638;
wire _guard640 = fsm_out >= 5'd10;
wire _guard641 = fsm_out < 5'd13;
wire _guard642 = _guard640 & _guard641;
wire _guard643 = early_reset_static_par4_go_out;
wire _guard644 = _guard642 & _guard643;
wire _guard645 = _guard639 | _guard644;
wire _guard646 = fsm_out >= 5'd14;
wire _guard647 = fsm_out < 5'd17;
wire _guard648 = _guard646 & _guard647;
wire _guard649 = early_reset_static_par4_go_out;
wire _guard650 = _guard648 & _guard649;
wire _guard651 = fsm_out >= 5'd2;
wire _guard652 = fsm_out < 5'd5;
wire _guard653 = _guard651 & _guard652;
wire _guard654 = early_reset_static_seq_go_out;
wire _guard655 = _guard653 & _guard654;
wire _guard656 = fsm_out >= 5'd6;
wire _guard657 = fsm_out < 5'd9;
wire _guard658 = _guard656 & _guard657;
wire _guard659 = early_reset_static_par4_go_out;
wire _guard660 = _guard658 & _guard659;
wire _guard661 = _guard655 | _guard660;
wire _guard662 = fsm_out >= 5'd2;
wire _guard663 = fsm_out < 5'd5;
wire _guard664 = _guard662 & _guard663;
wire _guard665 = early_reset_static_par4_go_out;
wire _guard666 = _guard664 & _guard665;
wire _guard667 = early_reset_static_par_go_out;
wire _guard668 = early_reset_static_par0_go_out;
wire _guard669 = _guard667 | _guard668;
wire _guard670 = fsm_out == 5'd17;
wire _guard671 = early_reset_static_seq_go_out;
wire _guard672 = _guard670 & _guard671;
wire _guard673 = _guard669 | _guard672;
wire _guard674 = early_reset_static_par_go_out;
wire _guard675 = early_reset_static_par0_go_out;
wire _guard676 = _guard674 | _guard675;
wire _guard677 = fsm_out == 5'd17;
wire _guard678 = early_reset_static_seq_go_out;
wire _guard679 = _guard677 & _guard678;
wire _guard680 = early_reset_cond10_go_out;
wire _guard681 = early_reset_cond10_go_out;
wire _guard682 = while_wrapper_early_reset_static_seq_go_out;
wire _guard683 = fsm_out == 5'd0;
wire _guard684 = signal_reg_out;
wire _guard685 = _guard683 & _guard684;
wire _guard686 = early_reset_cond00_go_out;
wire _guard687 = early_reset_cond10_go_out;
wire _guard688 = early_reset_cond00_go_out;
wire _guard689 = early_reset_cond10_go_out;
wire _guard690 = fsm_out == 5'd0;
wire _guard691 = signal_reg_out;
wire _guard692 = _guard690 & _guard691;
wire _guard693 = fsm_out == 5'd0;
wire _guard694 = signal_reg_out;
wire _guard695 = ~_guard694;
wire _guard696 = _guard693 & _guard695;
wire _guard697 = wrapper_early_reset_static_par_go_out;
wire _guard698 = _guard696 & _guard697;
wire _guard699 = _guard692 | _guard698;
wire _guard700 = fsm_out == 5'd0;
wire _guard701 = signal_reg_out;
wire _guard702 = ~_guard701;
wire _guard703 = _guard700 & _guard702;
wire _guard704 = wrapper_early_reset_cond00_go_out;
wire _guard705 = _guard703 & _guard704;
wire _guard706 = _guard699 | _guard705;
wire _guard707 = fsm_out == 5'd0;
wire _guard708 = signal_reg_out;
wire _guard709 = ~_guard708;
wire _guard710 = _guard707 & _guard709;
wire _guard711 = wrapper_early_reset_cond10_go_out;
wire _guard712 = _guard710 & _guard711;
wire _guard713 = _guard706 | _guard712;
wire _guard714 = fsm_out == 5'd0;
wire _guard715 = signal_reg_out;
wire _guard716 = ~_guard715;
wire _guard717 = _guard714 & _guard716;
wire _guard718 = wrapper_early_reset_static_par0_go_out;
wire _guard719 = _guard717 & _guard718;
wire _guard720 = _guard713 | _guard719;
wire _guard721 = fsm_out == 5'd0;
wire _guard722 = signal_reg_out;
wire _guard723 = ~_guard722;
wire _guard724 = _guard721 & _guard723;
wire _guard725 = wrapper_early_reset_cond20_go_out;
wire _guard726 = _guard724 & _guard725;
wire _guard727 = _guard720 | _guard726;
wire _guard728 = fsm_out == 5'd0;
wire _guard729 = signal_reg_out;
wire _guard730 = ~_guard729;
wire _guard731 = _guard728 & _guard730;
wire _guard732 = wrapper_early_reset_static_par4_go_out;
wire _guard733 = _guard731 & _guard732;
wire _guard734 = _guard727 | _guard733;
wire _guard735 = fsm_out == 5'd0;
wire _guard736 = signal_reg_out;
wire _guard737 = ~_guard736;
wire _guard738 = _guard735 & _guard737;
wire _guard739 = wrapper_early_reset_static_par_go_out;
wire _guard740 = _guard738 & _guard739;
wire _guard741 = fsm_out == 5'd0;
wire _guard742 = signal_reg_out;
wire _guard743 = ~_guard742;
wire _guard744 = _guard741 & _guard743;
wire _guard745 = wrapper_early_reset_cond00_go_out;
wire _guard746 = _guard744 & _guard745;
wire _guard747 = _guard740 | _guard746;
wire _guard748 = fsm_out == 5'd0;
wire _guard749 = signal_reg_out;
wire _guard750 = ~_guard749;
wire _guard751 = _guard748 & _guard750;
wire _guard752 = wrapper_early_reset_cond10_go_out;
wire _guard753 = _guard751 & _guard752;
wire _guard754 = _guard747 | _guard753;
wire _guard755 = fsm_out == 5'd0;
wire _guard756 = signal_reg_out;
wire _guard757 = ~_guard756;
wire _guard758 = _guard755 & _guard757;
wire _guard759 = wrapper_early_reset_static_par0_go_out;
wire _guard760 = _guard758 & _guard759;
wire _guard761 = _guard754 | _guard760;
wire _guard762 = fsm_out == 5'd0;
wire _guard763 = signal_reg_out;
wire _guard764 = ~_guard763;
wire _guard765 = _guard762 & _guard764;
wire _guard766 = wrapper_early_reset_cond20_go_out;
wire _guard767 = _guard765 & _guard766;
wire _guard768 = _guard761 | _guard767;
wire _guard769 = fsm_out == 5'd0;
wire _guard770 = signal_reg_out;
wire _guard771 = ~_guard770;
wire _guard772 = _guard769 & _guard771;
wire _guard773 = wrapper_early_reset_static_par4_go_out;
wire _guard774 = _guard772 & _guard773;
wire _guard775 = _guard768 | _guard774;
wire _guard776 = fsm_out == 5'd0;
wire _guard777 = signal_reg_out;
wire _guard778 = _guard776 & _guard777;
wire _guard779 = fsm_out == 5'd0;
wire _guard780 = signal_reg_out;
wire _guard781 = _guard779 & _guard780;
wire _guard782 = fsm_out == 5'd0;
wire _guard783 = early_reset_static_par4_go_out;
wire _guard784 = _guard782 & _guard783;
wire _guard785 = fsm_out == 5'd0;
wire _guard786 = early_reset_static_par4_go_out;
wire _guard787 = _guard785 & _guard786;
wire _guard788 = invoke33_done_out;
wire _guard789 = ~_guard788;
wire _guard790 = fsm0_out == 4'd9;
wire _guard791 = _guard789 & _guard790;
wire _guard792 = tdcc_go_out;
wire _guard793 = _guard791 & _guard792;
wire _guard794 = wrapper_early_reset_cond00_done_out;
wire _guard795 = ~_guard794;
wire _guard796 = fsm0_out == 4'd1;
wire _guard797 = _guard795 & _guard796;
wire _guard798 = tdcc_go_out;
wire _guard799 = _guard797 & _guard798;
wire _guard800 = wrapper_early_reset_cond00_done_out;
wire _guard801 = ~_guard800;
wire _guard802 = fsm0_out == 4'd10;
wire _guard803 = _guard801 & _guard802;
wire _guard804 = tdcc_go_out;
wire _guard805 = _guard803 & _guard804;
wire _guard806 = _guard799 | _guard805;
wire _guard807 = fsm_out == 5'd0;
wire _guard808 = signal_reg_out;
wire _guard809 = _guard807 & _guard808;
wire _guard810 = wrapper_early_reset_cond20_done_out;
wire _guard811 = ~_guard810;
wire _guard812 = fsm0_out == 4'd5;
wire _guard813 = _guard811 & _guard812;
wire _guard814 = tdcc_go_out;
wire _guard815 = _guard813 & _guard814;
wire _guard816 = fsm_out == 5'd5;
wire _guard817 = fsm_out == 5'd12;
wire _guard818 = _guard816 | _guard817;
wire _guard819 = fsm_out == 5'd1;
wire _guard820 = _guard818 | _guard819;
wire _guard821 = early_reset_static_seq_go_out;
wire _guard822 = _guard820 & _guard821;
wire _guard823 = fsm_out == 5'd9;
wire _guard824 = fsm_out == 5'd17;
wire _guard825 = _guard823 | _guard824;
wire _guard826 = fsm_out == 5'd1;
wire _guard827 = _guard825 | _guard826;
wire _guard828 = early_reset_static_par4_go_out;
wire _guard829 = _guard827 & _guard828;
wire _guard830 = _guard822 | _guard829;
wire _guard831 = fsm_out == 5'd12;
wire _guard832 = fsm_out == 5'd1;
wire _guard833 = _guard831 | _guard832;
wire _guard834 = early_reset_static_seq_go_out;
wire _guard835 = _guard833 & _guard834;
wire _guard836 = fsm_out == 5'd1;
wire _guard837 = early_reset_static_par4_go_out;
wire _guard838 = _guard836 & _guard837;
wire _guard839 = _guard835 | _guard838;
wire _guard840 = fsm_out == 5'd5;
wire _guard841 = early_reset_static_seq_go_out;
wire _guard842 = _guard840 & _guard841;
wire _guard843 = fsm_out == 5'd9;
wire _guard844 = fsm_out == 5'd17;
wire _guard845 = _guard843 | _guard844;
wire _guard846 = early_reset_static_par4_go_out;
wire _guard847 = _guard845 & _guard846;
wire _guard848 = _guard842 | _guard847;
wire _guard849 = invoke2_go_out;
wire _guard850 = fsm_out == 5'd19;
wire _guard851 = early_reset_static_par4_go_out;
wire _guard852 = _guard850 & _guard851;
wire _guard853 = _guard849 | _guard852;
wire _guard854 = fsm_out == 5'd19;
wire _guard855 = early_reset_static_par4_go_out;
wire _guard856 = _guard854 & _guard855;
wire _guard857 = invoke2_go_out;
wire _guard858 = wrapper_early_reset_static_par0_done_out;
wire _guard859 = ~_guard858;
wire _guard860 = fsm0_out == 4'd4;
wire _guard861 = _guard859 & _guard860;
wire _guard862 = tdcc_go_out;
wire _guard863 = _guard861 & _guard862;
wire _guard864 = fsm_out == 5'd0;
wire _guard865 = signal_reg_out;
wire _guard866 = _guard864 & _guard865;
wire _guard867 = fsm0_out == 4'd11;
wire _guard868 = fsm_out == 5'd1;
wire _guard869 = early_reset_static_seq_go_out;
wire _guard870 = _guard868 & _guard869;
wire _guard871 = fsm_out == 5'd1;
wire _guard872 = fsm_out == 5'd5;
wire _guard873 = _guard871 | _guard872;
wire _guard874 = early_reset_static_par4_go_out;
wire _guard875 = _guard873 & _guard874;
wire _guard876 = _guard870 | _guard875;
wire _guard877 = fsm_out == 5'd1;
wire _guard878 = early_reset_static_seq_go_out;
wire _guard879 = _guard877 & _guard878;
wire _guard880 = fsm_out == 5'd1;
wire _guard881 = early_reset_static_par4_go_out;
wire _guard882 = _guard880 & _guard881;
wire _guard883 = _guard879 | _guard882;
wire _guard884 = fsm_out == 5'd5;
wire _guard885 = early_reset_static_par4_go_out;
wire _guard886 = _guard884 & _guard885;
wire _guard887 = wrapper_early_reset_static_par_go_out;
wire _guard888 = comb_reg1_out;
wire _guard889 = ~_guard888;
wire _guard890 = fsm_out == 5'd0;
wire _guard891 = _guard889 & _guard890;
wire _guard892 = early_reset_cond20_go_out;
wire _guard893 = fsm_out == 5'd18;
wire _guard894 = early_reset_static_seq_go_out;
wire _guard895 = _guard893 & _guard894;
wire _guard896 = _guard892 | _guard895;
wire _guard897 = early_reset_cond20_go_out;
wire _guard898 = fsm_out == 5'd18;
wire _guard899 = early_reset_static_seq_go_out;
wire _guard900 = _guard898 & _guard899;
wire _guard901 = _guard897 | _guard900;
assign i0_write_en = _guard3;
assign i0_clk = clk;
assign i0_reset = reset;
assign i0_in =
  _guard4 ? add2_out :
  _guard5 ? const1_out :
  'x;
always_comb begin
  if(~$onehot0({_guard5, _guard4})) begin
    $fatal(2, "Multiple assignment to port `i0.in'.");
end
end
assign adder1_left =
  _guard6 ? fsm_out :
  5'd0;
assign adder1_right =
  _guard7 ? 5'd1 :
  5'd0;
assign early_reset_cond00_go_in = _guard8;
assign early_reset_cond10_go_in = _guard9;
assign A_int_read_en = _guard18;
assign A_int_clk = clk;
assign A_int_addr0 = i0_out;
assign A_int_reset = reset;
assign A_int_addr1 =
  _guard30 ? i0_out :
  _guard35 ? k_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard35, _guard30})) begin
    $fatal(2, "Multiple assignment to port `A_int.addr1'.");
end
end
assign C_int_write_en = _guard42;
assign C_int_read_en = _guard49;
assign C_int_clk = clk;
assign C_int_addr0 =
  _guard54 ? i0_out :
  _guard59 ? k_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard59, _guard54})) begin
    $fatal(2, "Multiple assignment to port `C_int.addr0'.");
end
end
assign C_int_reset = reset;
assign C_int_write_data =
  _guard62 ? add3_out :
  _guard65 ? add4_out :
  'x;
always_comb begin
  if(~$onehot0({_guard65, _guard62})) begin
    $fatal(2, "Multiple assignment to port `C_int.write_data'.");
end
end
assign C_int_addr1 = j0_out;
assign done = _guard77;
assign fsm_write_en = _guard90;
assign fsm_clk = clk;
assign fsm_reset = reset;
assign fsm_in =
  _guard93 ? adder1_out :
  _guard96 ? adder_out :
  _guard99 ? adder4_out :
  _guard126 ? 5'd0 :
  _guard129 ? adder2_out :
  _guard132 ? adder3_out :
  _guard135 ? adder5_out :
  _guard138 ? adder0_out :
  5'd0;
always_comb begin
  if(~$onehot0({_guard138, _guard135, _guard132, _guard129, _guard126, _guard99, _guard96, _guard93})) begin
    $fatal(2, "Multiple assignment to port `fsm.in'.");
end
end
assign adder_left =
  _guard139 ? fsm_out :
  5'd0;
assign adder_right =
  _guard140 ? 5'd1 :
  5'd0;
assign early_reset_static_par0_go_in = _guard141;
assign beta_int_read0_0_write_en = _guard144;
assign beta_int_read0_0_clk = clk;
assign beta_int_read0_0_reset = reset;
assign beta_int_read0_0_in = beta_int_read_data;
assign adder4_left =
  _guard148 ? fsm_out :
  5'd0;
assign adder4_right =
  _guard149 ? 5'd1 :
  5'd0;
assign invoke2_go_in = _guard155;
assign A_int_read0_0_write_en = _guard170;
assign A_int_read0_0_clk = clk;
assign A_int_read0_0_reset = reset;
assign A_int_read0_0_in =
  _guard179 ? A_int_read_data :
  _guard188 ? mult_pipe0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard188, _guard179})) begin
    $fatal(2, "Multiple assignment to port `A_int_read0_0.in'.");
end
end
assign add2_left =
  _guard189 ? i0_out :
  _guard192 ? k_0_out :
  _guard195 ? j0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard195, _guard192, _guard189})) begin
    $fatal(2, "Multiple assignment to port `add2.left'.");
end
end
assign add2_right = const11_out;
assign comb_reg_write_en = _guard205;
assign comb_reg_clk = clk;
assign comb_reg_reset = reset;
assign comb_reg_in =
  _guard206 ? le0_out :
  1'd0;
assign add3_left =
  _guard209 ? A_int_read0_0_out :
  _guard212 ? temp2_0_out :
  _guard215 ? C_i_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard215, _guard212, _guard209})) begin
    $fatal(2, "Multiple assignment to port `add3.left'.");
end
end
assign add3_right =
  _guard222 ? A_int_read0_0_out :
  _guard225 ? C_i_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard225, _guard222})) begin
    $fatal(2, "Multiple assignment to port `add3.right'.");
end
end
assign add4_left = add3_out;
assign add4_right = B_int_read0_0_out;
assign invoke33_done_in = i0_done;
assign early_reset_cond00_done_in = ud_out;
assign early_reset_cond10_done_in = ud0_out;
assign comb_reg1_write_en = _guard236;
assign comb_reg1_clk = clk;
assign comb_reg1_reset = reset;
assign comb_reg1_in =
  _guard241 ? lt0_out :
  1'd0;
assign early_reset_cond20_go_in = _guard242;
assign early_reset_static_par4_go_in = _guard243;
assign wrapper_early_reset_static_par_go_in = _guard249;
assign wrapper_early_reset_cond10_go_in = _guard262;
assign while_wrapper_early_reset_static_seq_go_in = _guard268;
assign B_int_read_en = _guard277;
assign B_int_clk = clk;
assign B_int_addr0 =
  _guard284 ? i0_out :
  _guard287 ? k_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard287, _guard284})) begin
    $fatal(2, "Multiple assignment to port `B_int.addr0'.");
end
end
assign B_int_reset = reset;
assign B_int_addr1 = j0_out;
assign k_0_write_en = _guard301;
assign k_0_clk = clk;
assign k_0_reset = reset;
assign k_0_in =
  _guard304 ? add2_out :
  _guard305 ? const1_out :
  'x;
always_comb begin
  if(~$onehot0({_guard305, _guard304})) begin
    $fatal(2, "Multiple assignment to port `k_0.in'.");
end
end
assign comb_reg0_write_en = _guard306;
assign comb_reg0_clk = clk;
assign comb_reg0_reset = reset;
assign comb_reg0_in =
  _guard307 ? le0_out :
  1'd0;
assign early_reset_static_par0_done_in = ud3_out;
assign wrapper_early_reset_static_par_done_in = _guard310;
assign wrapper_early_reset_cond20_done_in = _guard313;
assign tdcc_go_in = go;
assign alpha_int_read_en = _guard320;
assign alpha_int_clk = clk;
assign alpha_int_addr0 = const10_out;
assign alpha_int_reset = reset;
assign adder2_left =
  _guard328 ? fsm_out :
  5'd0;
assign adder2_right =
  _guard329 ? 5'd1 :
  5'd0;
assign fsm0_write_en = _guard440;
assign fsm0_clk = clk;
assign fsm0_reset = reset;
assign fsm0_in =
  _guard445 ? 4'd3 :
  _guard450 ? 4'd5 :
  _guard465 ? 4'd4 :
  _guard482 ? 4'd9 :
  _guard487 ? 4'd10 :
  _guard488 ? 4'd0 :
  _guard493 ? 4'd7 :
  _guard508 ? 4'd2 :
  _guard513 ? 4'd6 :
  _guard518 ? 4'd8 :
  _guard523 ? 4'd1 :
  _guard540 ? 4'd11 :
  4'd0;
always_comb begin
  if(~$onehot0({_guard540, _guard523, _guard518, _guard513, _guard508, _guard493, _guard488, _guard487, _guard482, _guard465, _guard450, _guard445})) begin
    $fatal(2, "Multiple assignment to port `fsm0.in'.");
end
end
assign adder3_left =
  _guard541 ? fsm_out :
  5'd0;
assign adder3_right =
  _guard542 ? 5'd1 :
  5'd0;
assign adder5_left =
  _guard543 ? fsm_out :
  5'd0;
assign adder5_right =
  _guard544 ? 5'd1 :
  5'd0;
assign wrapper_early_reset_static_par4_go_in = _guard550;
assign alpha_int_read0_0_write_en = _guard557;
assign alpha_int_read0_0_clk = clk;
assign alpha_int_read0_0_reset = reset;
assign alpha_int_read0_0_in = alpha_int_read_data;
assign mult_pipe0_clk = clk;
assign mult_pipe0_left =
  _guard569 ? beta_int_read0_0_out :
  _guard584 ? alpha_int_read0_0_out :
  _guard599 ? B_int_read0_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard599, _guard584, _guard569})) begin
    $fatal(2, "Multiple assignment to port `mult_pipe0.left'.");
end
end
assign mult_pipe0_go = _guard630;
assign mult_pipe0_reset = reset;
assign mult_pipe0_right =
  _guard645 ? A_int_read0_0_out :
  _guard650 ? temp2_0_out :
  _guard661 ? B_int_read0_0_out :
  _guard666 ? C_i_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard666, _guard661, _guard650, _guard645})) begin
    $fatal(2, "Multiple assignment to port `mult_pipe0.right'.");
end
end
assign temp2_0_write_en = _guard673;
assign temp2_0_clk = clk;
assign temp2_0_reset = reset;
assign temp2_0_in =
  _guard676 ? const0_out :
  _guard679 ? add3_out :
  'x;
always_comb begin
  if(~$onehot0({_guard679, _guard676})) begin
    $fatal(2, "Multiple assignment to port `temp2_0.in'.");
end
end
assign adder0_left =
  _guard680 ? fsm_out :
  5'd0;
assign adder0_right =
  _guard681 ? 5'd1 :
  5'd0;
assign early_reset_static_par_done_in = ud2_out;
assign early_reset_static_seq_go_in = _guard682;
assign wrapper_early_reset_cond10_done_in = _guard685;
assign le0_left =
  _guard686 ? i0_out :
  _guard687 ? j0_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard687, _guard686})) begin
    $fatal(2, "Multiple assignment to port `le0.left'.");
end
end
assign le0_right =
  _guard688 ? const2_out :
  _guard689 ? const4_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard689, _guard688})) begin
    $fatal(2, "Multiple assignment to port `le0.right'.");
end
end
assign signal_reg_write_en = _guard734;
assign signal_reg_clk = clk;
assign signal_reg_reset = reset;
assign signal_reg_in =
  _guard775 ? 1'd1 :
  _guard778 ? 1'd0 :
  1'd0;
always_comb begin
  if(~$onehot0({_guard778, _guard775})) begin
    $fatal(2, "Multiple assignment to port `signal_reg.in'.");
end
end
assign invoke2_done_in = j0_done;
assign wrapper_early_reset_static_par4_done_in = _guard781;
assign beta_int_read_en = _guard784;
assign beta_int_clk = clk;
assign beta_int_addr0 = const9_out;
assign beta_int_reset = reset;
assign invoke33_go_in = _guard793;
assign early_reset_static_par4_done_in = ud5_out;
assign wrapper_early_reset_cond00_go_in = _guard806;
assign wrapper_early_reset_cond00_done_in = _guard809;
assign wrapper_early_reset_cond20_go_in = _guard815;
assign B_int_read0_0_write_en = _guard830;
assign B_int_read0_0_clk = clk;
assign B_int_read0_0_reset = reset;
assign B_int_read0_0_in =
  _guard839 ? B_int_read_data :
  _guard848 ? mult_pipe0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard848, _guard839})) begin
    $fatal(2, "Multiple assignment to port `B_int_read0_0.in'.");
end
end
assign j0_write_en = _guard853;
assign j0_clk = clk;
assign j0_reset = reset;
assign j0_in =
  _guard856 ? add2_out :
  _guard857 ? const1_out :
  'x;
always_comb begin
  if(~$onehot0({_guard857, _guard856})) begin
    $fatal(2, "Multiple assignment to port `j0.in'.");
end
end
assign early_reset_cond20_done_in = ud1_out;
assign early_reset_static_seq_done_in = ud4_out;
assign wrapper_early_reset_static_par0_go_in = _guard863;
assign wrapper_early_reset_static_par0_done_in = _guard866;
assign tdcc_done_in = _guard867;
assign C_i_j_0_write_en = _guard876;
assign C_i_j_0_clk = clk;
assign C_i_j_0_reset = reset;
assign C_i_j_0_in =
  _guard883 ? C_int_read_data :
  _guard886 ? mult_pipe0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard886, _guard883})) begin
    $fatal(2, "Multiple assignment to port `C_i_j_0.in'.");
end
end
assign early_reset_static_par_go_in = _guard887;
assign while_wrapper_early_reset_static_seq_done_in = _guard891;
assign lt0_left =
  _guard896 ? k_0_out :
  4'd0;
assign lt0_right =
  _guard901 ? i0_out :
  4'd0;
// COMPONENT END: main
endmodule

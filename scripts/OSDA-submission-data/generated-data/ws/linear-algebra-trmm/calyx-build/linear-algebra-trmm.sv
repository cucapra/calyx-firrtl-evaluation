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
    $readmemh({DATA, "/alpha_int.dat"}, alpha_int.mem);
end
final begin
    $writememh({DATA, "/A_int.out"}, A_int.mem.mem);
    $writememh({DATA, "/B_int.out"}, B_int.mem.mem);
    $writememh({DATA, "/alpha_int.out"}, alpha_int.mem);
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
logic [31:0] B_i_j_0_in;
logic B_i_j_0_write_en;
logic B_i_j_0_clk;
logic B_i_j_0_reset;
logic [31:0] B_i_j_0_out;
logic B_i_j_0_done;
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
logic [31:0] B_k_j_0_in;
logic B_k_j_0_write_en;
logic B_k_j_0_clk;
logic B_k_j_0_reset;
logic [31:0] B_k_j_0_out;
logic B_k_j_0_done;
logic [3:0] add0_left;
logic [3:0] add0_right;
logic [3:0] add0_out;
logic [31:0] add1_left;
logic [31:0] add1_right;
logic [31:0] add1_out;
logic alpha_int_clk;
logic alpha_int_reset;
logic alpha_int_addr0;
logic alpha_int_write_en;
logic [31:0] alpha_int_write_data;
logic alpha_int_read_en;
logic [31:0] alpha_int_read_data;
logic alpha_int_write_done;
logic alpha_int_read_done;
logic [3:0] const0_out;
logic [3:0] const1_out;
logic [3:0] const3_out;
logic [3:0] const4_out;
logic [3:0] const5_out;
logic const7_out;
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
logic [3:0] fsm_in;
logic fsm_write_en;
logic fsm_clk;
logic fsm_reset;
logic [3:0] fsm_out;
logic fsm_done;
logic ud_out;
logic [3:0] adder_left;
logic [3:0] adder_right;
logic [3:0] adder_out;
logic ud0_out;
logic [3:0] adder0_left;
logic [3:0] adder0_right;
logic [3:0] adder0_out;
logic ud1_out;
logic [3:0] adder1_left;
logic [3:0] adder1_right;
logic [3:0] adder1_out;
logic ud2_out;
logic [3:0] adder2_left;
logic [3:0] adder2_right;
logic [3:0] adder2_out;
logic ud3_out;
logic [3:0] adder3_left;
logic [3:0] adder3_right;
logic [3:0] adder3_out;
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
logic invoke0_go_in;
logic invoke0_go_out;
logic invoke0_done_in;
logic invoke0_done_out;
logic invoke1_go_in;
logic invoke1_go_out;
logic invoke1_done_in;
logic invoke1_done_out;
logic invoke2_go_in;
logic invoke2_go_out;
logic invoke2_done_in;
logic invoke2_done_out;
logic invoke14_go_in;
logic invoke14_go_out;
logic invoke14_done_in;
logic invoke14_done_out;
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
logic early_reset_static_seq_go_in;
logic early_reset_static_seq_go_out;
logic early_reset_static_seq_done_in;
logic early_reset_static_seq_done_out;
logic early_reset_static_par1_go_in;
logic early_reset_static_par1_go_out;
logic early_reset_static_par1_done_in;
logic early_reset_static_par1_done_out;
logic wrapper_early_reset_cond00_go_in;
logic wrapper_early_reset_cond00_go_out;
logic wrapper_early_reset_cond00_done_in;
logic wrapper_early_reset_cond00_done_out;
logic wrapper_early_reset_cond10_go_in;
logic wrapper_early_reset_cond10_go_out;
logic wrapper_early_reset_cond10_done_in;
logic wrapper_early_reset_cond10_done_out;
logic wrapper_early_reset_cond20_go_in;
logic wrapper_early_reset_cond20_go_out;
logic wrapper_early_reset_cond20_done_in;
logic wrapper_early_reset_cond20_done_out;
logic while_wrapper_early_reset_static_seq_go_in;
logic while_wrapper_early_reset_static_seq_go_out;
logic while_wrapper_early_reset_static_seq_done_in;
logic while_wrapper_early_reset_static_seq_done_out;
logic wrapper_early_reset_static_par1_go_in;
logic wrapper_early_reset_static_par1_go_out;
logic wrapper_early_reset_static_par1_done_in;
logic wrapper_early_reset_static_par1_done_out;
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
std_reg # (
    .WIDTH(32)
) B_i_j_0 (
    .clk(B_i_j_0_clk),
    .done(B_i_j_0_done),
    .in(B_i_j_0_in),
    .out(B_i_j_0_out),
    .reset(B_i_j_0_reset),
    .write_en(B_i_j_0_write_en)
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
) B_k_j_0 (
    .clk(B_k_j_0_clk),
    .done(B_k_j_0_done),
    .in(B_k_j_0_in),
    .out(B_k_j_0_out),
    .reset(B_k_j_0_reset),
    .write_en(B_k_j_0_write_en)
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
std_const # (
    .VALUE(4'd0),
    .WIDTH(4)
) const0 (
    .out(const0_out)
);
std_const # (
    .VALUE(4'd7),
    .WIDTH(4)
) const1 (
    .out(const1_out)
);
std_const # (
    .VALUE(4'd11),
    .WIDTH(4)
) const3 (
    .out(const3_out)
);
std_const # (
    .VALUE(4'd1),
    .WIDTH(4)
) const4 (
    .out(const4_out)
);
std_const # (
    .VALUE(4'd8),
    .WIDTH(4)
) const5 (
    .out(const5_out)
);
std_const # (
    .VALUE(1'd0),
    .WIDTH(1)
) const7 (
    .out(const7_out)
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
    .WIDTH(4)
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
    .WIDTH(4)
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
    .WIDTH(4)
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
    .WIDTH(4)
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
    .WIDTH(4)
) adder3 (
    .left(adder3_left),
    .out(adder3_out),
    .right(adder3_right)
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
) invoke0_go (
    .in(invoke0_go_in),
    .out(invoke0_go_out)
);
std_wire # (
    .WIDTH(1)
) invoke0_done (
    .in(invoke0_done_in),
    .out(invoke0_done_out)
);
std_wire # (
    .WIDTH(1)
) invoke1_go (
    .in(invoke1_go_in),
    .out(invoke1_go_out)
);
std_wire # (
    .WIDTH(1)
) invoke1_done (
    .in(invoke1_done_in),
    .out(invoke1_done_out)
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
) invoke14_go (
    .in(invoke14_go_in),
    .out(invoke14_go_out)
);
std_wire # (
    .WIDTH(1)
) invoke14_done (
    .in(invoke14_done_in),
    .out(invoke14_done_out)
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
) early_reset_static_par1_go (
    .in(early_reset_static_par1_go_in),
    .out(early_reset_static_par1_go_out)
);
std_wire # (
    .WIDTH(1)
) early_reset_static_par1_done (
    .in(early_reset_static_par1_done_in),
    .out(early_reset_static_par1_done_out)
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
) wrapper_early_reset_static_par1_go (
    .in(wrapper_early_reset_static_par1_go_in),
    .out(wrapper_early_reset_static_par1_go_out)
);
std_wire # (
    .WIDTH(1)
) wrapper_early_reset_static_par1_done (
    .in(wrapper_early_reset_static_par1_done_in),
    .out(wrapper_early_reset_static_par1_done_out)
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
wire _guard1 = invoke0_go_out;
wire _guard2 = invoke14_go_out;
wire _guard3 = _guard1 | _guard2;
wire _guard4 = invoke14_go_out;
wire _guard5 = invoke0_go_out;
wire _guard6 = early_reset_cond20_go_out;
wire _guard7 = early_reset_cond20_go_out;
wire _guard8 = wrapper_early_reset_cond00_go_out;
wire _guard9 = wrapper_early_reset_cond10_go_out;
wire _guard10 = fsm_out == 4'd0;
wire _guard11 = early_reset_static_seq_go_out;
wire _guard12 = _guard10 & _guard11;
wire _guard13 = fsm_out == 4'd0;
wire _guard14 = early_reset_static_seq_go_out;
wire _guard15 = _guard13 & _guard14;
wire _guard16 = fsm_out == 4'd0;
wire _guard17 = early_reset_static_seq_go_out;
wire _guard18 = _guard16 & _guard17;
wire _guard19 = fsm_out == 4'd8;
wire _guard20 = early_reset_static_seq_go_out;
wire _guard21 = _guard19 & _guard20;
wire _guard22 = fsm_out == 4'd8;
wire _guard23 = early_reset_static_seq_go_out;
wire _guard24 = _guard22 & _guard23;
wire _guard25 = tdcc_done_out;
wire _guard26 = early_reset_cond00_go_out;
wire _guard27 = early_reset_cond10_go_out;
wire _guard28 = _guard26 | _guard27;
wire _guard29 = early_reset_cond20_go_out;
wire _guard30 = _guard28 | _guard29;
wire _guard31 = early_reset_static_seq_go_out;
wire _guard32 = _guard30 | _guard31;
wire _guard33 = early_reset_static_par1_go_out;
wire _guard34 = _guard32 | _guard33;
wire _guard35 = fsm_out != 4'd0;
wire _guard36 = early_reset_cond20_go_out;
wire _guard37 = _guard35 & _guard36;
wire _guard38 = fsm_out != 4'd0;
wire _guard39 = early_reset_cond00_go_out;
wire _guard40 = _guard38 & _guard39;
wire _guard41 = fsm_out == 4'd0;
wire _guard42 = early_reset_cond00_go_out;
wire _guard43 = _guard41 & _guard42;
wire _guard44 = fsm_out == 4'd0;
wire _guard45 = early_reset_cond10_go_out;
wire _guard46 = _guard44 & _guard45;
wire _guard47 = _guard43 | _guard46;
wire _guard48 = fsm_out == 4'd0;
wire _guard49 = early_reset_cond20_go_out;
wire _guard50 = _guard48 & _guard49;
wire _guard51 = _guard47 | _guard50;
wire _guard52 = fsm_out == 4'd9;
wire _guard53 = early_reset_static_seq_go_out;
wire _guard54 = _guard52 & _guard53;
wire _guard55 = _guard51 | _guard54;
wire _guard56 = fsm_out == 4'd7;
wire _guard57 = early_reset_static_par1_go_out;
wire _guard58 = _guard56 & _guard57;
wire _guard59 = _guard55 | _guard58;
wire _guard60 = fsm_out != 4'd9;
wire _guard61 = early_reset_static_seq_go_out;
wire _guard62 = _guard60 & _guard61;
wire _guard63 = fsm_out != 4'd7;
wire _guard64 = early_reset_static_par1_go_out;
wire _guard65 = _guard63 & _guard64;
wire _guard66 = fsm_out != 4'd0;
wire _guard67 = early_reset_cond10_go_out;
wire _guard68 = _guard66 & _guard67;
wire _guard69 = early_reset_cond00_go_out;
wire _guard70 = early_reset_cond00_go_out;
wire _guard71 = fsm_out == 4'd0;
wire _guard72 = signal_reg_out;
wire _guard73 = _guard71 & _guard72;
wire _guard74 = invoke2_go_out;
wire _guard75 = invoke14_go_out;
wire _guard76 = _guard74 | _guard75;
wire _guard77 = fsm_out == 4'd4;
wire _guard78 = early_reset_static_seq_go_out;
wire _guard79 = _guard77 & _guard78;
wire _guard80 = fsm_out == 4'd7;
wire _guard81 = early_reset_static_par1_go_out;
wire _guard82 = _guard80 & _guard81;
wire _guard83 = invoke2_go_out;
wire _guard84 = invoke14_go_out;
wire _guard85 = _guard83 | _guard84;
wire _guard86 = fsm_out == 4'd4;
wire _guard87 = early_reset_static_seq_go_out;
wire _guard88 = _guard86 & _guard87;
wire _guard89 = _guard85 | _guard88;
wire _guard90 = fsm_out == 4'd7;
wire _guard91 = early_reset_static_par1_go_out;
wire _guard92 = _guard90 & _guard91;
wire _guard93 = _guard89 | _guard92;
wire _guard94 = invoke2_done_out;
wire _guard95 = ~_guard94;
wire _guard96 = fsm0_out == 4'd4;
wire _guard97 = _guard95 & _guard96;
wire _guard98 = tdcc_go_out;
wire _guard99 = _guard97 & _guard98;
wire _guard100 = fsm_out == 4'd7;
wire _guard101 = fsm_out == 4'd1;
wire _guard102 = _guard100 | _guard101;
wire _guard103 = early_reset_static_seq_go_out;
wire _guard104 = _guard102 & _guard103;
wire _guard105 = fsm_out == 4'd1;
wire _guard106 = fsm_out == 4'd5;
wire _guard107 = _guard105 | _guard106;
wire _guard108 = early_reset_static_par1_go_out;
wire _guard109 = _guard107 & _guard108;
wire _guard110 = _guard104 | _guard109;
wire _guard111 = fsm_out == 4'd1;
wire _guard112 = early_reset_static_seq_go_out;
wire _guard113 = _guard111 & _guard112;
wire _guard114 = fsm_out == 4'd1;
wire _guard115 = early_reset_static_par1_go_out;
wire _guard116 = _guard114 & _guard115;
wire _guard117 = fsm_out == 4'd7;
wire _guard118 = early_reset_static_seq_go_out;
wire _guard119 = _guard117 & _guard118;
wire _guard120 = fsm_out == 4'd5;
wire _guard121 = early_reset_static_par1_go_out;
wire _guard122 = _guard120 & _guard121;
wire _guard123 = _guard119 | _guard122;
wire _guard124 = early_reset_cond00_go_out;
wire _guard125 = early_reset_cond00_go_out;
wire _guard126 = early_reset_cond20_go_out;
wire _guard127 = fsm_out == 4'd9;
wire _guard128 = early_reset_static_seq_go_out;
wire _guard129 = _guard127 & _guard128;
wire _guard130 = _guard126 | _guard129;
wire _guard131 = early_reset_cond20_go_out;
wire _guard132 = fsm_out == 4'd9;
wire _guard133 = early_reset_static_seq_go_out;
wire _guard134 = _guard132 & _guard133;
wire _guard135 = _guard131 | _guard134;
wire _guard136 = wrapper_early_reset_cond20_go_out;
wire _guard137 = wrapper_early_reset_static_par1_go_out;
wire _guard138 = wrapper_early_reset_cond10_done_out;
wire _guard139 = ~_guard138;
wire _guard140 = fsm0_out == 4'd3;
wire _guard141 = _guard139 & _guard140;
wire _guard142 = tdcc_go_out;
wire _guard143 = _guard141 & _guard142;
wire _guard144 = wrapper_early_reset_cond10_done_out;
wire _guard145 = ~_guard144;
wire _guard146 = fsm0_out == 4'd8;
wire _guard147 = _guard145 & _guard146;
wire _guard148 = tdcc_go_out;
wire _guard149 = _guard147 & _guard148;
wire _guard150 = _guard143 | _guard149;
wire _guard151 = while_wrapper_early_reset_static_seq_done_out;
wire _guard152 = ~_guard151;
wire _guard153 = fsm0_out == 4'd6;
wire _guard154 = _guard152 & _guard153;
wire _guard155 = tdcc_go_out;
wire _guard156 = _guard154 & _guard155;
wire _guard157 = fsm_out == 4'd8;
wire _guard158 = early_reset_static_seq_go_out;
wire _guard159 = _guard157 & _guard158;
wire _guard160 = fsm_out == 4'd6;
wire _guard161 = early_reset_static_par1_go_out;
wire _guard162 = _guard160 & _guard161;
wire _guard163 = _guard159 | _guard162;
wire _guard164 = fsm_out == 4'd0;
wire _guard165 = fsm_out == 4'd2;
wire _guard166 = _guard164 | _guard165;
wire _guard167 = early_reset_static_seq_go_out;
wire _guard168 = _guard166 & _guard167;
wire _guard169 = fsm_out == 4'd0;
wire _guard170 = early_reset_static_par1_go_out;
wire _guard171 = _guard169 & _guard170;
wire _guard172 = _guard168 | _guard171;
wire _guard173 = fsm_out == 4'd0;
wire _guard174 = fsm_out == 4'd8;
wire _guard175 = _guard173 | _guard174;
wire _guard176 = early_reset_static_seq_go_out;
wire _guard177 = _guard175 & _guard176;
wire _guard178 = fsm_out == 4'd0;
wire _guard179 = fsm_out == 4'd6;
wire _guard180 = _guard178 | _guard179;
wire _guard181 = early_reset_static_par1_go_out;
wire _guard182 = _guard180 & _guard181;
wire _guard183 = _guard177 | _guard182;
wire _guard184 = fsm_out == 4'd2;
wire _guard185 = early_reset_static_seq_go_out;
wire _guard186 = _guard184 & _guard185;
wire _guard187 = fsm_out == 4'd8;
wire _guard188 = early_reset_static_seq_go_out;
wire _guard189 = _guard187 & _guard188;
wire _guard190 = fsm_out == 4'd6;
wire _guard191 = early_reset_static_par1_go_out;
wire _guard192 = _guard190 & _guard191;
wire _guard193 = fsm_out == 4'd0;
wire _guard194 = fsm_out == 4'd2;
wire _guard195 = _guard193 | _guard194;
wire _guard196 = fsm_out == 4'd8;
wire _guard197 = _guard195 | _guard196;
wire _guard198 = early_reset_static_seq_go_out;
wire _guard199 = _guard197 & _guard198;
wire _guard200 = fsm_out == 4'd0;
wire _guard201 = fsm_out == 4'd6;
wire _guard202 = _guard200 | _guard201;
wire _guard203 = early_reset_static_par1_go_out;
wire _guard204 = _guard202 & _guard203;
wire _guard205 = _guard199 | _guard204;
wire _guard206 = invoke2_go_out;
wire _guard207 = fsm_out == 4'd4;
wire _guard208 = early_reset_static_seq_go_out;
wire _guard209 = _guard207 & _guard208;
wire _guard210 = _guard206 | _guard209;
wire _guard211 = invoke2_go_out;
wire _guard212 = fsm_out == 4'd4;
wire _guard213 = early_reset_static_seq_go_out;
wire _guard214 = _guard212 & _guard213;
wire _guard215 = _guard211 | _guard214;
wire _guard216 = early_reset_cond10_go_out;
wire _guard217 = early_reset_cond10_go_out;
wire _guard218 = invoke0_done_out;
wire _guard219 = ~_guard218;
wire _guard220 = fsm0_out == 4'd0;
wire _guard221 = _guard219 & _guard220;
wire _guard222 = tdcc_go_out;
wire _guard223 = _guard221 & _guard222;
wire _guard224 = fsm_out == 4'd0;
wire _guard225 = signal_reg_out;
wire _guard226 = _guard224 & _guard225;
wire _guard227 = fsm_out == 4'd0;
wire _guard228 = early_reset_static_par1_go_out;
wire _guard229 = _guard227 & _guard228;
wire _guard230 = fsm_out == 4'd0;
wire _guard231 = early_reset_static_par1_go_out;
wire _guard232 = _guard230 & _guard231;
wire _guard233 = early_reset_static_seq_go_out;
wire _guard234 = early_reset_static_seq_go_out;
wire _guard235 = fsm0_out == 4'd11;
wire _guard236 = fsm0_out == 4'd0;
wire _guard237 = invoke0_done_out;
wire _guard238 = _guard236 & _guard237;
wire _guard239 = tdcc_go_out;
wire _guard240 = _guard238 & _guard239;
wire _guard241 = _guard235 | _guard240;
wire _guard242 = fsm0_out == 4'd1;
wire _guard243 = wrapper_early_reset_cond00_done_out;
wire _guard244 = comb_reg_out;
wire _guard245 = _guard243 & _guard244;
wire _guard246 = _guard242 & _guard245;
wire _guard247 = tdcc_go_out;
wire _guard248 = _guard246 & _guard247;
wire _guard249 = _guard241 | _guard248;
wire _guard250 = fsm0_out == 4'd10;
wire _guard251 = wrapper_early_reset_cond00_done_out;
wire _guard252 = comb_reg_out;
wire _guard253 = _guard251 & _guard252;
wire _guard254 = _guard250 & _guard253;
wire _guard255 = tdcc_go_out;
wire _guard256 = _guard254 & _guard255;
wire _guard257 = _guard249 | _guard256;
wire _guard258 = fsm0_out == 4'd2;
wire _guard259 = invoke1_done_out;
wire _guard260 = _guard258 & _guard259;
wire _guard261 = tdcc_go_out;
wire _guard262 = _guard260 & _guard261;
wire _guard263 = _guard257 | _guard262;
wire _guard264 = fsm0_out == 4'd3;
wire _guard265 = wrapper_early_reset_cond10_done_out;
wire _guard266 = comb_reg0_out;
wire _guard267 = _guard265 & _guard266;
wire _guard268 = _guard264 & _guard267;
wire _guard269 = tdcc_go_out;
wire _guard270 = _guard268 & _guard269;
wire _guard271 = _guard263 | _guard270;
wire _guard272 = fsm0_out == 4'd8;
wire _guard273 = wrapper_early_reset_cond10_done_out;
wire _guard274 = comb_reg0_out;
wire _guard275 = _guard273 & _guard274;
wire _guard276 = _guard272 & _guard275;
wire _guard277 = tdcc_go_out;
wire _guard278 = _guard276 & _guard277;
wire _guard279 = _guard271 | _guard278;
wire _guard280 = fsm0_out == 4'd4;
wire _guard281 = invoke2_done_out;
wire _guard282 = _guard280 & _guard281;
wire _guard283 = tdcc_go_out;
wire _guard284 = _guard282 & _guard283;
wire _guard285 = _guard279 | _guard284;
wire _guard286 = fsm0_out == 4'd5;
wire _guard287 = wrapper_early_reset_cond20_done_out;
wire _guard288 = _guard286 & _guard287;
wire _guard289 = tdcc_go_out;
wire _guard290 = _guard288 & _guard289;
wire _guard291 = _guard285 | _guard290;
wire _guard292 = fsm0_out == 4'd6;
wire _guard293 = while_wrapper_early_reset_static_seq_done_out;
wire _guard294 = _guard292 & _guard293;
wire _guard295 = tdcc_go_out;
wire _guard296 = _guard294 & _guard295;
wire _guard297 = _guard291 | _guard296;
wire _guard298 = fsm0_out == 4'd7;
wire _guard299 = wrapper_early_reset_static_par1_done_out;
wire _guard300 = _guard298 & _guard299;
wire _guard301 = tdcc_go_out;
wire _guard302 = _guard300 & _guard301;
wire _guard303 = _guard297 | _guard302;
wire _guard304 = fsm0_out == 4'd3;
wire _guard305 = wrapper_early_reset_cond10_done_out;
wire _guard306 = comb_reg0_out;
wire _guard307 = ~_guard306;
wire _guard308 = _guard305 & _guard307;
wire _guard309 = _guard304 & _guard308;
wire _guard310 = tdcc_go_out;
wire _guard311 = _guard309 & _guard310;
wire _guard312 = _guard303 | _guard311;
wire _guard313 = fsm0_out == 4'd8;
wire _guard314 = wrapper_early_reset_cond10_done_out;
wire _guard315 = comb_reg0_out;
wire _guard316 = ~_guard315;
wire _guard317 = _guard314 & _guard316;
wire _guard318 = _guard313 & _guard317;
wire _guard319 = tdcc_go_out;
wire _guard320 = _guard318 & _guard319;
wire _guard321 = _guard312 | _guard320;
wire _guard322 = fsm0_out == 4'd9;
wire _guard323 = invoke14_done_out;
wire _guard324 = _guard322 & _guard323;
wire _guard325 = tdcc_go_out;
wire _guard326 = _guard324 & _guard325;
wire _guard327 = _guard321 | _guard326;
wire _guard328 = fsm0_out == 4'd1;
wire _guard329 = wrapper_early_reset_cond00_done_out;
wire _guard330 = comb_reg_out;
wire _guard331 = ~_guard330;
wire _guard332 = _guard329 & _guard331;
wire _guard333 = _guard328 & _guard332;
wire _guard334 = tdcc_go_out;
wire _guard335 = _guard333 & _guard334;
wire _guard336 = _guard327 | _guard335;
wire _guard337 = fsm0_out == 4'd10;
wire _guard338 = wrapper_early_reset_cond00_done_out;
wire _guard339 = comb_reg_out;
wire _guard340 = ~_guard339;
wire _guard341 = _guard338 & _guard340;
wire _guard342 = _guard337 & _guard341;
wire _guard343 = tdcc_go_out;
wire _guard344 = _guard342 & _guard343;
wire _guard345 = _guard336 | _guard344;
wire _guard346 = fsm0_out == 4'd2;
wire _guard347 = invoke1_done_out;
wire _guard348 = _guard346 & _guard347;
wire _guard349 = tdcc_go_out;
wire _guard350 = _guard348 & _guard349;
wire _guard351 = fsm0_out == 4'd4;
wire _guard352 = invoke2_done_out;
wire _guard353 = _guard351 & _guard352;
wire _guard354 = tdcc_go_out;
wire _guard355 = _guard353 & _guard354;
wire _guard356 = fsm0_out == 4'd3;
wire _guard357 = wrapper_early_reset_cond10_done_out;
wire _guard358 = comb_reg0_out;
wire _guard359 = ~_guard358;
wire _guard360 = _guard357 & _guard359;
wire _guard361 = _guard356 & _guard360;
wire _guard362 = tdcc_go_out;
wire _guard363 = _guard361 & _guard362;
wire _guard364 = fsm0_out == 4'd8;
wire _guard365 = wrapper_early_reset_cond10_done_out;
wire _guard366 = comb_reg0_out;
wire _guard367 = ~_guard366;
wire _guard368 = _guard365 & _guard367;
wire _guard369 = _guard364 & _guard368;
wire _guard370 = tdcc_go_out;
wire _guard371 = _guard369 & _guard370;
wire _guard372 = _guard363 | _guard371;
wire _guard373 = fsm0_out == 4'd3;
wire _guard374 = wrapper_early_reset_cond10_done_out;
wire _guard375 = comb_reg0_out;
wire _guard376 = _guard374 & _guard375;
wire _guard377 = _guard373 & _guard376;
wire _guard378 = tdcc_go_out;
wire _guard379 = _guard377 & _guard378;
wire _guard380 = fsm0_out == 4'd8;
wire _guard381 = wrapper_early_reset_cond10_done_out;
wire _guard382 = comb_reg0_out;
wire _guard383 = _guard381 & _guard382;
wire _guard384 = _guard380 & _guard383;
wire _guard385 = tdcc_go_out;
wire _guard386 = _guard384 & _guard385;
wire _guard387 = _guard379 | _guard386;
wire _guard388 = fsm0_out == 4'd9;
wire _guard389 = invoke14_done_out;
wire _guard390 = _guard388 & _guard389;
wire _guard391 = tdcc_go_out;
wire _guard392 = _guard390 & _guard391;
wire _guard393 = fsm0_out == 4'd11;
wire _guard394 = fsm0_out == 4'd6;
wire _guard395 = while_wrapper_early_reset_static_seq_done_out;
wire _guard396 = _guard394 & _guard395;
wire _guard397 = tdcc_go_out;
wire _guard398 = _guard396 & _guard397;
wire _guard399 = fsm0_out == 4'd1;
wire _guard400 = wrapper_early_reset_cond00_done_out;
wire _guard401 = comb_reg_out;
wire _guard402 = _guard400 & _guard401;
wire _guard403 = _guard399 & _guard402;
wire _guard404 = tdcc_go_out;
wire _guard405 = _guard403 & _guard404;
wire _guard406 = fsm0_out == 4'd10;
wire _guard407 = wrapper_early_reset_cond00_done_out;
wire _guard408 = comb_reg_out;
wire _guard409 = _guard407 & _guard408;
wire _guard410 = _guard406 & _guard409;
wire _guard411 = tdcc_go_out;
wire _guard412 = _guard410 & _guard411;
wire _guard413 = _guard405 | _guard412;
wire _guard414 = fsm0_out == 4'd7;
wire _guard415 = wrapper_early_reset_static_par1_done_out;
wire _guard416 = _guard414 & _guard415;
wire _guard417 = tdcc_go_out;
wire _guard418 = _guard416 & _guard417;
wire _guard419 = fsm0_out == 4'd5;
wire _guard420 = wrapper_early_reset_cond20_done_out;
wire _guard421 = _guard419 & _guard420;
wire _guard422 = tdcc_go_out;
wire _guard423 = _guard421 & _guard422;
wire _guard424 = fsm0_out == 4'd0;
wire _guard425 = invoke0_done_out;
wire _guard426 = _guard424 & _guard425;
wire _guard427 = tdcc_go_out;
wire _guard428 = _guard426 & _guard427;
wire _guard429 = fsm0_out == 4'd1;
wire _guard430 = wrapper_early_reset_cond00_done_out;
wire _guard431 = comb_reg_out;
wire _guard432 = ~_guard431;
wire _guard433 = _guard430 & _guard432;
wire _guard434 = _guard429 & _guard433;
wire _guard435 = tdcc_go_out;
wire _guard436 = _guard434 & _guard435;
wire _guard437 = fsm0_out == 4'd10;
wire _guard438 = wrapper_early_reset_cond00_done_out;
wire _guard439 = comb_reg_out;
wire _guard440 = ~_guard439;
wire _guard441 = _guard438 & _guard440;
wire _guard442 = _guard437 & _guard441;
wire _guard443 = tdcc_go_out;
wire _guard444 = _guard442 & _guard443;
wire _guard445 = _guard436 | _guard444;
wire _guard446 = fsm_out == 4'd3;
wire _guard447 = early_reset_static_seq_go_out;
wire _guard448 = _guard446 & _guard447;
wire _guard449 = fsm_out == 4'd3;
wire _guard450 = early_reset_static_seq_go_out;
wire _guard451 = _guard449 & _guard450;
wire _guard452 = early_reset_static_par1_go_out;
wire _guard453 = early_reset_static_par1_go_out;
wire _guard454 = fsm_out >= 4'd4;
wire _guard455 = fsm_out < 4'd7;
wire _guard456 = _guard454 & _guard455;
wire _guard457 = early_reset_static_seq_go_out;
wire _guard458 = _guard456 & _guard457;
wire _guard459 = fsm_out >= 4'd2;
wire _guard460 = fsm_out < 4'd5;
wire _guard461 = _guard459 & _guard460;
wire _guard462 = early_reset_static_par1_go_out;
wire _guard463 = _guard461 & _guard462;
wire _guard464 = fsm_out >= 4'd4;
wire _guard465 = fsm_out < 4'd7;
wire _guard466 = _guard464 & _guard465;
wire _guard467 = early_reset_static_seq_go_out;
wire _guard468 = _guard466 & _guard467;
wire _guard469 = fsm_out >= 4'd2;
wire _guard470 = fsm_out < 4'd5;
wire _guard471 = _guard469 & _guard470;
wire _guard472 = early_reset_static_par1_go_out;
wire _guard473 = _guard471 & _guard472;
wire _guard474 = _guard468 | _guard473;
wire _guard475 = fsm_out >= 4'd2;
wire _guard476 = fsm_out < 4'd5;
wire _guard477 = _guard475 & _guard476;
wire _guard478 = early_reset_static_par1_go_out;
wire _guard479 = _guard477 & _guard478;
wire _guard480 = fsm_out >= 4'd4;
wire _guard481 = fsm_out < 4'd7;
wire _guard482 = _guard480 & _guard481;
wire _guard483 = early_reset_static_seq_go_out;
wire _guard484 = _guard482 & _guard483;
wire _guard485 = early_reset_cond10_go_out;
wire _guard486 = early_reset_cond10_go_out;
wire _guard487 = invoke1_done_out;
wire _guard488 = ~_guard487;
wire _guard489 = fsm0_out == 4'd2;
wire _guard490 = _guard488 & _guard489;
wire _guard491 = tdcc_go_out;
wire _guard492 = _guard490 & _guard491;
wire _guard493 = while_wrapper_early_reset_static_seq_go_out;
wire _guard494 = fsm_out == 4'd0;
wire _guard495 = signal_reg_out;
wire _guard496 = _guard494 & _guard495;
wire _guard497 = early_reset_cond00_go_out;
wire _guard498 = early_reset_cond10_go_out;
wire _guard499 = early_reset_cond00_go_out;
wire _guard500 = early_reset_cond10_go_out;
wire _guard501 = fsm_out == 4'd0;
wire _guard502 = signal_reg_out;
wire _guard503 = _guard501 & _guard502;
wire _guard504 = fsm_out == 4'd0;
wire _guard505 = signal_reg_out;
wire _guard506 = ~_guard505;
wire _guard507 = _guard504 & _guard506;
wire _guard508 = wrapper_early_reset_cond00_go_out;
wire _guard509 = _guard507 & _guard508;
wire _guard510 = _guard503 | _guard509;
wire _guard511 = fsm_out == 4'd0;
wire _guard512 = signal_reg_out;
wire _guard513 = ~_guard512;
wire _guard514 = _guard511 & _guard513;
wire _guard515 = wrapper_early_reset_cond10_go_out;
wire _guard516 = _guard514 & _guard515;
wire _guard517 = _guard510 | _guard516;
wire _guard518 = fsm_out == 4'd0;
wire _guard519 = signal_reg_out;
wire _guard520 = ~_guard519;
wire _guard521 = _guard518 & _guard520;
wire _guard522 = wrapper_early_reset_cond20_go_out;
wire _guard523 = _guard521 & _guard522;
wire _guard524 = _guard517 | _guard523;
wire _guard525 = fsm_out == 4'd0;
wire _guard526 = signal_reg_out;
wire _guard527 = ~_guard526;
wire _guard528 = _guard525 & _guard527;
wire _guard529 = wrapper_early_reset_static_par1_go_out;
wire _guard530 = _guard528 & _guard529;
wire _guard531 = _guard524 | _guard530;
wire _guard532 = fsm_out == 4'd0;
wire _guard533 = signal_reg_out;
wire _guard534 = ~_guard533;
wire _guard535 = _guard532 & _guard534;
wire _guard536 = wrapper_early_reset_cond00_go_out;
wire _guard537 = _guard535 & _guard536;
wire _guard538 = fsm_out == 4'd0;
wire _guard539 = signal_reg_out;
wire _guard540 = ~_guard539;
wire _guard541 = _guard538 & _guard540;
wire _guard542 = wrapper_early_reset_cond10_go_out;
wire _guard543 = _guard541 & _guard542;
wire _guard544 = _guard537 | _guard543;
wire _guard545 = fsm_out == 4'd0;
wire _guard546 = signal_reg_out;
wire _guard547 = ~_guard546;
wire _guard548 = _guard545 & _guard547;
wire _guard549 = wrapper_early_reset_cond20_go_out;
wire _guard550 = _guard548 & _guard549;
wire _guard551 = _guard544 | _guard550;
wire _guard552 = fsm_out == 4'd0;
wire _guard553 = signal_reg_out;
wire _guard554 = ~_guard553;
wire _guard555 = _guard552 & _guard554;
wire _guard556 = wrapper_early_reset_static_par1_go_out;
wire _guard557 = _guard555 & _guard556;
wire _guard558 = _guard551 | _guard557;
wire _guard559 = fsm_out == 4'd0;
wire _guard560 = signal_reg_out;
wire _guard561 = _guard559 & _guard560;
wire _guard562 = fsm_out == 4'd1;
wire _guard563 = early_reset_static_seq_go_out;
wire _guard564 = _guard562 & _guard563;
wire _guard565 = fsm_out == 4'd1;
wire _guard566 = early_reset_static_par1_go_out;
wire _guard567 = _guard565 & _guard566;
wire _guard568 = _guard564 | _guard567;
wire _guard569 = fsm_out == 4'd1;
wire _guard570 = early_reset_static_seq_go_out;
wire _guard571 = _guard569 & _guard570;
wire _guard572 = fsm_out == 4'd1;
wire _guard573 = early_reset_static_par1_go_out;
wire _guard574 = _guard572 & _guard573;
wire _guard575 = wrapper_early_reset_cond00_done_out;
wire _guard576 = ~_guard575;
wire _guard577 = fsm0_out == 4'd1;
wire _guard578 = _guard576 & _guard577;
wire _guard579 = tdcc_go_out;
wire _guard580 = _guard578 & _guard579;
wire _guard581 = wrapper_early_reset_cond00_done_out;
wire _guard582 = ~_guard581;
wire _guard583 = fsm0_out == 4'd10;
wire _guard584 = _guard582 & _guard583;
wire _guard585 = tdcc_go_out;
wire _guard586 = _guard584 & _guard585;
wire _guard587 = _guard580 | _guard586;
wire _guard588 = fsm_out == 4'd0;
wire _guard589 = signal_reg_out;
wire _guard590 = _guard588 & _guard589;
wire _guard591 = wrapper_early_reset_cond20_done_out;
wire _guard592 = ~_guard591;
wire _guard593 = fsm0_out == 4'd5;
wire _guard594 = _guard592 & _guard593;
wire _guard595 = tdcc_go_out;
wire _guard596 = _guard594 & _guard595;
wire _guard597 = invoke1_go_out;
wire _guard598 = fsm_out == 4'd7;
wire _guard599 = early_reset_static_par1_go_out;
wire _guard600 = _guard598 & _guard599;
wire _guard601 = _guard597 | _guard600;
wire _guard602 = fsm_out == 4'd7;
wire _guard603 = early_reset_static_par1_go_out;
wire _guard604 = _guard602 & _guard603;
wire _guard605 = invoke1_go_out;
wire _guard606 = wrapper_early_reset_static_par1_done_out;
wire _guard607 = ~_guard606;
wire _guard608 = fsm0_out == 4'd7;
wire _guard609 = _guard607 & _guard608;
wire _guard610 = tdcc_go_out;
wire _guard611 = _guard609 & _guard610;
wire _guard612 = fsm0_out == 4'd11;
wire _guard613 = comb_reg1_out;
wire _guard614 = ~_guard613;
wire _guard615 = fsm_out == 4'd0;
wire _guard616 = _guard614 & _guard615;
wire _guard617 = early_reset_cond20_go_out;
wire _guard618 = fsm_out == 4'd9;
wire _guard619 = early_reset_static_seq_go_out;
wire _guard620 = _guard618 & _guard619;
wire _guard621 = _guard617 | _guard620;
wire _guard622 = early_reset_cond20_go_out;
wire _guard623 = fsm_out == 4'd9;
wire _guard624 = early_reset_static_seq_go_out;
wire _guard625 = _guard623 & _guard624;
wire _guard626 = _guard622 | _guard625;
wire _guard627 = invoke14_done_out;
wire _guard628 = ~_guard627;
wire _guard629 = fsm0_out == 4'd9;
wire _guard630 = _guard628 & _guard629;
wire _guard631 = tdcc_go_out;
wire _guard632 = _guard630 & _guard631;
assign i0_write_en = _guard3;
assign i0_clk = clk;
assign i0_reset = reset;
assign i0_in =
  _guard4 ? add0_out :
  _guard5 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard5, _guard4})) begin
    $fatal(2, "Multiple assignment to port `i0.in'.");
end
end
assign adder1_left =
  _guard6 ? fsm_out :
  4'd0;
assign adder1_right =
  _guard7 ? 4'd1 :
  4'd0;
assign early_reset_cond00_go_in = _guard8;
assign early_reset_cond10_go_in = _guard9;
assign A_int_read_en = _guard12;
assign A_int_clk = clk;
assign A_int_addr0 = k_0_out;
assign A_int_reset = reset;
assign A_int_addr1 = i0_out;
assign add1_left = A_int_read0_0_out;
assign add1_right = B_i_j_0_out;
assign done = _guard25;
assign fsm_write_en = _guard34;
assign fsm_clk = clk;
assign fsm_reset = reset;
assign fsm_in =
  _guard37 ? adder1_out :
  _guard40 ? adder_out :
  _guard59 ? 4'd0 :
  _guard62 ? adder2_out :
  _guard65 ? adder3_out :
  _guard68 ? adder0_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard68, _guard65, _guard62, _guard59, _guard40, _guard37})) begin
    $fatal(2, "Multiple assignment to port `fsm.in'.");
end
end
assign adder_left =
  _guard69 ? fsm_out :
  4'd0;
assign adder_right =
  _guard70 ? 4'd1 :
  4'd0;
assign invoke14_done_in = i0_done;
assign wrapper_early_reset_static_par1_done_in = _guard73;
assign add0_left =
  _guard76 ? i0_out :
  _guard79 ? k_0_out :
  _guard82 ? j0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard82, _guard79, _guard76})) begin
    $fatal(2, "Multiple assignment to port `add0.left'.");
end
end
assign add0_right = const4_out;
assign invoke2_go_in = _guard99;
assign A_int_read0_0_write_en = _guard110;
assign A_int_read0_0_clk = clk;
assign A_int_read0_0_reset = reset;
assign A_int_read0_0_in =
  _guard113 ? A_int_read_data :
  _guard116 ? B_int_read_data :
  _guard123 ? mult_pipe0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard123, _guard116, _guard113})) begin
    $fatal(2, "Multiple assignment to port `A_int_read0_0.in'.");
end
end
assign comb_reg_write_en = _guard124;
assign comb_reg_clk = clk;
assign comb_reg_reset = reset;
assign comb_reg_in =
  _guard125 ? le0_out :
  1'd0;
assign early_reset_cond00_done_in = ud_out;
assign early_reset_cond10_done_in = ud0_out;
assign comb_reg1_write_en = _guard130;
assign comb_reg1_clk = clk;
assign comb_reg1_reset = reset;
assign comb_reg1_in =
  _guard135 ? lt0_out :
  1'd0;
assign early_reset_cond20_go_in = _guard136;
assign early_reset_static_par1_go_in = _guard137;
assign wrapper_early_reset_cond10_go_in = _guard150;
assign while_wrapper_early_reset_static_seq_go_in = _guard156;
assign B_int_write_en = _guard163;
assign B_int_read_en = _guard172;
assign B_int_clk = clk;
assign B_int_addr0 =
  _guard183 ? i0_out :
  _guard186 ? k_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard186, _guard183})) begin
    $fatal(2, "Multiple assignment to port `B_int.addr0'.");
end
end
assign B_int_reset = reset;
assign B_int_write_data =
  _guard189 ? add1_out :
  _guard192 ? A_int_read0_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard192, _guard189})) begin
    $fatal(2, "Multiple assignment to port `B_int.write_data'.");
end
end
assign B_int_addr1 = j0_out;
assign k_0_write_en = _guard210;
assign k_0_clk = clk;
assign k_0_reset = reset;
assign k_0_in = add0_out;
assign comb_reg0_write_en = _guard216;
assign comb_reg0_clk = clk;
assign comb_reg0_reset = reset;
assign comb_reg0_in =
  _guard217 ? le0_out :
  1'd0;
assign invoke0_go_in = _guard223;
assign wrapper_early_reset_cond20_done_in = _guard226;
assign tdcc_go_in = go;
assign alpha_int_read_en = _guard229;
assign alpha_int_clk = clk;
assign alpha_int_addr0 = const7_out;
assign alpha_int_reset = reset;
assign adder2_left =
  _guard233 ? fsm_out :
  4'd0;
assign adder2_right =
  _guard234 ? 4'd1 :
  4'd0;
assign fsm0_write_en = _guard345;
assign fsm0_clk = clk;
assign fsm0_reset = reset;
assign fsm0_in =
  _guard350 ? 4'd3 :
  _guard355 ? 4'd5 :
  _guard372 ? 4'd9 :
  _guard387 ? 4'd4 :
  _guard392 ? 4'd10 :
  _guard393 ? 4'd0 :
  _guard398 ? 4'd7 :
  _guard413 ? 4'd2 :
  _guard418 ? 4'd8 :
  _guard423 ? 4'd6 :
  _guard428 ? 4'd1 :
  _guard445 ? 4'd11 :
  4'd0;
always_comb begin
  if(~$onehot0({_guard445, _guard428, _guard423, _guard418, _guard413, _guard398, _guard393, _guard392, _guard387, _guard372, _guard355, _guard350})) begin
    $fatal(2, "Multiple assignment to port `fsm0.in'.");
end
end
assign B_k_j_0_write_en = _guard448;
assign B_k_j_0_clk = clk;
assign B_k_j_0_reset = reset;
assign B_k_j_0_in = B_int_read_data;
assign adder3_left =
  _guard452 ? fsm_out :
  4'd0;
assign adder3_right =
  _guard453 ? 4'd1 :
  4'd0;
assign mult_pipe0_clk = clk;
assign mult_pipe0_left =
  _guard458 ? A_int_read0_0_out :
  _guard463 ? B_i_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard463, _guard458})) begin
    $fatal(2, "Multiple assignment to port `mult_pipe0.left'.");
end
end
assign mult_pipe0_go = _guard474;
assign mult_pipe0_reset = reset;
assign mult_pipe0_right =
  _guard479 ? A_int_read0_0_out :
  _guard484 ? B_k_j_0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard484, _guard479})) begin
    $fatal(2, "Multiple assignment to port `mult_pipe0.right'.");
end
end
assign adder0_left =
  _guard485 ? fsm_out :
  4'd0;
assign adder0_right =
  _guard486 ? 4'd1 :
  4'd0;
assign invoke0_done_in = i0_done;
assign invoke1_go_in = _guard492;
assign early_reset_static_seq_go_in = _guard493;
assign wrapper_early_reset_cond10_done_in = _guard496;
assign le0_left =
  _guard497 ? i0_out :
  _guard498 ? j0_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard498, _guard497})) begin
    $fatal(2, "Multiple assignment to port `le0.left'.");
end
end
assign le0_right =
  _guard499 ? const1_out :
  _guard500 ? const3_out :
  4'd0;
always_comb begin
  if(~$onehot0({_guard500, _guard499})) begin
    $fatal(2, "Multiple assignment to port `le0.right'.");
end
end
assign signal_reg_write_en = _guard531;
assign signal_reg_clk = clk;
assign signal_reg_reset = reset;
assign signal_reg_in =
  _guard558 ? 1'd1 :
  _guard561 ? 1'd0 :
  1'd0;
always_comb begin
  if(~$onehot0({_guard561, _guard558})) begin
    $fatal(2, "Multiple assignment to port `signal_reg.in'.");
end
end
assign invoke2_done_in = k_0_done;
assign B_i_j_0_write_en = _guard568;
assign B_i_j_0_clk = clk;
assign B_i_j_0_reset = reset;
assign B_i_j_0_in =
  _guard571 ? B_int_read_data :
  _guard574 ? alpha_int_read_data :
  'x;
always_comb begin
  if(~$onehot0({_guard574, _guard571})) begin
    $fatal(2, "Multiple assignment to port `B_i_j_0.in'.");
end
end
assign wrapper_early_reset_cond00_go_in = _guard587;
assign wrapper_early_reset_cond00_done_in = _guard590;
assign wrapper_early_reset_cond20_go_in = _guard596;
assign j0_write_en = _guard601;
assign j0_clk = clk;
assign j0_reset = reset;
assign j0_in =
  _guard604 ? add0_out :
  _guard605 ? const0_out :
  'x;
always_comb begin
  if(~$onehot0({_guard605, _guard604})) begin
    $fatal(2, "Multiple assignment to port `j0.in'.");
end
end
assign early_reset_cond20_done_in = ud1_out;
assign early_reset_static_seq_done_in = ud2_out;
assign wrapper_early_reset_static_par1_go_in = _guard611;
assign tdcc_done_in = _guard612;
assign while_wrapper_early_reset_static_seq_done_in = _guard616;
assign invoke1_done_in = j0_done;
assign lt0_left =
  _guard621 ? k_0_out :
  4'd0;
assign lt0_right =
  _guard626 ? const5_out :
  4'd0;
assign invoke14_go_in = _guard632;
assign early_reset_static_par1_done_in = ud3_out;
// COMPONENT END: main
endmodule

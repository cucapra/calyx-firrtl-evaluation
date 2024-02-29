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

module main(
  input         go,
  input         clk,
  input         reset,
  output        done,
  output [3:0]  A_int_addr0,
  output [3:0]  A_int_addr1,
  output        A_int_write_en,
  output [31:0] A_int_write_data,
  output        A_int_read_en,
  input  [31:0] A_int_read_data,
  input         A_int_write_done,
  input         A_int_read_done,
  output [3:0]  p_int_addr0,
  output        p_int_write_en,
  output [31:0] p_int_write_data,
  output        p_int_read_en,
  input  [31:0] p_int_read_data,
  input         p_int_write_done,
  input         p_int_read_done,
  output [3:0]  q_int_addr0,
  output        q_int_write_en,
  output [31:0] q_int_write_data,
  output        q_int_read_en,
  input  [31:0] q_int_read_data,
  input         q_int_write_done,
  input         q_int_read_done,
  output [3:0]  r_int_addr0,
  output        r_int_write_en,
  output [31:0] r_int_write_data,
  output        r_int_read_en,
  input  [31:0] r_int_read_data,
  input         r_int_write_done,
  input         r_int_read_done,
  output [3:0]  s_int_addr0,
  output        s_int_write_en,
  output [31:0] s_int_write_data,
  output        s_int_read_en,
  input  [31:0] s_int_read_data,
  input         s_int_write_done,
  input         s_int_read_done
);
  wire [31:0] A_i_j_0_in;
  wire  A_i_j_0_write_en;
  wire  A_i_j_0_clk;
  wire  A_i_j_0_reset;
  wire [31:0] A_i_j_0_out;
  wire  A_i_j_0_done;
  wire [3:0] add0_left;
  wire [3:0] add0_right;
  wire [3:0] add0_out;
  wire [31:0] add1_left;
  wire [31:0] add1_right;
  wire [31:0] add1_out;
  wire [31:0] bin_read0_0_in;
  wire  bin_read0_0_write_en;
  wire  bin_read0_0_clk;
  wire  bin_read0_0_reset;
  wire [31:0] bin_read0_0_out;
  wire  bin_read0_0_done;
  wire [3:0] const0_out;
  wire [3:0] const1_out;
  wire [3:0] const10_out;
  wire [31:0] const2_out;
  wire [3:0] i1_in;
  wire  i1_write_en;
  wire  i1_clk;
  wire  i1_reset;
  wire [3:0] i1_out;
  wire  i1_done;
  wire [3:0] j0_in;
  wire  j0_write_en;
  wire  j0_clk;
  wire  j0_reset;
  wire [3:0] j0_out;
  wire  j0_done;
  wire [3:0] le0_left;
  wire [3:0] le0_right;
  wire  le0_out;
  wire  mult_pipe0_clk;
  wire  mult_pipe0_reset;
  wire  mult_pipe0_go;
  wire [31:0] mult_pipe0_left;
  wire [31:0] mult_pipe0_right;
  wire [31:0] mult_pipe0_out;
  wire  mult_pipe0_done;
  wire [31:0] p_int_read0_0_in;
  wire  p_int_read0_0_write_en;
  wire  p_int_read0_0_clk;
  wire  p_int_read0_0_reset;
  wire [31:0] p_int_read0_0_out;
  wire  p_int_read0_0_done;
  wire [31:0] q0_0_in;
  wire  q0_0_write_en;
  wire  q0_0_clk;
  wire  q0_0_reset;
  wire [31:0] q0_0_out;
  wire  q0_0_done;
  wire [31:0] s0_0_in;
  wire  s0_0_write_en;
  wire  s0_0_clk;
  wire  s0_0_reset;
  wire [31:0] s0_0_out;
  wire  s0_0_done;
  wire  comb_reg0_in;
  wire  comb_reg0_write_en;
  wire  comb_reg0_clk;
  wire  comb_reg0_reset;
  wire  comb_reg0_out;
  wire  comb_reg0_done;
  wire  comb_reg1_in;
  wire  comb_reg1_write_en;
  wire  comb_reg1_clk;
  wire  comb_reg1_reset;
  wire  comb_reg1_out;
  wire  comb_reg1_done;
  wire [4:0] fsm_in;
  wire  fsm_write_en;
  wire  fsm_clk;
  wire  fsm_reset;
  wire [4:0] fsm_out;
  wire  fsm_done;
  wire [1:0] fsm0_in;
  wire  fsm0_write_en;
  wire  fsm0_clk;
  wire  fsm0_reset;
  wire [1:0] fsm0_out;
  wire  fsm0_done;
  wire  ud_out;
  wire [4:0] adder_left;
  wire [4:0] adder_right;
  wire [4:0] adder_out;
  wire  ud0_out;
  wire [4:0] adder0_left;
  wire [4:0] adder0_right;
  wire [4:0] adder0_out;
  wire  ud1_out;
  wire [4:0] adder1_left;
  wire [4:0] adder1_right;
  wire [4:0] adder1_out;
  wire  ud2_out;
  wire [1:0] adder2_left;
  wire [1:0] adder2_right;
  wire [1:0] adder2_out;
  wire  ud3_out;
  wire [4:0] adder3_left;
  wire [4:0] adder3_right;
  wire [4:0] adder3_out;
  wire  ud4_out;
  wire [4:0] adder4_left;
  wire [4:0] adder4_right;
  wire [4:0] adder4_out;
  wire  ud5_out;
  wire [4:0] adder5_left;
  wire [4:0] adder5_right;
  wire [4:0] adder5_out;
  wire  signal_reg_in;
  wire  signal_reg_write_en;
  wire  signal_reg_clk;
  wire  signal_reg_reset;
  wire  signal_reg_out;
  wire  signal_reg_done;
  wire [1:0] fsm1_in;
  wire  fsm1_write_en;
  wire  fsm1_clk;
  wire  fsm1_reset;
  wire [1:0] fsm1_out;
  wire  fsm1_done;
  wire  pd_in;
  wire  pd_write_en;
  wire  pd_clk;
  wire  pd_reset;
  wire  pd_out;
  wire  pd_done;
  wire [1:0] fsm2_in;
  wire  fsm2_write_en;
  wire  fsm2_clk;
  wire  fsm2_reset;
  wire [1:0] fsm2_out;
  wire  fsm2_done;
  wire  pd0_in;
  wire  pd0_write_en;
  wire  pd0_clk;
  wire  pd0_reset;
  wire  pd0_out;
  wire  pd0_done;
  wire [1:0] fsm3_in;
  wire  fsm3_write_en;
  wire  fsm3_clk;
  wire  fsm3_reset;
  wire [1:0] fsm3_out;
  wire  fsm3_done;
  wire  pd1_in;
  wire  pd1_write_en;
  wire  pd1_clk;
  wire  pd1_reset;
  wire  pd1_out;
  wire  pd1_done;
  wire  pd2_in;
  wire  pd2_write_en;
  wire  pd2_clk;
  wire  pd2_reset;
  wire  pd2_out;
  wire  pd2_done;
  wire [1:0] fsm4_in;
  wire  fsm4_write_en;
  wire  fsm4_clk;
  wire  fsm4_reset;
  wire [1:0] fsm4_out;
  wire  fsm4_done;
  wire  pd3_in;
  wire  pd3_write_en;
  wire  pd3_clk;
  wire  pd3_reset;
  wire  pd3_out;
  wire  pd3_done;
  wire [3:0] fsm5_in;
  wire  fsm5_write_en;
  wire  fsm5_clk;
  wire  fsm5_reset;
  wire [3:0] fsm5_out;
  wire  fsm5_done;
  wire  beg_spl_let3_go_in;
  wire  beg_spl_let3_go_out;
  wire  beg_spl_let3_done_in;
  wire  beg_spl_let3_done_out;
  wire  beg_spl_let4_go_in;
  wire  beg_spl_let4_go_out;
  wire  beg_spl_let4_done_in;
  wire  beg_spl_let4_done_out;
  wire  beg_spl_let5_go_in;
  wire  beg_spl_let5_go_out;
  wire  beg_spl_let5_done_in;
  wire  beg_spl_let5_done_out;
  wire  beg_spl_let6_go_in;
  wire  beg_spl_let6_go_out;
  wire  beg_spl_let6_done_in;
  wire  beg_spl_let6_done_out;
  wire  beg_spl_let8_go_in;
  wire  beg_spl_let8_go_out;
  wire  beg_spl_let8_done_in;
  wire  beg_spl_let8_done_out;
  wire  invoke4_go_in;
  wire  invoke4_go_out;
  wire  invoke4_done_in;
  wire  invoke4_done_out;
  wire  invoke5_go_in;
  wire  invoke5_go_out;
  wire  invoke5_done_in;
  wire  invoke5_done_out;
  wire  invoke6_go_in;
  wire  invoke6_go_out;
  wire  invoke6_done_in;
  wire  invoke6_done_out;
  wire  invoke7_go_in;
  wire  invoke7_go_out;
  wire  invoke7_done_in;
  wire  invoke7_done_out;
  wire  invoke10_go_in;
  wire  invoke10_go_out;
  wire  invoke10_done_in;
  wire  invoke10_done_out;
  wire  invoke14_go_in;
  wire  invoke14_go_out;
  wire  invoke14_done_in;
  wire  invoke14_done_out;
  wire  early_reset_cond10_go_in;
  wire  early_reset_cond10_go_out;
  wire  early_reset_cond10_done_in;
  wire  early_reset_cond10_done_out;
  wire  early_reset_cond20_go_in;
  wire  early_reset_cond20_go_out;
  wire  early_reset_cond20_done_in;
  wire  early_reset_cond20_done_out;
  wire  early_reset_static_seq_go_in;
  wire  early_reset_static_seq_go_out;
  wire  early_reset_static_seq_done_in;
  wire  early_reset_static_seq_done_out;
  wire  early_reset_static_seq0_go_in;
  wire  early_reset_static_seq0_go_out;
  wire  early_reset_static_seq0_done_in;
  wire  early_reset_static_seq0_done_out;
  wire  early_reset_static_par_go_in;
  wire  early_reset_static_par_go_out;
  wire  early_reset_static_par_done_in;
  wire  early_reset_static_par_done_out;
  wire  early_reset_static_seq1_go_in;
  wire  early_reset_static_seq1_go_out;
  wire  early_reset_static_seq1_done_in;
  wire  early_reset_static_seq1_done_out;
  wire  early_reset_static_par0_go_in;
  wire  early_reset_static_par0_go_out;
  wire  early_reset_static_par0_done_in;
  wire  early_reset_static_par0_done_out;
  wire  wrapper_early_reset_static_seq_go_in;
  wire  wrapper_early_reset_static_seq_go_out;
  wire  wrapper_early_reset_static_seq_done_in;
  wire  wrapper_early_reset_static_seq_done_out;
  wire  wrapper_early_reset_cond10_go_in;
  wire  wrapper_early_reset_cond10_go_out;
  wire  wrapper_early_reset_cond10_done_in;
  wire  wrapper_early_reset_cond10_done_out;
  wire  wrapper_early_reset_static_par_go_in;
  wire  wrapper_early_reset_static_par_go_out;
  wire  wrapper_early_reset_static_par_done_in;
  wire  wrapper_early_reset_static_par_done_out;
  wire  wrapper_early_reset_cond20_go_in;
  wire  wrapper_early_reset_cond20_go_out;
  wire  wrapper_early_reset_cond20_done_in;
  wire  wrapper_early_reset_cond20_done_out;
  wire  wrapper_early_reset_static_seq1_go_in;
  wire  wrapper_early_reset_static_seq1_go_out;
  wire  wrapper_early_reset_static_seq1_done_in;
  wire  wrapper_early_reset_static_seq1_done_out;
  wire  wrapper_early_reset_static_par0_go_in;
  wire  wrapper_early_reset_static_par0_go_out;
  wire  wrapper_early_reset_static_par0_done_in;
  wire  wrapper_early_reset_static_par0_done_out;
  wire  par0_go_in;
  wire  par0_go_out;
  wire  par0_done_in;
  wire  par0_done_out;
  wire  tdcc_go_in;
  wire  tdcc_go_out;
  wire  tdcc_done_in;
  wire  tdcc_done_out;
  wire  tdcc0_go_in;
  wire  tdcc0_go_out;
  wire  tdcc0_done_in;
  wire  tdcc0_done_out;
  wire  tdcc1_go_in;
  wire  tdcc1_go_out;
  wire  tdcc1_done_in;
  wire  tdcc1_done_out;
  wire  par1_go_in;
  wire  par1_go_out;
  wire  par1_done_in;
  wire  par1_done_out;
  wire  tdcc2_go_in;
  wire  tdcc2_go_out;
  wire  tdcc2_done_in;
  wire  tdcc2_done_out;
  wire  tdcc3_go_in;
  wire  tdcc3_go_out;
  wire  tdcc3_done_in;
  wire  tdcc3_done_out;
  wire  _GEN_1 = early_reset_static_seq_go_out; // @[]
  wire [31:0] _GEN_4 = fsm_out == 5'h4 & early_reset_static_seq1_go_out ? s0_0_out : 32'h0; // @[]
  wire [31:0] _GEN_6 = fsm_out == 5'h4 & early_reset_static_seq1_go_out ? bin_read0_0_out : 32'h0; // @[]
  wire [3:0] _GEN_14 = fsm0_out == 2'h0 & early_reset_static_seq0_go_out ? i1_out : 4'h0; // @[]
  wire [31:0] _GEN_18 = fsm_out == 5'h4 & early_reset_static_seq1_go_out ? add1_out : 32'h0; // @[]
  wire [31:0] _GEN_24 = fsm_out == 5'h4 & early_reset_static_par0_go_out ? add1_out : 32'h0; // @[]
  wire [4:0] _GEN_28 = fsm_out != 5'h1a & early_reset_static_seq_go_out ? adder1_out : 5'h0; // @[]
  wire [4:0] _GEN_29 = fsm_out != 5'h0 & early_reset_cond10_go_out ? adder_out : _GEN_28; // @[]
  wire [4:0] _GEN_30 = fsm_out != 5'h4 & early_reset_static_seq1_go_out ? adder4_out : _GEN_29; // @[]
  wire [4:0] _GEN_31 = fsm_out == 5'h0 & early_reset_cond10_go_out | fsm_out == 5'h0 & early_reset_cond20_go_out |
    fsm_out == 5'h1a & early_reset_static_seq_go_out | fsm_out == 5'h0 & early_reset_static_par_go_out | fsm_out == 5'h4
     & early_reset_static_seq1_go_out | fsm_out == 5'h4 & early_reset_static_par0_go_out ? 5'h0 : _GEN_30; // @[]
  wire [4:0] _GEN_32 = fsm_out != 5'h0 & early_reset_static_par_go_out ? adder3_out : _GEN_31; // @[]
  wire [4:0] _GEN_33 = fsm_out != 5'h4 & early_reset_static_par0_go_out ? adder5_out : _GEN_32; // @[]
  wire  _GEN_36 = early_reset_cond10_go_out; // @[]
  wire [3:0] _GEN_41 = invoke14_go_out | fsm0_out == 2'h1 & early_reset_static_seq0_go_out ? i1_out : 4'h0; // @[]
  wire  _GEN_45 = early_reset_static_seq1_go_out; // @[]
  wire  _GEN_48 = fsm3_out == 2'h2 ? 1'h0 : fsm3_out == 2'h0 & beg_spl_let5_done_out & tdcc1_go_out; // @[]
  wire  _GEN_268 = fsm5_out == 4'h4 & par0_done_out & tdcc3_go_out; // @[]
  wire  _GEN_271 = fsm5_out == 4'hc | fsm5_out == 4'h0 & wrapper_early_reset_static_seq_done_out & tdcc3_go_out |
    fsm5_out == 4'h1 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc3_go_out | fsm5_out == 4'hb & (
    wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc3_go_out | fsm5_out == 4'h2 &
    wrapper_early_reset_static_par_done_out & tdcc3_go_out | fsm5_out == 4'h3 & (wrapper_early_reset_cond20_done_out &
    comb_reg1_out) & tdcc3_go_out | fsm5_out == 4'h9 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) &
    tdcc3_go_out | _GEN_268; // @[]
  wire  _GEN_300 = fsm5_out == 4'ha & invoke14_done_out & tdcc3_go_out; // @[]
  wire  _GEN_306 = fsm5_out == 4'h1 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc3_go_out; // @[]
  wire  _GEN_311 = _GEN_271 | fsm5_out == 4'h5 & beg_spl_let6_done_out & tdcc3_go_out | fsm5_out == 4'h6 &
    invoke7_done_out & tdcc3_go_out | fsm5_out == 4'h7 & par1_done_out & tdcc3_go_out | fsm5_out == 4'h8 &
    wrapper_early_reset_static_par0_done_out & tdcc3_go_out | fsm5_out == 4'h3 & (wrapper_early_reset_cond20_done_out &
    ~comb_reg1_out) & tdcc3_go_out | fsm5_out == 4'h9 & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) &
    tdcc3_go_out | _GEN_300 | _GEN_306; // @[]
  wire [1:0] _GEN_51 = fsm5_out == 4'h2 & wrapper_early_reset_static_par_done_out & tdcc3_go_out ? 2'h3 : 2'h0; // @[]
  wire [2:0] _GEN_52 = fsm5_out == 4'h4 & par0_done_out & tdcc3_go_out ? 3'h5 : {{1'd0}, _GEN_51}; // @[]
  wire [2:0] _GEN_53 = fsm5_out == 4'h3 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc3_go_out |
    fsm5_out == 4'h9 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc3_go_out ? 3'h4 : _GEN_52; // @[]
  wire [3:0] _GEN_54 = fsm5_out == 4'h8 & wrapper_early_reset_static_par0_done_out & tdcc3_go_out ? 4'h9 : {{1'd0},
    _GEN_53}; // @[]
  wire [3:0] _GEN_55 = fsm5_out == 4'h3 & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc3_go_out |
    fsm5_out == 4'h9 & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc3_go_out ? 4'ha : _GEN_54; // @[]
  wire [3:0] _GEN_56 = fsm5_out == 4'hc ? 4'h0 : _GEN_55; // @[]
  wire [3:0] _GEN_57 = fsm5_out == 4'h6 & invoke7_done_out & tdcc3_go_out ? 4'h7 : _GEN_56; // @[]
  wire [3:0] _GEN_58 = fsm5_out == 4'h1 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc3_go_out |
    fsm5_out == 4'hb & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc3_go_out ? 4'h2 : _GEN_57; // @[]
  wire [3:0] _GEN_59 = fsm5_out == 4'h1 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc3_go_out |
    fsm5_out == 4'hb & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc3_go_out ? 4'hc : _GEN_58; // @[]
  wire [3:0] _GEN_60 = fsm5_out == 4'h5 & beg_spl_let6_done_out & tdcc3_go_out ? 4'h6 : _GEN_59; // @[]
  wire [3:0] _GEN_61 = fsm5_out == 4'h7 & par1_done_out & tdcc3_go_out ? 4'h8 : _GEN_60; // @[]
  wire [3:0] _GEN_62 = fsm5_out == 4'h0 & wrapper_early_reset_static_seq_done_out & tdcc3_go_out ? 4'h1 : _GEN_61; // @[]
  wire  _GEN_67 = early_reset_cond20_go_out; // @[]
  wire  _GEN_71 = fsm1_out == 2'h2 ? 1'h0 : fsm1_out == 2'h0 & beg_spl_let3_done_out & tdcc_go_out; // @[]
  wire  _GEN_75 = fsm4_out == 2'h2 ? 1'h0 : fsm4_out == 2'h0 & beg_spl_let8_done_out & tdcc2_go_out; // @[]
  wire  _GEN_90 = early_reset_static_seq0_go_out; // @[]
  wire  _GEN_96 = fsm2_out == 2'h2 ? 1'h0 : fsm2_out == 2'h0 & beg_spl_let4_done_out & tdcc0_go_out; // @[]
  wire  _GEN_100 = early_reset_static_par_go_out; // @[]
  wire  _GEN_102 = early_reset_static_par0_go_out; // @[]
  wire [31:0] _GEN_105 = fsm_out < 5'h3 & early_reset_static_seq1_go_out ? bin_read0_0_out : 32'h0; // @[]
  wire [31:0] _GEN_108 = fsm_out < 5'h3 & early_reset_static_seq1_go_out ? A_i_j_0_out : 32'h0; // @[]
  wire [3:0] _GEN_118 = invoke14_go_out | fsm0_out == 2'h1 & early_reset_static_seq0_go_out ? add0_out : 4'h0; // @[]
  wire [3:0] _GEN_120 = early_reset_cond10_go_out | fsm_out == 5'h1 & early_reset_static_seq_go_out | fsm0_out == 2'h2
     & early_reset_static_seq0_go_out ? i1_out : 4'h0; // @[]
  wire  _GEN_501 = fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_static_par0_go_out; // @[]
  wire  _GEN_124 = fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_static_seq_go_out | fsm_out == 5'h0 & ~
    signal_reg_out & wrapper_early_reset_cond10_go_out | fsm_out == 5'h0 & ~signal_reg_out &
    wrapper_early_reset_static_par_go_out | fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_cond20_go_out |
    fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_static_seq1_go_out | fsm_out == 5'h0 & ~signal_reg_out &
    wrapper_early_reset_static_par0_go_out; // @[]
  wire [31:0] _GEN_138 = invoke7_go_out ? r_int_read_data : 32'h0; // @[]
  wire [3:0] _GEN_141 = fsm_out == 5'h0 & early_reset_static_par0_go_out ? add0_out : 4'h0; // @[]
  wire [31:0] _GEN_147 = invoke6_go_out ? A_int_read_data : 32'h0; // @[]
  std_reg #(.WIDTH(32)) A_i_j_0 (
    .in(A_i_j_0_in),
    .write_en(A_i_j_0_write_en),
    .clk(A_i_j_0_clk),
    .reset(A_i_j_0_reset),
    .out(A_i_j_0_out),
    .done(A_i_j_0_done)
  );
  std_add #(.WIDTH(4)) add0 (
    .left(add0_left),
    .right(add0_right),
    .out(add0_out)
  );
  std_add #(.WIDTH(32)) add1 (
    .left(add1_left),
    .right(add1_right),
    .out(add1_out)
  );
  std_reg #(.WIDTH(32)) bin_read0_0 (
    .in(bin_read0_0_in),
    .write_en(bin_read0_0_write_en),
    .clk(bin_read0_0_clk),
    .reset(bin_read0_0_reset),
    .out(bin_read0_0_out),
    .done(bin_read0_0_done)
  );
  std_const #(.WIDTH(4), .VALUE(0)) const0 (
    .out(const0_out)
  );
  std_const #(.WIDTH(4), .VALUE(7)) const1 (
    .out(const1_out)
  );
  std_const #(.WIDTH(4), .VALUE(1)) const10 (
    .out(const10_out)
  );
  std_const #(.WIDTH(32), .VALUE(0)) const2 (
    .out(const2_out)
  );
  std_reg #(.WIDTH(4)) i1 (
    .in(i1_in),
    .write_en(i1_write_en),
    .clk(i1_clk),
    .reset(i1_reset),
    .out(i1_out),
    .done(i1_done)
  );
  std_reg #(.WIDTH(4)) j0 (
    .in(j0_in),
    .write_en(j0_write_en),
    .clk(j0_clk),
    .reset(j0_reset),
    .out(j0_out),
    .done(j0_done)
  );
  std_le #(.WIDTH(4)) le0 (
    .left(le0_left),
    .right(le0_right),
    .out(le0_out)
  );
  std_mult_pipe #(.WIDTH(32)) mult_pipe0 (
    .clk(mult_pipe0_clk),
    .reset(mult_pipe0_reset),
    .go(mult_pipe0_go),
    .left(mult_pipe0_left),
    .right(mult_pipe0_right),
    .out(mult_pipe0_out),
    .done(mult_pipe0_done)
  );
  std_reg #(.WIDTH(32)) p_int_read0_0 (
    .in(p_int_read0_0_in),
    .write_en(p_int_read0_0_write_en),
    .clk(p_int_read0_0_clk),
    .reset(p_int_read0_0_reset),
    .out(p_int_read0_0_out),
    .done(p_int_read0_0_done)
  );
  std_reg #(.WIDTH(32)) q0_0 (
    .in(q0_0_in),
    .write_en(q0_0_write_en),
    .clk(q0_0_clk),
    .reset(q0_0_reset),
    .out(q0_0_out),
    .done(q0_0_done)
  );
  std_reg #(.WIDTH(32)) s0_0 (
    .in(s0_0_in),
    .write_en(s0_0_write_en),
    .clk(s0_0_clk),
    .reset(s0_0_reset),
    .out(s0_0_out),
    .done(s0_0_done)
  );
  std_reg #(.WIDTH(1)) comb_reg0 (
    .in(comb_reg0_in),
    .write_en(comb_reg0_write_en),
    .clk(comb_reg0_clk),
    .reset(comb_reg0_reset),
    .out(comb_reg0_out),
    .done(comb_reg0_done)
  );
  std_reg #(.WIDTH(1)) comb_reg1 (
    .in(comb_reg1_in),
    .write_en(comb_reg1_write_en),
    .clk(comb_reg1_clk),
    .reset(comb_reg1_reset),
    .out(comb_reg1_out),
    .done(comb_reg1_done)
  );
  std_reg #(.WIDTH(5)) fsm (
    .in(fsm_in),
    .write_en(fsm_write_en),
    .clk(fsm_clk),
    .reset(fsm_reset),
    .out(fsm_out),
    .done(fsm_done)
  );
  std_reg #(.WIDTH(2)) fsm0 (
    .in(fsm0_in),
    .write_en(fsm0_write_en),
    .clk(fsm0_clk),
    .reset(fsm0_reset),
    .out(fsm0_out),
    .done(fsm0_done)
  );
  undef #(.WIDTH(1)) ud (
    .out(ud_out)
  );
  std_add #(.WIDTH(5)) adder (
    .left(adder_left),
    .right(adder_right),
    .out(adder_out)
  );
  undef #(.WIDTH(1)) ud0 (
    .out(ud0_out)
  );
  std_add #(.WIDTH(5)) adder0 (
    .left(adder0_left),
    .right(adder0_right),
    .out(adder0_out)
  );
  undef #(.WIDTH(1)) ud1 (
    .out(ud1_out)
  );
  std_add #(.WIDTH(5)) adder1 (
    .left(adder1_left),
    .right(adder1_right),
    .out(adder1_out)
  );
  undef #(.WIDTH(1)) ud2 (
    .out(ud2_out)
  );
  std_add #(.WIDTH(2)) adder2 (
    .left(adder2_left),
    .right(adder2_right),
    .out(adder2_out)
  );
  undef #(.WIDTH(1)) ud3 (
    .out(ud3_out)
  );
  std_add #(.WIDTH(5)) adder3 (
    .left(adder3_left),
    .right(adder3_right),
    .out(adder3_out)
  );
  undef #(.WIDTH(1)) ud4 (
    .out(ud4_out)
  );
  std_add #(.WIDTH(5)) adder4 (
    .left(adder4_left),
    .right(adder4_right),
    .out(adder4_out)
  );
  undef #(.WIDTH(1)) ud5 (
    .out(ud5_out)
  );
  std_add #(.WIDTH(5)) adder5 (
    .left(adder5_left),
    .right(adder5_right),
    .out(adder5_out)
  );
  std_reg #(.WIDTH(1)) signal_reg (
    .in(signal_reg_in),
    .write_en(signal_reg_write_en),
    .clk(signal_reg_clk),
    .reset(signal_reg_reset),
    .out(signal_reg_out),
    .done(signal_reg_done)
  );
  std_reg #(.WIDTH(2)) fsm1 (
    .in(fsm1_in),
    .write_en(fsm1_write_en),
    .clk(fsm1_clk),
    .reset(fsm1_reset),
    .out(fsm1_out),
    .done(fsm1_done)
  );
  std_reg #(.WIDTH(1)) pd (
    .in(pd_in),
    .write_en(pd_write_en),
    .clk(pd_clk),
    .reset(pd_reset),
    .out(pd_out),
    .done(pd_done)
  );
  std_reg #(.WIDTH(2)) fsm2 (
    .in(fsm2_in),
    .write_en(fsm2_write_en),
    .clk(fsm2_clk),
    .reset(fsm2_reset),
    .out(fsm2_out),
    .done(fsm2_done)
  );
  std_reg #(.WIDTH(1)) pd0 (
    .in(pd0_in),
    .write_en(pd0_write_en),
    .clk(pd0_clk),
    .reset(pd0_reset),
    .out(pd0_out),
    .done(pd0_done)
  );
  std_reg #(.WIDTH(2)) fsm3 (
    .in(fsm3_in),
    .write_en(fsm3_write_en),
    .clk(fsm3_clk),
    .reset(fsm3_reset),
    .out(fsm3_out),
    .done(fsm3_done)
  );
  std_reg #(.WIDTH(1)) pd1 (
    .in(pd1_in),
    .write_en(pd1_write_en),
    .clk(pd1_clk),
    .reset(pd1_reset),
    .out(pd1_out),
    .done(pd1_done)
  );
  std_reg #(.WIDTH(1)) pd2 (
    .in(pd2_in),
    .write_en(pd2_write_en),
    .clk(pd2_clk),
    .reset(pd2_reset),
    .out(pd2_out),
    .done(pd2_done)
  );
  std_reg #(.WIDTH(2)) fsm4 (
    .in(fsm4_in),
    .write_en(fsm4_write_en),
    .clk(fsm4_clk),
    .reset(fsm4_reset),
    .out(fsm4_out),
    .done(fsm4_done)
  );
  std_reg #(.WIDTH(1)) pd3 (
    .in(pd3_in),
    .write_en(pd3_write_en),
    .clk(pd3_clk),
    .reset(pd3_reset),
    .out(pd3_out),
    .done(pd3_done)
  );
  std_reg #(.WIDTH(4)) fsm5 (
    .in(fsm5_in),
    .write_en(fsm5_write_en),
    .clk(fsm5_clk),
    .reset(fsm5_reset),
    .out(fsm5_out),
    .done(fsm5_done)
  );
  std_wire #(.WIDTH(1)) beg_spl_let3_go (
    .in(beg_spl_let3_go_in),
    .out(beg_spl_let3_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let3_done (
    .in(beg_spl_let3_done_in),
    .out(beg_spl_let3_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let4_go (
    .in(beg_spl_let4_go_in),
    .out(beg_spl_let4_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let4_done (
    .in(beg_spl_let4_done_in),
    .out(beg_spl_let4_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let5_go (
    .in(beg_spl_let5_go_in),
    .out(beg_spl_let5_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let5_done (
    .in(beg_spl_let5_done_in),
    .out(beg_spl_let5_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let6_go (
    .in(beg_spl_let6_go_in),
    .out(beg_spl_let6_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let6_done (
    .in(beg_spl_let6_done_in),
    .out(beg_spl_let6_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let8_go (
    .in(beg_spl_let8_go_in),
    .out(beg_spl_let8_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let8_done (
    .in(beg_spl_let8_done_in),
    .out(beg_spl_let8_done_out)
  );
  std_wire #(.WIDTH(1)) invoke4_go (
    .in(invoke4_go_in),
    .out(invoke4_go_out)
  );
  std_wire #(.WIDTH(1)) invoke4_done (
    .in(invoke4_done_in),
    .out(invoke4_done_out)
  );
  std_wire #(.WIDTH(1)) invoke5_go (
    .in(invoke5_go_in),
    .out(invoke5_go_out)
  );
  std_wire #(.WIDTH(1)) invoke5_done (
    .in(invoke5_done_in),
    .out(invoke5_done_out)
  );
  std_wire #(.WIDTH(1)) invoke6_go (
    .in(invoke6_go_in),
    .out(invoke6_go_out)
  );
  std_wire #(.WIDTH(1)) invoke6_done (
    .in(invoke6_done_in),
    .out(invoke6_done_out)
  );
  std_wire #(.WIDTH(1)) invoke7_go (
    .in(invoke7_go_in),
    .out(invoke7_go_out)
  );
  std_wire #(.WIDTH(1)) invoke7_done (
    .in(invoke7_done_in),
    .out(invoke7_done_out)
  );
  std_wire #(.WIDTH(1)) invoke10_go (
    .in(invoke10_go_in),
    .out(invoke10_go_out)
  );
  std_wire #(.WIDTH(1)) invoke10_done (
    .in(invoke10_done_in),
    .out(invoke10_done_out)
  );
  std_wire #(.WIDTH(1)) invoke14_go (
    .in(invoke14_go_in),
    .out(invoke14_go_out)
  );
  std_wire #(.WIDTH(1)) invoke14_done (
    .in(invoke14_done_in),
    .out(invoke14_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond10_go (
    .in(early_reset_cond10_go_in),
    .out(early_reset_cond10_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond10_done (
    .in(early_reset_cond10_done_in),
    .out(early_reset_cond10_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond20_go (
    .in(early_reset_cond20_go_in),
    .out(early_reset_cond20_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond20_done (
    .in(early_reset_cond20_done_in),
    .out(early_reset_cond20_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq_go (
    .in(early_reset_static_seq_go_in),
    .out(early_reset_static_seq_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq_done (
    .in(early_reset_static_seq_done_in),
    .out(early_reset_static_seq_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq0_go (
    .in(early_reset_static_seq0_go_in),
    .out(early_reset_static_seq0_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq0_done (
    .in(early_reset_static_seq0_done_in),
    .out(early_reset_static_seq0_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par_go (
    .in(early_reset_static_par_go_in),
    .out(early_reset_static_par_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par_done (
    .in(early_reset_static_par_done_in),
    .out(early_reset_static_par_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq1_go (
    .in(early_reset_static_seq1_go_in),
    .out(early_reset_static_seq1_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq1_done (
    .in(early_reset_static_seq1_done_in),
    .out(early_reset_static_seq1_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par0_go (
    .in(early_reset_static_par0_go_in),
    .out(early_reset_static_par0_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par0_done (
    .in(early_reset_static_par0_done_in),
    .out(early_reset_static_par0_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq_go (
    .in(wrapper_early_reset_static_seq_go_in),
    .out(wrapper_early_reset_static_seq_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq_done (
    .in(wrapper_early_reset_static_seq_done_in),
    .out(wrapper_early_reset_static_seq_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond10_go (
    .in(wrapper_early_reset_cond10_go_in),
    .out(wrapper_early_reset_cond10_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond10_done (
    .in(wrapper_early_reset_cond10_done_in),
    .out(wrapper_early_reset_cond10_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par_go (
    .in(wrapper_early_reset_static_par_go_in),
    .out(wrapper_early_reset_static_par_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par_done (
    .in(wrapper_early_reset_static_par_done_in),
    .out(wrapper_early_reset_static_par_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond20_go (
    .in(wrapper_early_reset_cond20_go_in),
    .out(wrapper_early_reset_cond20_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond20_done (
    .in(wrapper_early_reset_cond20_done_in),
    .out(wrapper_early_reset_cond20_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq1_go (
    .in(wrapper_early_reset_static_seq1_go_in),
    .out(wrapper_early_reset_static_seq1_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq1_done (
    .in(wrapper_early_reset_static_seq1_done_in),
    .out(wrapper_early_reset_static_seq1_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par0_go (
    .in(wrapper_early_reset_static_par0_go_in),
    .out(wrapper_early_reset_static_par0_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par0_done (
    .in(wrapper_early_reset_static_par0_done_in),
    .out(wrapper_early_reset_static_par0_done_out)
  );
  std_wire #(.WIDTH(1)) par0_go (
    .in(par0_go_in),
    .out(par0_go_out)
  );
  std_wire #(.WIDTH(1)) par0_done (
    .in(par0_done_in),
    .out(par0_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc_go (
    .in(tdcc_go_in),
    .out(tdcc_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc_done (
    .in(tdcc_done_in),
    .out(tdcc_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc0_go (
    .in(tdcc0_go_in),
    .out(tdcc0_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc0_done (
    .in(tdcc0_done_in),
    .out(tdcc0_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc1_go (
    .in(tdcc1_go_in),
    .out(tdcc1_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc1_done (
    .in(tdcc1_done_in),
    .out(tdcc1_done_out)
  );
  std_wire #(.WIDTH(1)) par1_go (
    .in(par1_go_in),
    .out(par1_go_out)
  );
  std_wire #(.WIDTH(1)) par1_done (
    .in(par1_done_in),
    .out(par1_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc2_go (
    .in(tdcc2_go_in),
    .out(tdcc2_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc2_done (
    .in(tdcc2_done_in),
    .out(tdcc2_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc3_go (
    .in(tdcc3_go_in),
    .out(tdcc3_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc3_done (
    .in(tdcc3_done_in),
    .out(tdcc3_done_out)
  );
  assign done = tdcc3_done_out; // @[]
  assign A_int_addr0 = beg_spl_let5_go_out ? i1_out : 4'h0; // @[]
  assign A_int_addr1 = beg_spl_let5_go_out ? j0_out : 4'h0; // @[]
  assign A_int_write_en = 1'h0;
  assign A_int_write_data = 32'h0;
  assign A_int_read_en = beg_spl_let5_go_out; // @[]
  assign p_int_addr0 = beg_spl_let8_go_out ? j0_out : 4'h0; // @[]
  assign p_int_write_en = 1'h0;
  assign p_int_write_data = 32'h0;
  assign p_int_read_en = beg_spl_let8_go_out; // @[]
  assign q_int_addr0 = beg_spl_let4_go_out | early_reset_static_par_go_out | fsm_out == 5'h4 &
    early_reset_static_par0_go_out ? i1_out : 4'h0; // @[]
  assign q_int_write_en = early_reset_static_par_go_out | fsm_out == 5'h4 & early_reset_static_par0_go_out; // @[]
  assign q_int_write_data = early_reset_static_par_go_out ? const2_out : _GEN_24; // @[]
  assign q_int_read_en = beg_spl_let4_go_out; // @[]
  assign r_int_addr0 = beg_spl_let6_go_out ? i1_out : 4'h0; // @[]
  assign r_int_write_en = 1'h0;
  assign r_int_write_data = 32'h0;
  assign r_int_read_en = beg_spl_let6_go_out; // @[]
  assign s_int_addr0 = beg_spl_let3_go_out | fsm_out == 5'h4 & early_reset_static_seq1_go_out ? j0_out : _GEN_14; // @[]
  assign s_int_write_en = fsm0_out == 2'h0 & early_reset_static_seq0_go_out | fsm_out == 5'h4 &
    early_reset_static_seq1_go_out; // @[]
  assign s_int_write_data = fsm0_out == 2'h0 & early_reset_static_seq0_go_out ? const2_out : _GEN_18; // @[]
  assign s_int_read_en = beg_spl_let3_go_out; // @[]
  assign A_i_j_0_in = fsm_out == 5'h3 & early_reset_static_par0_go_out ? mult_pipe0_out : _GEN_147; // @[]
  assign A_i_j_0_write_en = invoke6_go_out | fsm_out == 5'h3 & early_reset_static_par0_go_out; // @[]
  assign A_i_j_0_clk = clk;
  assign A_i_j_0_reset = reset;
  assign add0_left = fsm_out == 5'h0 & early_reset_static_par0_go_out ? j0_out : _GEN_41; // @[]
  assign add0_right = invoke14_go_out | fsm0_out == 2'h1 & early_reset_static_seq0_go_out | fsm_out == 5'h0 &
    early_reset_static_par0_go_out ? const10_out : 4'h0; // @[]
  assign add1_left = fsm_out == 5'h4 & early_reset_static_par0_go_out ? q0_0_out : _GEN_4; // @[]
  assign add1_right = fsm_out == 5'h4 & early_reset_static_par0_go_out ? A_i_j_0_out : _GEN_6; // @[]
  assign bin_read0_0_in = fsm_out == 5'h3 & early_reset_static_seq1_go_out ? mult_pipe0_out : _GEN_138; // @[]
  assign bin_read0_0_write_en = invoke7_go_out | fsm_out == 5'h3 & early_reset_static_seq1_go_out; // @[]
  assign bin_read0_0_clk = clk;
  assign bin_read0_0_reset = reset;
  assign i1_in = (fsm_out == 5'h0 | fsm_out == 5'h1a) & early_reset_static_seq_go_out ? const0_out : _GEN_118; // @[]
  assign i1_write_en = invoke14_go_out | (fsm_out == 5'h0 | fsm_out == 5'h1a) & early_reset_static_seq_go_out | fsm0_out
     == 2'h1 & early_reset_static_seq0_go_out; // @[]
  assign i1_clk = clk;
  assign i1_reset = reset;
  assign j0_in = early_reset_static_par_go_out ? const0_out : _GEN_141; // @[]
  assign j0_write_en = early_reset_static_par_go_out | fsm_out == 5'h0 & early_reset_static_par0_go_out; // @[]
  assign j0_clk = clk;
  assign j0_reset = reset;
  assign le0_left = early_reset_cond20_go_out ? j0_out : _GEN_120; // @[]
  assign le0_right = early_reset_cond10_go_out | early_reset_cond20_go_out | fsm_out == 5'h1 &
    early_reset_static_seq_go_out | fsm0_out == 2'h2 & early_reset_static_seq0_go_out ? const1_out : 4'h0; // @[]
  assign mult_pipe0_clk = clk;
  assign mult_pipe0_reset = reset;
  assign mult_pipe0_go = fsm_out < 5'h3 & early_reset_static_seq1_go_out | fsm_out < 5'h3 &
    early_reset_static_par0_go_out; // @[]
  assign mult_pipe0_left = fsm_out < 5'h3 & early_reset_static_par0_go_out ? A_i_j_0_out : _GEN_105; // @[]
  assign mult_pipe0_right = fsm_out < 5'h3 & early_reset_static_par0_go_out ? p_int_read0_0_out : _GEN_108; // @[]
  assign p_int_read0_0_in = invoke10_go_out ? p_int_read_data : 32'h0; // @[]
  assign p_int_read0_0_write_en = invoke10_go_out; // @[]
  assign p_int_read0_0_clk = clk;
  assign p_int_read0_0_reset = reset;
  assign q0_0_in = invoke5_go_out ? q_int_read_data : 32'h0; // @[]
  assign q0_0_write_en = invoke5_go_out; // @[]
  assign q0_0_clk = clk;
  assign q0_0_reset = reset;
  assign s0_0_in = invoke4_go_out ? s_int_read_data : 32'h0; // @[]
  assign s0_0_write_en = invoke4_go_out; // @[]
  assign s0_0_clk = clk;
  assign s0_0_reset = reset;
  assign comb_reg0_in = early_reset_cond10_go_out & le0_out; // @[]
  assign comb_reg0_write_en = early_reset_cond10_go_out; // @[]
  assign comb_reg0_clk = clk;
  assign comb_reg0_reset = reset;
  assign comb_reg1_in = early_reset_cond20_go_out & le0_out; // @[]
  assign comb_reg1_write_en = early_reset_cond20_go_out; // @[]
  assign comb_reg1_clk = clk;
  assign comb_reg1_reset = reset;
  assign fsm_in = fsm_out != 5'h0 & early_reset_cond20_go_out ? adder0_out : _GEN_33; // @[]
  assign fsm_write_en = early_reset_cond10_go_out | early_reset_cond20_go_out | early_reset_static_seq_go_out |
    early_reset_static_par_go_out | early_reset_static_seq1_go_out | early_reset_static_par0_go_out; // @[]
  assign fsm_clk = clk;
  assign fsm_reset = reset;
  assign fsm0_in = fsm0_out != 2'h2 & early_reset_static_seq0_go_out ? adder2_out : 2'h0; // @[]
  assign fsm0_write_en = early_reset_static_seq0_go_out; // @[]
  assign fsm0_clk = clk;
  assign fsm0_reset = reset;
  assign adder_left = early_reset_cond10_go_out ? fsm_out : 5'h0; // @[]
  assign adder_right = {{4'd0}, _GEN_36};
  assign adder0_left = early_reset_cond20_go_out ? fsm_out : 5'h0; // @[]
  assign adder0_right = {{4'd0}, _GEN_67};
  assign adder1_left = early_reset_static_seq_go_out ? fsm_out : 5'h0; // @[]
  assign adder1_right = {{4'd0}, _GEN_1};
  assign adder2_left = early_reset_static_seq0_go_out ? fsm0_out : 2'h0; // @[]
  assign adder2_right = {{1'd0}, _GEN_90};
  assign adder3_left = early_reset_static_par_go_out ? fsm_out : 5'h0; // @[]
  assign adder3_right = {{4'd0}, _GEN_100};
  assign adder4_left = early_reset_static_seq1_go_out ? fsm_out : 5'h0; // @[]
  assign adder4_right = {{4'd0}, _GEN_45};
  assign adder5_left = early_reset_static_par0_go_out ? fsm_out : 5'h0; // @[]
  assign adder5_right = {{4'd0}, _GEN_102};
  assign signal_reg_in = fsm_out == 5'h0 & signal_reg_out ? 1'h0 : _GEN_124; // @[]
  assign signal_reg_write_en = fsm_out == 5'h0 & signal_reg_out | fsm_out == 5'h0 & ~signal_reg_out &
    wrapper_early_reset_static_seq_go_out | fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_cond10_go_out |
    fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_static_par_go_out | fsm_out == 5'h0 & ~signal_reg_out &
    wrapper_early_reset_cond20_go_out | fsm_out == 5'h0 & ~signal_reg_out & wrapper_early_reset_static_seq1_go_out |
    _GEN_501; // @[]
  assign signal_reg_clk = clk;
  assign signal_reg_reset = reset;
  assign fsm1_in = fsm1_out == 2'h1 & invoke4_done_out & tdcc_go_out ? 2'h2 : {{1'd0}, _GEN_71}; // @[]
  assign fsm1_write_en = fsm1_out == 2'h2 | fsm1_out == 2'h0 & beg_spl_let3_done_out & tdcc_go_out | fsm1_out == 2'h1 &
    invoke4_done_out & tdcc_go_out; // @[]
  assign fsm1_clk = clk;
  assign fsm1_reset = reset;
  assign pd_in = pd_out & pd0_out & pd1_out ? 1'h0 : tdcc_done_out & par0_go_out; // @[]
  assign pd_write_en = pd_out & pd0_out & pd1_out | tdcc_done_out & par0_go_out; // @[]
  assign pd_clk = clk;
  assign pd_reset = reset;
  assign fsm2_in = fsm2_out == 2'h1 & invoke5_done_out & tdcc0_go_out ? 2'h2 : {{1'd0}, _GEN_96}; // @[]
  assign fsm2_write_en = fsm2_out == 2'h2 | fsm2_out == 2'h0 & beg_spl_let4_done_out & tdcc0_go_out | fsm2_out == 2'h1
     & invoke5_done_out & tdcc0_go_out; // @[]
  assign fsm2_clk = clk;
  assign fsm2_reset = reset;
  assign pd0_in = pd_out & pd0_out & pd1_out ? 1'h0 : tdcc0_done_out & par0_go_out; // @[]
  assign pd0_write_en = pd_out & pd0_out & pd1_out | tdcc0_done_out & par0_go_out; // @[]
  assign pd0_clk = clk;
  assign pd0_reset = reset;
  assign fsm3_in = fsm3_out == 2'h1 & invoke6_done_out & tdcc1_go_out ? 2'h2 : {{1'd0}, _GEN_48}; // @[]
  assign fsm3_write_en = fsm3_out == 2'h2 | fsm3_out == 2'h0 & beg_spl_let5_done_out & tdcc1_go_out | fsm3_out == 2'h1
     & invoke6_done_out & tdcc1_go_out; // @[]
  assign fsm3_clk = clk;
  assign fsm3_reset = reset;
  assign pd1_in = pd_out & pd0_out & pd1_out ? 1'h0 : tdcc1_done_out & par0_go_out; // @[]
  assign pd1_write_en = pd_out & pd0_out & pd1_out | tdcc1_done_out & par0_go_out; // @[]
  assign pd1_clk = clk;
  assign pd1_reset = reset;
  assign pd2_in = pd2_out & pd3_out ? 1'h0 : wrapper_early_reset_static_seq1_done_out & par1_go_out; // @[]
  assign pd2_write_en = pd2_out & pd3_out | wrapper_early_reset_static_seq1_done_out & par1_go_out; // @[]
  assign pd2_clk = clk;
  assign pd2_reset = reset;
  assign fsm4_in = fsm4_out == 2'h1 & invoke10_done_out & tdcc2_go_out ? 2'h2 : {{1'd0}, _GEN_75}; // @[]
  assign fsm4_write_en = fsm4_out == 2'h2 | fsm4_out == 2'h0 & beg_spl_let8_done_out & tdcc2_go_out | fsm4_out == 2'h1
     & invoke10_done_out & tdcc2_go_out; // @[]
  assign fsm4_clk = clk;
  assign fsm4_reset = reset;
  assign pd3_in = pd2_out & pd3_out ? 1'h0 : tdcc2_done_out & par1_go_out; // @[]
  assign pd3_write_en = pd2_out & pd3_out | tdcc2_done_out & par1_go_out; // @[]
  assign pd3_clk = clk;
  assign pd3_reset = reset;
  assign fsm5_in = fsm5_out == 4'ha & invoke14_done_out & tdcc3_go_out ? 4'hb : _GEN_62; // @[]
  assign fsm5_write_en = _GEN_311 | fsm5_out == 4'hb & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) &
    tdcc3_go_out; // @[]
  assign fsm5_clk = clk;
  assign fsm5_reset = reset;
  assign beg_spl_let3_go_in = ~beg_spl_let3_done_out & fsm1_out == 2'h0 & tdcc_go_out; // @[]
  assign beg_spl_let3_done_in = s_int_read_done;
  assign beg_spl_let4_go_in = ~beg_spl_let4_done_out & fsm2_out == 2'h0 & tdcc0_go_out; // @[]
  assign beg_spl_let4_done_in = q_int_read_done;
  assign beg_spl_let5_go_in = ~beg_spl_let5_done_out & fsm3_out == 2'h0 & tdcc1_go_out; // @[]
  assign beg_spl_let5_done_in = A_int_read_done;
  assign beg_spl_let6_go_in = ~beg_spl_let6_done_out & fsm5_out == 4'h5 & tdcc3_go_out; // @[]
  assign beg_spl_let6_done_in = r_int_read_done;
  assign beg_spl_let8_go_in = ~beg_spl_let8_done_out & fsm4_out == 2'h0 & tdcc2_go_out; // @[]
  assign beg_spl_let8_done_in = p_int_read_done;
  assign invoke4_go_in = ~invoke4_done_out & fsm1_out == 2'h1 & tdcc_go_out; // @[]
  assign invoke4_done_in = s0_0_done;
  assign invoke5_go_in = ~invoke5_done_out & fsm2_out == 2'h1 & tdcc0_go_out; // @[]
  assign invoke5_done_in = q0_0_done;
  assign invoke6_go_in = ~invoke6_done_out & fsm3_out == 2'h1 & tdcc1_go_out; // @[]
  assign invoke6_done_in = A_i_j_0_done;
  assign invoke7_go_in = ~invoke7_done_out & fsm5_out == 4'h6 & tdcc3_go_out; // @[]
  assign invoke7_done_in = bin_read0_0_done;
  assign invoke10_go_in = ~invoke10_done_out & fsm4_out == 2'h1 & tdcc2_go_out; // @[]
  assign invoke10_done_in = p_int_read0_0_done;
  assign invoke14_go_in = ~invoke14_done_out & fsm5_out == 4'ha & tdcc3_go_out; // @[]
  assign invoke14_done_in = i1_done;
  assign early_reset_cond10_go_in = wrapper_early_reset_cond10_go_out; // @[]
  assign early_reset_cond10_done_in = ud_out;
  assign early_reset_cond20_go_in = wrapper_early_reset_cond20_go_out; // @[]
  assign early_reset_cond20_done_in = ud0_out;
  assign early_reset_static_seq_go_in = wrapper_early_reset_static_seq_go_out; // @[]
  assign early_reset_static_seq_done_in = ud1_out;
  assign early_reset_static_seq0_go_in = fsm_out >= 5'h2 & fsm_out < 5'h1a & early_reset_static_seq_go_out; // @[]
  assign early_reset_static_seq0_done_in = ud2_out;
  assign early_reset_static_par_go_in = wrapper_early_reset_static_par_go_out; // @[]
  assign early_reset_static_par_done_in = ud3_out;
  assign early_reset_static_seq1_go_in = wrapper_early_reset_static_seq1_go_out; // @[]
  assign early_reset_static_seq1_done_in = ud4_out;
  assign early_reset_static_par0_go_in = wrapper_early_reset_static_par0_go_out; // @[]
  assign early_reset_static_par0_done_in = ud5_out;
  assign wrapper_early_reset_static_seq_go_in = ~wrapper_early_reset_static_seq_done_out & fsm5_out == 4'h0 &
    tdcc3_go_out; // @[]
  assign wrapper_early_reset_static_seq_done_in = fsm_out == 5'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond10_go_in = ~wrapper_early_reset_cond10_done_out & fsm5_out == 4'h1 & tdcc3_go_out | ~
    wrapper_early_reset_cond10_done_out & fsm5_out == 4'hb & tdcc3_go_out; // @[]
  assign wrapper_early_reset_cond10_done_in = fsm_out == 5'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par_go_in = ~wrapper_early_reset_static_par_done_out & fsm5_out == 4'h2 &
    tdcc3_go_out; // @[]
  assign wrapper_early_reset_static_par_done_in = fsm_out == 5'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond20_go_in = ~wrapper_early_reset_cond20_done_out & fsm5_out == 4'h3 & tdcc3_go_out | ~
    wrapper_early_reset_cond20_done_out & fsm5_out == 4'h9 & tdcc3_go_out; // @[]
  assign wrapper_early_reset_cond20_done_in = fsm_out == 5'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_seq1_go_in = ~(pd2_out | wrapper_early_reset_static_seq1_done_out) & par1_go_out; // @[]
  assign wrapper_early_reset_static_seq1_done_in = fsm_out == 5'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par0_go_in = ~wrapper_early_reset_static_par0_done_out & fsm5_out == 4'h8 &
    tdcc3_go_out; // @[]
  assign wrapper_early_reset_static_par0_done_in = fsm_out == 5'h0 & signal_reg_out; // @[]
  assign par0_go_in = ~par0_done_out & fsm5_out == 4'h4 & tdcc3_go_out; // @[]
  assign par0_done_in = pd_out & pd0_out & pd1_out; // @[]
  assign tdcc_go_in = ~(pd_out | tdcc_done_out) & par0_go_out; // @[]
  assign tdcc_done_in = fsm1_out == 2'h2; // @[]
  assign tdcc0_go_in = ~(pd0_out | tdcc0_done_out) & par0_go_out; // @[]
  assign tdcc0_done_in = fsm2_out == 2'h2; // @[]
  assign tdcc1_go_in = ~(pd1_out | tdcc1_done_out) & par0_go_out; // @[]
  assign tdcc1_done_in = fsm3_out == 2'h2; // @[]
  assign par1_go_in = ~par1_done_out & fsm5_out == 4'h7 & tdcc3_go_out; // @[]
  assign par1_done_in = pd2_out & pd3_out; // @[]
  assign tdcc2_go_in = ~(pd3_out | tdcc2_done_out) & par1_go_out; // @[]
  assign tdcc2_done_in = fsm4_out == 2'h2; // @[]
  assign tdcc3_go_in = go;
  assign tdcc3_done_in = fsm5_out == 4'hc; // @[]
endmodule

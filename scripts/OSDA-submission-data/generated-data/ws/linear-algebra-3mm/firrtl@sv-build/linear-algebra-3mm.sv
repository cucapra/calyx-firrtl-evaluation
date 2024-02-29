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
  output [3:0]  B_int_addr0,
  output [3:0]  B_int_addr1,
  output        B_int_write_en,
  output [31:0] B_int_write_data,
  output        B_int_read_en,
  input  [31:0] B_int_read_data,
  input         B_int_write_done,
  input         B_int_read_done,
  output [3:0]  C_int_addr0,
  output [3:0]  C_int_addr1,
  output        C_int_write_en,
  output [31:0] C_int_write_data,
  output        C_int_read_en,
  input  [31:0] C_int_read_data,
  input         C_int_write_done,
  input         C_int_read_done,
  output [3:0]  D_int_addr0,
  output [3:0]  D_int_addr1,
  output        D_int_write_en,
  output [31:0] D_int_write_data,
  output        D_int_read_en,
  input  [31:0] D_int_read_data,
  input         D_int_write_done,
  input         D_int_read_done,
  output [3:0]  E_int_addr0,
  output [3:0]  E_int_addr1,
  output        E_int_write_en,
  output [31:0] E_int_write_data,
  output        E_int_read_en,
  input  [31:0] E_int_read_data,
  input         E_int_write_done,
  input         E_int_read_done,
  output [3:0]  F_int_addr0,
  output [3:0]  F_int_addr1,
  output        F_int_write_en,
  output [31:0] F_int_write_data,
  output        F_int_read_en,
  input  [31:0] F_int_read_data,
  input         F_int_write_done,
  input         F_int_read_done,
  output [3:0]  G_int_addr0,
  output [3:0]  G_int_addr1,
  output        G_int_write_en,
  output [31:0] G_int_write_data,
  output        G_int_read_en,
  input  [31:0] G_int_read_data,
  input         G_int_write_done,
  input         G_int_read_done
);
  wire [31:0] add0_left;
  wire [31:0] add0_right;
  wire [31:0] add0_out;
  wire [3:0] add1_left;
  wire [3:0] add1_right;
  wire [3:0] add1_out;
  wire [31:0] bin_read0_0_in;
  wire  bin_read0_0_write_en;
  wire  bin_read0_0_clk;
  wire  bin_read0_0_reset;
  wire [31:0] bin_read0_0_out;
  wire  bin_read0_0_done;
  wire [3:0] const0_out;
  wire [3:0] const1_out;
  wire [31:0] const14_out;
  wire [3:0] const17_out;
  wire [3:0] i0_in;
  wire  i0_write_en;
  wire  i0_clk;
  wire  i0_reset;
  wire [3:0] i0_out;
  wire  i0_done;
  wire [3:0] j0_in;
  wire  j0_write_en;
  wire  j0_clk;
  wire  j0_reset;
  wire [3:0] j0_out;
  wire  j0_done;
  wire [3:0] k0_in;
  wire  k0_write_en;
  wire  k0_clk;
  wire  k0_reset;
  wire [3:0] k0_out;
  wire  k0_done;
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
  wire [31:0] v_0_in;
  wire  v_0_write_en;
  wire  v_0_clk;
  wire  v_0_reset;
  wire [31:0] v_0_out;
  wire  v_0_done;
  wire  comb_reg_in;
  wire  comb_reg_write_en;
  wire  comb_reg_clk;
  wire  comb_reg_reset;
  wire  comb_reg_out;
  wire  comb_reg_done;
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
  wire  comb_reg2_in;
  wire  comb_reg2_write_en;
  wire  comb_reg2_clk;
  wire  comb_reg2_reset;
  wire  comb_reg2_out;
  wire  comb_reg2_done;
  wire  comb_reg3_in;
  wire  comb_reg3_write_en;
  wire  comb_reg3_clk;
  wire  comb_reg3_reset;
  wire  comb_reg3_out;
  wire  comb_reg3_done;
  wire  comb_reg4_in;
  wire  comb_reg4_write_en;
  wire  comb_reg4_clk;
  wire  comb_reg4_reset;
  wire  comb_reg4_out;
  wire  comb_reg4_done;
  wire  comb_reg5_in;
  wire  comb_reg5_write_en;
  wire  comb_reg5_clk;
  wire  comb_reg5_reset;
  wire  comb_reg5_out;
  wire  comb_reg5_done;
  wire  comb_reg6_in;
  wire  comb_reg6_write_en;
  wire  comb_reg6_clk;
  wire  comb_reg6_reset;
  wire  comb_reg6_out;
  wire  comb_reg6_done;
  wire  comb_reg7_in;
  wire  comb_reg7_write_en;
  wire  comb_reg7_clk;
  wire  comb_reg7_reset;
  wire  comb_reg7_out;
  wire  comb_reg7_done;
  wire [2:0] fsm_in;
  wire  fsm_write_en;
  wire  fsm_clk;
  wire  fsm_reset;
  wire [2:0] fsm_out;
  wire  fsm_done;
  wire  ud_out;
  wire [2:0] adder_left;
  wire [2:0] adder_right;
  wire [2:0] adder_out;
  wire  ud0_out;
  wire [2:0] adder0_left;
  wire [2:0] adder0_right;
  wire [2:0] adder0_out;
  wire  ud1_out;
  wire [2:0] adder1_left;
  wire [2:0] adder1_right;
  wire [2:0] adder1_out;
  wire  ud2_out;
  wire [2:0] adder2_left;
  wire [2:0] adder2_right;
  wire [2:0] adder2_out;
  wire  ud3_out;
  wire [2:0] adder3_left;
  wire [2:0] adder3_right;
  wire [2:0] adder3_out;
  wire  ud4_out;
  wire [2:0] adder4_left;
  wire [2:0] adder4_right;
  wire [2:0] adder4_out;
  wire  ud5_out;
  wire [2:0] adder5_left;
  wire [2:0] adder5_right;
  wire [2:0] adder5_out;
  wire  ud6_out;
  wire [2:0] adder6_left;
  wire [2:0] adder6_right;
  wire [2:0] adder6_out;
  wire  ud7_out;
  wire [2:0] adder7_left;
  wire [2:0] adder7_right;
  wire [2:0] adder7_out;
  wire  ud8_out;
  wire [2:0] adder8_left;
  wire [2:0] adder8_right;
  wire [2:0] adder8_out;
  wire  ud9_out;
  wire [2:0] adder9_left;
  wire [2:0] adder9_right;
  wire [2:0] adder9_out;
  wire  ud10_out;
  wire [2:0] adder10_left;
  wire [2:0] adder10_right;
  wire [2:0] adder10_out;
  wire  ud11_out;
  wire [2:0] adder11_left;
  wire [2:0] adder11_right;
  wire [2:0] adder11_out;
  wire  ud12_out;
  wire [2:0] adder12_left;
  wire [2:0] adder12_right;
  wire [2:0] adder12_out;
  wire  ud13_out;
  wire [2:0] adder13_left;
  wire [2:0] adder13_right;
  wire [2:0] adder13_out;
  wire  ud14_out;
  wire [2:0] adder14_left;
  wire [2:0] adder14_right;
  wire [2:0] adder14_out;
  wire  ud15_out;
  wire [2:0] adder15_left;
  wire [2:0] adder15_right;
  wire [2:0] adder15_out;
  wire  ud16_out;
  wire [2:0] adder16_left;
  wire [2:0] adder16_right;
  wire [2:0] adder16_out;
  wire  signal_reg_in;
  wire  signal_reg_write_en;
  wire  signal_reg_clk;
  wire  signal_reg_reset;
  wire  signal_reg_out;
  wire  signal_reg_done;
  wire [1:0] fsm0_in;
  wire  fsm0_write_en;
  wire  fsm0_clk;
  wire  fsm0_reset;
  wire [1:0] fsm0_out;
  wire  fsm0_done;
  wire  pd_in;
  wire  pd_write_en;
  wire  pd_clk;
  wire  pd_reset;
  wire  pd_out;
  wire  pd_done;
  wire [1:0] fsm1_in;
  wire  fsm1_write_en;
  wire  fsm1_clk;
  wire  fsm1_reset;
  wire [1:0] fsm1_out;
  wire  fsm1_done;
  wire  pd0_in;
  wire  pd0_write_en;
  wire  pd0_clk;
  wire  pd0_reset;
  wire  pd0_out;
  wire  pd0_done;
  wire [1:0] fsm2_in;
  wire  fsm2_write_en;
  wire  fsm2_clk;
  wire  fsm2_reset;
  wire [1:0] fsm2_out;
  wire  fsm2_done;
  wire  pd1_in;
  wire  pd1_write_en;
  wire  pd1_clk;
  wire  pd1_reset;
  wire  pd1_out;
  wire  pd1_done;
  wire [1:0] fsm3_in;
  wire  fsm3_write_en;
  wire  fsm3_clk;
  wire  fsm3_reset;
  wire [1:0] fsm3_out;
  wire  fsm3_done;
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
  wire [1:0] fsm5_in;
  wire  fsm5_write_en;
  wire  fsm5_clk;
  wire  fsm5_reset;
  wire [1:0] fsm5_out;
  wire  fsm5_done;
  wire  pd4_in;
  wire  pd4_write_en;
  wire  pd4_clk;
  wire  pd4_reset;
  wire  pd4_out;
  wire  pd4_done;
  wire [5:0] fsm6_in;
  wire  fsm6_write_en;
  wire  fsm6_clk;
  wire  fsm6_reset;
  wire [5:0] fsm6_out;
  wire  fsm6_done;
  wire  beg_spl_let11_go_in;
  wire  beg_spl_let11_go_out;
  wire  beg_spl_let11_done_in;
  wire  beg_spl_let11_done_out;
  wire  beg_spl_let12_go_in;
  wire  beg_spl_let12_go_out;
  wire  beg_spl_let12_done_in;
  wire  beg_spl_let12_done_out;
  wire  beg_spl_let15_go_in;
  wire  beg_spl_let15_go_out;
  wire  beg_spl_let15_done_in;
  wire  beg_spl_let15_done_out;
  wire  beg_spl_let19_go_in;
  wire  beg_spl_let19_go_out;
  wire  beg_spl_let19_done_in;
  wire  beg_spl_let19_done_out;
  wire  beg_spl_let20_go_in;
  wire  beg_spl_let20_go_out;
  wire  beg_spl_let20_done_in;
  wire  beg_spl_let20_done_out;
  wire  beg_spl_let23_go_in;
  wire  beg_spl_let23_go_out;
  wire  beg_spl_let23_done_in;
  wire  beg_spl_let23_done_out;
  wire  beg_spl_let3_go_in;
  wire  beg_spl_let3_go_out;
  wire  beg_spl_let3_done_in;
  wire  beg_spl_let3_done_out;
  wire  beg_spl_let4_go_in;
  wire  beg_spl_let4_go_out;
  wire  beg_spl_let4_done_in;
  wire  beg_spl_let4_done_out;
  wire  beg_spl_let7_go_in;
  wire  beg_spl_let7_go_out;
  wire  beg_spl_let7_done_in;
  wire  beg_spl_let7_done_out;
  wire  invoke0_go_in;
  wire  invoke0_go_out;
  wire  invoke0_done_in;
  wire  invoke0_done_out;
  wire  invoke1_go_in;
  wire  invoke1_go_out;
  wire  invoke1_done_in;
  wire  invoke1_done_out;
  wire  invoke3_go_in;
  wire  invoke3_go_out;
  wire  invoke3_done_in;
  wire  invoke3_done_out;
  wire  invoke4_go_in;
  wire  invoke4_go_out;
  wire  invoke4_done_in;
  wire  invoke4_done_out;
  wire  invoke8_go_in;
  wire  invoke8_go_out;
  wire  invoke8_done_in;
  wire  invoke8_done_out;
  wire  invoke10_go_in;
  wire  invoke10_go_out;
  wire  invoke10_done_in;
  wire  invoke10_done_out;
  wire  invoke11_go_in;
  wire  invoke11_go_out;
  wire  invoke11_done_in;
  wire  invoke11_done_out;
  wire  invoke12_go_in;
  wire  invoke12_go_out;
  wire  invoke12_done_in;
  wire  invoke12_done_out;
  wire  invoke13_go_in;
  wire  invoke13_go_out;
  wire  invoke13_done_in;
  wire  invoke13_done_out;
  wire  invoke15_go_in;
  wire  invoke15_go_out;
  wire  invoke15_done_in;
  wire  invoke15_done_out;
  wire  invoke16_go_in;
  wire  invoke16_go_out;
  wire  invoke16_done_in;
  wire  invoke16_done_out;
  wire  invoke20_go_in;
  wire  invoke20_go_out;
  wire  invoke20_done_in;
  wire  invoke20_done_out;
  wire  invoke22_go_in;
  wire  invoke22_go_out;
  wire  invoke22_done_in;
  wire  invoke22_done_out;
  wire  invoke23_go_in;
  wire  invoke23_go_out;
  wire  invoke23_done_in;
  wire  invoke23_done_out;
  wire  invoke24_go_in;
  wire  invoke24_go_out;
  wire  invoke24_done_in;
  wire  invoke24_done_out;
  wire  invoke25_go_in;
  wire  invoke25_go_out;
  wire  invoke25_done_in;
  wire  invoke25_done_out;
  wire  invoke27_go_in;
  wire  invoke27_go_out;
  wire  invoke27_done_in;
  wire  invoke27_done_out;
  wire  invoke28_go_in;
  wire  invoke28_go_out;
  wire  invoke28_done_in;
  wire  invoke28_done_out;
  wire  invoke32_go_in;
  wire  invoke32_go_out;
  wire  invoke32_done_in;
  wire  invoke32_done_out;
  wire  invoke34_go_in;
  wire  invoke34_go_out;
  wire  invoke34_done_in;
  wire  invoke34_done_out;
  wire  invoke35_go_in;
  wire  invoke35_go_out;
  wire  invoke35_done_in;
  wire  invoke35_done_out;
  wire  early_reset_cond00_go_in;
  wire  early_reset_cond00_go_out;
  wire  early_reset_cond00_done_in;
  wire  early_reset_cond00_done_out;
  wire  early_reset_cond10_go_in;
  wire  early_reset_cond10_go_out;
  wire  early_reset_cond10_done_in;
  wire  early_reset_cond10_done_out;
  wire  early_reset_cond20_go_in;
  wire  early_reset_cond20_go_out;
  wire  early_reset_cond20_done_in;
  wire  early_reset_cond20_done_out;
  wire  early_reset_cond30_go_in;
  wire  early_reset_cond30_go_out;
  wire  early_reset_cond30_done_in;
  wire  early_reset_cond30_done_out;
  wire  early_reset_cond40_go_in;
  wire  early_reset_cond40_go_out;
  wire  early_reset_cond40_done_in;
  wire  early_reset_cond40_done_out;
  wire  early_reset_cond50_go_in;
  wire  early_reset_cond50_go_out;
  wire  early_reset_cond50_done_in;
  wire  early_reset_cond50_done_out;
  wire  early_reset_cond60_go_in;
  wire  early_reset_cond60_go_out;
  wire  early_reset_cond60_done_in;
  wire  early_reset_cond60_done_out;
  wire  early_reset_cond70_go_in;
  wire  early_reset_cond70_go_out;
  wire  early_reset_cond70_done_in;
  wire  early_reset_cond70_done_out;
  wire  early_reset_cond80_go_in;
  wire  early_reset_cond80_go_out;
  wire  early_reset_cond80_done_in;
  wire  early_reset_cond80_done_out;
  wire  early_reset_static_par_go_in;
  wire  early_reset_static_par_go_out;
  wire  early_reset_static_par_done_in;
  wire  early_reset_static_par_done_out;
  wire  early_reset_static_seq_go_in;
  wire  early_reset_static_seq_go_out;
  wire  early_reset_static_seq_done_in;
  wire  early_reset_static_seq_done_out;
  wire  early_reset_static_par0_go_in;
  wire  early_reset_static_par0_go_out;
  wire  early_reset_static_par0_done_in;
  wire  early_reset_static_par0_done_out;
  wire  early_reset_static_par1_go_in;
  wire  early_reset_static_par1_go_out;
  wire  early_reset_static_par1_done_in;
  wire  early_reset_static_par1_done_out;
  wire  early_reset_static_seq0_go_in;
  wire  early_reset_static_seq0_go_out;
  wire  early_reset_static_seq0_done_in;
  wire  early_reset_static_seq0_done_out;
  wire  early_reset_static_par2_go_in;
  wire  early_reset_static_par2_go_out;
  wire  early_reset_static_par2_done_in;
  wire  early_reset_static_par2_done_out;
  wire  early_reset_static_par3_go_in;
  wire  early_reset_static_par3_go_out;
  wire  early_reset_static_par3_done_in;
  wire  early_reset_static_par3_done_out;
  wire  early_reset_static_seq1_go_in;
  wire  early_reset_static_seq1_go_out;
  wire  early_reset_static_seq1_done_in;
  wire  early_reset_static_seq1_done_out;
  wire  early_reset_static_par4_go_in;
  wire  early_reset_static_par4_go_out;
  wire  early_reset_static_par4_done_in;
  wire  early_reset_static_par4_done_out;
  wire  wrapper_early_reset_cond00_go_in;
  wire  wrapper_early_reset_cond00_go_out;
  wire  wrapper_early_reset_cond00_done_in;
  wire  wrapper_early_reset_cond00_done_out;
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
  wire  wrapper_early_reset_static_seq_go_in;
  wire  wrapper_early_reset_static_seq_go_out;
  wire  wrapper_early_reset_static_seq_done_in;
  wire  wrapper_early_reset_static_seq_done_out;
  wire  wrapper_early_reset_static_par0_go_in;
  wire  wrapper_early_reset_static_par0_go_out;
  wire  wrapper_early_reset_static_par0_done_in;
  wire  wrapper_early_reset_static_par0_done_out;
  wire  wrapper_early_reset_cond30_go_in;
  wire  wrapper_early_reset_cond30_go_out;
  wire  wrapper_early_reset_cond30_done_in;
  wire  wrapper_early_reset_cond30_done_out;
  wire  wrapper_early_reset_cond40_go_in;
  wire  wrapper_early_reset_cond40_go_out;
  wire  wrapper_early_reset_cond40_done_in;
  wire  wrapper_early_reset_cond40_done_out;
  wire  wrapper_early_reset_static_par1_go_in;
  wire  wrapper_early_reset_static_par1_go_out;
  wire  wrapper_early_reset_static_par1_done_in;
  wire  wrapper_early_reset_static_par1_done_out;
  wire  wrapper_early_reset_cond50_go_in;
  wire  wrapper_early_reset_cond50_go_out;
  wire  wrapper_early_reset_cond50_done_in;
  wire  wrapper_early_reset_cond50_done_out;
  wire  wrapper_early_reset_static_seq0_go_in;
  wire  wrapper_early_reset_static_seq0_go_out;
  wire  wrapper_early_reset_static_seq0_done_in;
  wire  wrapper_early_reset_static_seq0_done_out;
  wire  wrapper_early_reset_static_par2_go_in;
  wire  wrapper_early_reset_static_par2_go_out;
  wire  wrapper_early_reset_static_par2_done_in;
  wire  wrapper_early_reset_static_par2_done_out;
  wire  wrapper_early_reset_cond60_go_in;
  wire  wrapper_early_reset_cond60_go_out;
  wire  wrapper_early_reset_cond60_done_in;
  wire  wrapper_early_reset_cond60_done_out;
  wire  wrapper_early_reset_cond70_go_in;
  wire  wrapper_early_reset_cond70_go_out;
  wire  wrapper_early_reset_cond70_done_in;
  wire  wrapper_early_reset_cond70_done_out;
  wire  wrapper_early_reset_static_par3_go_in;
  wire  wrapper_early_reset_static_par3_go_out;
  wire  wrapper_early_reset_static_par3_done_in;
  wire  wrapper_early_reset_static_par3_done_out;
  wire  wrapper_early_reset_cond80_go_in;
  wire  wrapper_early_reset_cond80_go_out;
  wire  wrapper_early_reset_cond80_done_in;
  wire  wrapper_early_reset_cond80_done_out;
  wire  wrapper_early_reset_static_seq1_go_in;
  wire  wrapper_early_reset_static_seq1_go_out;
  wire  wrapper_early_reset_static_seq1_done_in;
  wire  wrapper_early_reset_static_seq1_done_out;
  wire  wrapper_early_reset_static_par4_go_in;
  wire  wrapper_early_reset_static_par4_go_out;
  wire  wrapper_early_reset_static_par4_done_in;
  wire  wrapper_early_reset_static_par4_done_out;
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
  wire  par1_go_in;
  wire  par1_go_out;
  wire  par1_done_in;
  wire  par1_done_out;
  wire  tdcc1_go_in;
  wire  tdcc1_go_out;
  wire  tdcc1_done_in;
  wire  tdcc1_done_out;
  wire  tdcc2_go_in;
  wire  tdcc2_go_out;
  wire  tdcc2_done_in;
  wire  tdcc2_done_out;
  wire  par2_go_in;
  wire  par2_go_out;
  wire  par2_done_in;
  wire  par2_done_out;
  wire  tdcc3_go_in;
  wire  tdcc3_go_out;
  wire  tdcc3_done_in;
  wire  tdcc3_done_out;
  wire  tdcc4_go_in;
  wire  tdcc4_go_out;
  wire  tdcc4_done_in;
  wire  tdcc4_done_out;
  wire  tdcc5_go_in;
  wire  tdcc5_go_out;
  wire  tdcc5_done_in;
  wire  tdcc5_done_out;
  wire [3:0] _GEN_1 = invoke11_go_out | invoke23_go_out | invoke35_go_out ? add1_out : 4'h0; // @[]
  wire  _GEN_322 = fsm_out == 3'h4 & early_reset_static_seq_go_out; // @[]
  wire [31:0] _GEN_4 = invoke28_go_out ? F_int_read_data : 32'h0; // @[]
  wire [31:0] _GEN_5 = invoke4_go_out ? B_int_read_data : _GEN_4; // @[]
  wire [31:0] _GEN_6 = invoke16_go_out ? D_int_read_data : _GEN_5; // @[]
  wire  _GEN_9 = early_reset_cond20_go_out; // @[]
  wire [3:0] _GEN_14 = invoke11_go_out | invoke23_go_out | invoke35_go_out ? i0_out : 4'h0; // @[]
  wire [3:0] _GEN_15 = invoke10_go_out | invoke22_go_out | invoke34_go_out ? j0_out : _GEN_14; // @[]
  wire [31:0] _GEN_21 = early_reset_static_par4_go_out ? add0_out : 32'h0; // @[]
  wire [3:0] _GEN_25 = beg_spl_let15_go_out | early_reset_static_par1_go_out | early_reset_static_par2_go_out ? i0_out
     : 4'h0; // @[]
  wire [3:0] _GEN_29 = beg_spl_let7_go_out | early_reset_static_par_go_out | early_reset_static_par0_go_out ? j0_out : 4'h0
    ; // @[]
  wire [31:0] _GEN_35 = early_reset_static_par2_go_out ? add0_out : 32'h0; // @[]
  wire [31:0] _GEN_40 = early_reset_static_par0_go_out ? add0_out : 32'h0; // @[]
  wire [2:0] _GEN_52 = fsm_out != 3'h0 & early_reset_cond20_go_out ? adder1_out : 3'h0; // @[]
  wire [2:0] _GEN_53 = fsm_out != 3'h0 & early_reset_cond00_go_out ? adder_out : _GEN_52; // @[]
  wire [2:0] _GEN_54 = fsm_out != 3'h0 & early_reset_static_par0_go_out ? adder10_out : _GEN_53; // @[]
  wire [2:0] _GEN_55 = fsm_out != 3'h4 & early_reset_static_seq0_go_out ? adder12_out : _GEN_54; // @[]
  wire [2:0] _GEN_56 = fsm_out != 3'h0 & early_reset_cond50_go_out ? adder4_out : _GEN_55; // @[]
  wire [2:0] _GEN_57 = fsm_out != 3'h0 & early_reset_static_par2_go_out ? adder13_out : _GEN_56; // @[]
  wire [2:0] _GEN_58 = fsm_out != 3'h4 & early_reset_static_seq1_go_out ? adder15_out : _GEN_57; // @[]
  wire [2:0] _GEN_59 = fsm_out != 3'h0 & early_reset_cond70_go_out ? adder6_out : _GEN_58; // @[]
  wire [2:0] _GEN_60 = fsm_out != 3'h0 & early_reset_cond30_go_out ? adder2_out : _GEN_59; // @[]
  wire [2:0] _GEN_61 = fsm_out != 3'h0 & early_reset_cond40_go_out ? adder3_out : _GEN_60; // @[]
  wire [2:0] _GEN_62 = fsm_out != 3'h0 & early_reset_cond60_go_out ? adder5_out : _GEN_61; // @[]
  wire [2:0] _GEN_63 = fsm_out != 3'h0 & early_reset_cond10_go_out ? adder0_out : _GEN_62; // @[]
  wire [2:0] _GEN_64 = fsm_out != 3'h0 & early_reset_static_par1_go_out ? adder11_out : _GEN_63; // @[]
  wire [2:0] _GEN_65 = fsm_out != 3'h0 & early_reset_static_par_go_out ? adder8_out : _GEN_64; // @[]
  wire [2:0] _GEN_66 = fsm_out != 3'h0 & early_reset_static_par3_go_out ? adder14_out : _GEN_65; // @[]
  wire [2:0] _GEN_67 = fsm_out != 3'h0 & early_reset_static_par4_go_out ? adder16_out : _GEN_66; // @[]
  wire  _GEN_418 = fsm_out == 3'h0 & early_reset_cond00_go_out | fsm_out == 3'h0 & early_reset_cond10_go_out | fsm_out
     == 3'h0 & early_reset_cond20_go_out | fsm_out == 3'h0 & early_reset_cond30_go_out | fsm_out == 3'h0 &
    early_reset_cond40_go_out | fsm_out == 3'h0 & early_reset_cond50_go_out | fsm_out == 3'h0 &
    early_reset_cond60_go_out | fsm_out == 3'h0 & early_reset_cond70_go_out | fsm_out == 3'h0 &
    early_reset_cond80_go_out | fsm_out == 3'h0 & early_reset_static_par_go_out | _GEN_322; // @[]
  wire [2:0] _GEN_68 = _GEN_418 | fsm_out == 3'h0 & early_reset_static_par0_go_out | fsm_out == 3'h0 &
    early_reset_static_par1_go_out | fsm_out == 3'h4 & early_reset_static_seq0_go_out | fsm_out == 3'h0 &
    early_reset_static_par2_go_out | fsm_out == 3'h0 & early_reset_static_par3_go_out | fsm_out == 3'h4 &
    early_reset_static_seq1_go_out | fsm_out == 3'h0 & early_reset_static_par4_go_out ? 3'h0 : _GEN_67; // @[]
  wire [2:0] _GEN_69 = fsm_out != 3'h0 & early_reset_cond80_go_out ? adder7_out : _GEN_68; // @[]
  wire  _GEN_72 = early_reset_cond00_go_out; // @[]
  wire  _GEN_74 = early_reset_static_par0_go_out; // @[]
  wire  _GEN_76 = early_reset_static_seq0_go_out; // @[]
  wire  _GEN_471 = fsm6_out == 6'h4 & wrapper_early_reset_static_par_done_out & tdcc5_go_out; // @[]
  wire  _GEN_475 = fsm6_out == 6'h30 | fsm6_out == 6'h0 & invoke0_done_out & tdcc5_go_out | fsm6_out == 6'h1 & (
    wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc5_go_out | fsm6_out == 6'hf & (
    wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc5_go_out | fsm6_out == 6'h2 & invoke1_done_out &
    tdcc5_go_out | fsm6_out == 6'h3 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc5_go_out | fsm6_out
     == 6'hd & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc5_go_out | _GEN_471; // @[]
  wire  _GEN_506 = _GEN_475 | fsm6_out == 6'h5 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc5_go_out |
    fsm6_out == 6'hb & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc5_go_out | fsm6_out == 6'h6 &
    par0_done_out & tdcc5_go_out | fsm6_out == 6'h7 & wrapper_early_reset_static_seq_done_out & tdcc5_go_out | fsm6_out
     == 6'h8 & beg_spl_let7_done_out & tdcc5_go_out | fsm6_out == 6'h9 & invoke8_done_out & tdcc5_go_out | fsm6_out == 6'ha
     & wrapper_early_reset_static_par0_done_out & tdcc5_go_out; // @[]
  wire  _GEN_533 = fsm6_out == 6'he & invoke11_done_out & tdcc5_go_out; // @[]
  wire  _GEN_539 = fsm6_out == 6'h1 & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc5_go_out; // @[]
  wire  _GEN_544 = _GEN_506 | fsm6_out == 6'h5 & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc5_go_out
     | fsm6_out == 6'hb & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc5_go_out | fsm6_out == 6'hc &
    invoke10_done_out & tdcc5_go_out | fsm6_out == 6'h3 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) &
    tdcc5_go_out | fsm6_out == 6'hd & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc5_go_out | _GEN_533
     | _GEN_539; // @[]
  wire  _GEN_573 = fsm6_out == 6'h1d & (wrapper_early_reset_cond40_done_out & comb_reg3_out) & tdcc5_go_out; // @[]
  wire  _GEN_576 = _GEN_544 | fsm6_out == 6'hf & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc5_go_out |
    fsm6_out == 6'h10 & invoke12_done_out & tdcc5_go_out | fsm6_out == 6'h11 & (wrapper_early_reset_cond30_done_out &
    comb_reg2_out) & tdcc5_go_out | fsm6_out == 6'h1f & (wrapper_early_reset_cond30_done_out & comb_reg2_out) &
    tdcc5_go_out | fsm6_out == 6'h12 & invoke13_done_out & tdcc5_go_out | fsm6_out == 6'h13 & (
    wrapper_early_reset_cond40_done_out & comb_reg3_out) & tdcc5_go_out | _GEN_573; // @[]
  wire  _GEN_606 = _GEN_576 | fsm6_out == 6'h14 & wrapper_early_reset_static_par1_done_out & tdcc5_go_out | fsm6_out == 6'h15
     & (wrapper_early_reset_cond50_done_out & comb_reg4_out) & tdcc5_go_out | fsm6_out == 6'h1b & (
    wrapper_early_reset_cond50_done_out & comb_reg4_out) & tdcc5_go_out | fsm6_out == 6'h16 & par1_done_out &
    tdcc5_go_out | fsm6_out == 6'h17 & wrapper_early_reset_static_seq0_done_out & tdcc5_go_out | fsm6_out == 6'h18 &
    beg_spl_let15_done_out & tdcc5_go_out | fsm6_out == 6'h19 & invoke20_done_out & tdcc5_go_out; // @[]
  wire  _GEN_635 = fsm6_out == 6'h1d & (wrapper_early_reset_cond40_done_out & ~comb_reg3_out) & tdcc5_go_out; // @[]
  wire  _GEN_639 = fsm6_out == 6'h1e & invoke23_done_out & tdcc5_go_out; // @[]
  wire  _GEN_645 = fsm6_out == 6'h11 & (wrapper_early_reset_cond30_done_out & ~comb_reg2_out) & tdcc5_go_out; // @[]
  wire  _GEN_651 = fsm6_out == 6'h1f & (wrapper_early_reset_cond30_done_out & ~comb_reg2_out) & tdcc5_go_out; // @[]
  wire  _GEN_654 = _GEN_606 | fsm6_out == 6'h1a & wrapper_early_reset_static_par2_done_out & tdcc5_go_out | fsm6_out == 6'h15
     & (wrapper_early_reset_cond50_done_out & ~comb_reg4_out) & tdcc5_go_out | fsm6_out == 6'h1b & (
    wrapper_early_reset_cond50_done_out & ~comb_reg4_out) & tdcc5_go_out | fsm6_out == 6'h1c & invoke22_done_out &
    tdcc5_go_out | fsm6_out == 6'h13 & (wrapper_early_reset_cond40_done_out & ~comb_reg3_out) & tdcc5_go_out | _GEN_635
     | _GEN_639 | _GEN_645 | _GEN_651; // @[]
  wire  _GEN_683 = fsm6_out == 6'h24 & wrapper_early_reset_static_par3_done_out & tdcc5_go_out; // @[]
  wire  _GEN_688 = fsm6_out == 6'h25 & (wrapper_early_reset_cond80_done_out & comb_reg7_out) & tdcc5_go_out; // @[]
  wire  _GEN_692 = _GEN_654 | fsm6_out == 6'h20 & invoke24_done_out & tdcc5_go_out | fsm6_out == 6'h21 & (
    wrapper_early_reset_cond60_done_out & comb_reg5_out) & tdcc5_go_out | fsm6_out == 6'h2f & (
    wrapper_early_reset_cond60_done_out & comb_reg5_out) & tdcc5_go_out | fsm6_out == 6'h22 & invoke25_done_out &
    tdcc5_go_out | fsm6_out == 6'h23 & (wrapper_early_reset_cond70_done_out & comb_reg6_out) & tdcc5_go_out | fsm6_out
     == 6'h2d & (wrapper_early_reset_cond70_done_out & comb_reg6_out) & tdcc5_go_out | _GEN_683 | _GEN_688; // @[]
  wire  _GEN_719 = fsm6_out == 6'h25 & (wrapper_early_reset_cond80_done_out & ~comb_reg7_out) & tdcc5_go_out; // @[]
  wire  _GEN_725 = fsm6_out == 6'h2b & (wrapper_early_reset_cond80_done_out & ~comb_reg7_out) & tdcc5_go_out; // @[]
  wire  _GEN_729 = fsm6_out == 6'h2c & invoke34_done_out & tdcc5_go_out; // @[]
  wire  _GEN_735 = fsm6_out == 6'h23 & (wrapper_early_reset_cond70_done_out & ~comb_reg6_out) & tdcc5_go_out; // @[]
  wire  _GEN_741 = fsm6_out == 6'h2d & (wrapper_early_reset_cond70_done_out & ~comb_reg6_out) & tdcc5_go_out; // @[]
  wire  _GEN_744 = _GEN_692 | fsm6_out == 6'h2b & (wrapper_early_reset_cond80_done_out & comb_reg7_out) & tdcc5_go_out
     | fsm6_out == 6'h26 & par2_done_out & tdcc5_go_out | fsm6_out == 6'h27 & wrapper_early_reset_static_seq1_done_out
     & tdcc5_go_out | fsm6_out == 6'h28 & beg_spl_let23_done_out & tdcc5_go_out | fsm6_out == 6'h29 & invoke32_done_out
     & tdcc5_go_out | fsm6_out == 6'h2a & wrapper_early_reset_static_par4_done_out & tdcc5_go_out | _GEN_719 | _GEN_725
     | _GEN_729 | _GEN_735 | _GEN_741; // @[]
  wire [3:0] _GEN_78 = fsm6_out == 6'h8 & beg_spl_let7_done_out & tdcc5_go_out ? 4'h9 : 4'h0; // @[]
  wire [4:0] _GEN_79 = fsm6_out == 6'h12 & invoke13_done_out & tdcc5_go_out ? 5'h13 : {{1'd0}, _GEN_78}; // @[]
  wire [5:0] _GEN_80 = fsm6_out == 6'h20 & invoke24_done_out & tdcc5_go_out ? 6'h21 : {{1'd0}, _GEN_79}; // @[]
  wire [5:0] _GEN_81 = fsm6_out == 6'h22 & invoke25_done_out & tdcc5_go_out ? 6'h23 : _GEN_80; // @[]
  wire [5:0] _GEN_82 = fsm6_out == 6'h3 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc5_go_out |
    fsm6_out == 6'hd & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc5_go_out ? 6'h4 : _GEN_81; // @[]
  wire [5:0] _GEN_83 = fsm6_out == 6'h13 & (wrapper_early_reset_cond40_done_out & comb_reg3_out) & tdcc5_go_out |
    fsm6_out == 6'h1d & (wrapper_early_reset_cond40_done_out & comb_reg3_out) & tdcc5_go_out ? 6'h14 : _GEN_82; // @[]
  wire [5:0] _GEN_84 = fsm6_out == 6'h3 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc5_go_out |
    fsm6_out == 6'hd & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc5_go_out ? 6'he : _GEN_83; // @[]
  wire [5:0] _GEN_85 = fsm6_out == 6'h14 & wrapper_early_reset_static_par1_done_out & tdcc5_go_out ? 6'h15 : _GEN_84; // @[]
  wire [5:0] _GEN_86 = fsm6_out == 6'h19 & invoke20_done_out & tdcc5_go_out ? 6'h1a : _GEN_85; // @[]
  wire [5:0] _GEN_87 = fsm6_out == 6'h11 & (wrapper_early_reset_cond30_done_out & ~comb_reg2_out) & tdcc5_go_out |
    fsm6_out == 6'h1f & (wrapper_early_reset_cond30_done_out & ~comb_reg2_out) & tdcc5_go_out ? 6'h20 : _GEN_86; // @[]
  wire [5:0] _GEN_88 = fsm6_out == 6'ha & wrapper_early_reset_static_par0_done_out & tdcc5_go_out ? 6'hb : _GEN_87; // @[]
  wire [5:0] _GEN_89 = fsm6_out == 6'h1c & invoke22_done_out & tdcc5_go_out ? 6'h1d : _GEN_88; // @[]
  wire [5:0] _GEN_90 = fsm6_out == 6'h1a & wrapper_early_reset_static_par2_done_out & tdcc5_go_out ? 6'h1b : _GEN_89; // @[]
  wire [5:0] _GEN_91 = fsm6_out == 6'h21 & (wrapper_early_reset_cond60_done_out & comb_reg5_out) & tdcc5_go_out |
    fsm6_out == 6'h2f & (wrapper_early_reset_cond60_done_out & comb_reg5_out) & tdcc5_go_out ? 6'h22 : _GEN_90; // @[]
  wire [5:0] _GEN_92 = fsm6_out == 6'h26 & par2_done_out & tdcc5_go_out ? 6'h27 : _GEN_91; // @[]
  wire [5:0] _GEN_93 = fsm6_out == 6'h4 & wrapper_early_reset_static_par_done_out & tdcc5_go_out ? 6'h5 : _GEN_92; // @[]
  wire [5:0] _GEN_94 = fsm6_out == 6'h5 & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc5_go_out |
    fsm6_out == 6'hb & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc5_go_out ? 6'hc : _GEN_93; // @[]
  wire [5:0] _GEN_95 = fsm6_out == 6'h25 & (wrapper_early_reset_cond80_done_out & ~comb_reg7_out) & tdcc5_go_out |
    fsm6_out == 6'h2b & (wrapper_early_reset_cond80_done_out & ~comb_reg7_out) & tdcc5_go_out ? 6'h2c : _GEN_94; // @[]
  wire [5:0] _GEN_96 = fsm6_out == 6'h2 & invoke1_done_out & tdcc5_go_out ? 6'h3 : _GEN_95; // @[]
  wire [5:0] _GEN_97 = fsm6_out == 6'h7 & wrapper_early_reset_static_seq_done_out & tdcc5_go_out ? 6'h8 : _GEN_96; // @[]
  wire [5:0] _GEN_98 = fsm6_out == 6'h2c & invoke34_done_out & tdcc5_go_out ? 6'h2d : _GEN_97; // @[]
  wire [5:0] _GEN_99 = fsm6_out == 6'h15 & (wrapper_early_reset_cond50_done_out & ~comb_reg4_out) & tdcc5_go_out |
    fsm6_out == 6'h1b & (wrapper_early_reset_cond50_done_out & ~comb_reg4_out) & tdcc5_go_out ? 6'h1c : _GEN_98; // @[]
  wire [5:0] _GEN_100 = fsm6_out == 6'h23 & (wrapper_early_reset_cond70_done_out & comb_reg6_out) & tdcc5_go_out |
    fsm6_out == 6'h2d & (wrapper_early_reset_cond70_done_out & comb_reg6_out) & tdcc5_go_out ? 6'h24 : _GEN_99; // @[]
  wire [5:0] _GEN_101 = fsm6_out == 6'h28 & beg_spl_let23_done_out & tdcc5_go_out ? 6'h29 : _GEN_100; // @[]
  wire [5:0] _GEN_102 = fsm6_out == 6'h29 & invoke32_done_out & tdcc5_go_out ? 6'h2a : _GEN_101; // @[]
  wire [5:0] _GEN_103 = fsm6_out == 6'h6 & par0_done_out & tdcc5_go_out ? 6'h7 : _GEN_102; // @[]
  wire [5:0] _GEN_104 = fsm6_out == 6'hc & invoke10_done_out & tdcc5_go_out ? 6'hd : _GEN_103; // @[]
  wire [5:0] _GEN_105 = fsm6_out == 6'h1 & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc5_go_out |
    fsm6_out == 6'hf & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc5_go_out ? 6'h10 : _GEN_104; // @[]
  wire [5:0] _GEN_106 = fsm6_out == 6'h1e & invoke23_done_out & tdcc5_go_out ? 6'h1f : _GEN_105; // @[]
  wire [5:0] _GEN_107 = fsm6_out == 6'h15 & (wrapper_early_reset_cond50_done_out & comb_reg4_out) & tdcc5_go_out |
    fsm6_out == 6'h1b & (wrapper_early_reset_cond50_done_out & comb_reg4_out) & tdcc5_go_out ? 6'h16 : _GEN_106; // @[]
  wire [5:0] _GEN_108 = fsm6_out == 6'h13 & (wrapper_early_reset_cond40_done_out & ~comb_reg3_out) & tdcc5_go_out |
    fsm6_out == 6'h1d & (wrapper_early_reset_cond40_done_out & ~comb_reg3_out) & tdcc5_go_out ? 6'h1e : _GEN_107; // @[]
  wire [5:0] _GEN_109 = fsm6_out == 6'h30 ? 6'h0 : _GEN_108; // @[]
  wire [5:0] _GEN_110 = fsm6_out == 6'h5 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc5_go_out |
    fsm6_out == 6'hb & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc5_go_out ? 6'h6 : _GEN_109; // @[]
  wire [5:0] _GEN_111 = fsm6_out == 6'h9 & invoke8_done_out & tdcc5_go_out ? 6'ha : _GEN_110; // @[]
  wire [5:0] _GEN_112 = fsm6_out == 6'h21 & (wrapper_early_reset_cond60_done_out & ~comb_reg5_out) & tdcc5_go_out |
    fsm6_out == 6'h2f & (wrapper_early_reset_cond60_done_out & ~comb_reg5_out) & tdcc5_go_out ? 6'h30 : _GEN_111; // @[]
  wire [5:0] _GEN_113 = fsm6_out == 6'h17 & wrapper_early_reset_static_seq0_done_out & tdcc5_go_out ? 6'h18 : _GEN_112; // @[]
  wire [5:0] _GEN_114 = fsm6_out == 6'h1 & (wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc5_go_out |
    fsm6_out == 6'hf & (wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc5_go_out ? 6'h2 : _GEN_113; // @[]
  wire [5:0] _GEN_115 = fsm6_out == 6'he & invoke11_done_out & tdcc5_go_out ? 6'hf : _GEN_114; // @[]
  wire [5:0] _GEN_116 = fsm6_out == 6'h10 & invoke12_done_out & tdcc5_go_out ? 6'h11 : _GEN_115; // @[]
  wire [5:0] _GEN_117 = fsm6_out == 6'h16 & par1_done_out & tdcc5_go_out ? 6'h17 : _GEN_116; // @[]
  wire [5:0] _GEN_118 = fsm6_out == 6'h27 & wrapper_early_reset_static_seq1_done_out & tdcc5_go_out ? 6'h28 : _GEN_117; // @[]
  wire [5:0] _GEN_119 = fsm6_out == 6'h23 & (wrapper_early_reset_cond70_done_out & ~comb_reg6_out) & tdcc5_go_out |
    fsm6_out == 6'h2d & (wrapper_early_reset_cond70_done_out & ~comb_reg6_out) & tdcc5_go_out ? 6'h2e : _GEN_118; // @[]
  wire [5:0] _GEN_120 = fsm6_out == 6'h2e & invoke35_done_out & tdcc5_go_out ? 6'h2f : _GEN_119; // @[]
  wire [5:0] _GEN_121 = fsm6_out == 6'h18 & beg_spl_let15_done_out & tdcc5_go_out ? 6'h19 : _GEN_120; // @[]
  wire [5:0] _GEN_122 = fsm6_out == 6'h25 & (wrapper_early_reset_cond80_done_out & comb_reg7_out) & tdcc5_go_out |
    fsm6_out == 6'h2b & (wrapper_early_reset_cond80_done_out & comb_reg7_out) & tdcc5_go_out ? 6'h26 : _GEN_121; // @[]
  wire [5:0] _GEN_123 = fsm6_out == 6'h0 & invoke0_done_out & tdcc5_go_out ? 6'h1 : _GEN_122; // @[]
  wire [5:0] _GEN_124 = fsm6_out == 6'h11 & (wrapper_early_reset_cond30_done_out & comb_reg2_out) & tdcc5_go_out |
    fsm6_out == 6'h1f & (wrapper_early_reset_cond30_done_out & comb_reg2_out) & tdcc5_go_out ? 6'h12 : _GEN_123; // @[]
  wire [5:0] _GEN_125 = fsm6_out == 6'h24 & wrapper_early_reset_static_par3_done_out & tdcc5_go_out ? 6'h25 : _GEN_124; // @[]
  wire  _GEN_137 = early_reset_cond50_go_out; // @[]
  wire  _GEN_140 = fsm3_out == 2'h2 ? 1'h0 : fsm3_out == 2'h0 & beg_spl_let12_done_out & tdcc2_go_out; // @[]
  wire  _GEN_144 = fsm5_out == 2'h2 ? 1'h0 : fsm5_out == 2'h0 & beg_spl_let20_done_out & tdcc4_go_out; // @[]
  wire  _GEN_151 = early_reset_static_par2_go_out; // @[]
  wire  _GEN_153 = early_reset_static_seq1_go_out; // @[]
  wire  _GEN_161 = fsm1_out == 2'h2 ? 1'h0 : fsm1_out == 2'h0 & beg_spl_let4_done_out & tdcc0_go_out; // @[]
  wire  _GEN_165 = fsm4_out == 2'h2 ? 1'h0 : fsm4_out == 2'h0 & beg_spl_let19_done_out & tdcc3_go_out; // @[]
  wire  _GEN_178 = early_reset_cond10_go_out; // @[]
  wire  _GEN_180 = early_reset_cond70_go_out; // @[]
  wire  _GEN_193 = early_reset_cond30_go_out; // @[]
  wire  _GEN_198 = fsm0_out == 2'h2 ? 1'h0 : fsm0_out == 2'h0 & beg_spl_let3_done_out & tdcc_go_out; // @[]
  wire  _GEN_202 = fsm2_out == 2'h2 ? 1'h0 : fsm2_out == 2'h0 & beg_spl_let11_done_out & tdcc1_go_out; // @[]
  wire  _GEN_206 = early_reset_cond80_go_out; // @[]
  wire  _GEN_209 = early_reset_cond40_go_out; // @[]
  wire  _GEN_211 = early_reset_cond60_go_out; // @[]
  wire  _GEN_221 = early_reset_static_par1_go_out; // @[]
  wire [3:0] _GEN_231 = early_reset_cond00_go_out | early_reset_cond30_go_out | early_reset_cond60_go_out ? i0_out : 4'h0
    ; // @[]
  wire [3:0] _GEN_232 = early_reset_cond10_go_out | early_reset_cond40_go_out | early_reset_cond70_go_out ? j0_out :
    _GEN_231; // @[]
  wire  _GEN_237 = early_reset_static_par_go_out; // @[]
  wire  _GEN_239 = early_reset_static_par3_go_out; // @[]
  wire  _GEN_1225 = fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par0_go_out; // @[]
  wire  _GEN_1230 = fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond30_go_out; // @[]
  wire  _GEN_1235 = fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond40_go_out; // @[]
  wire  _GEN_1239 = fsm_out == 3'h0 & signal_reg_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond00_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond10_go_out | fsm_out
     == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond20_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_seq_go_out |
    _GEN_1225 | _GEN_1230 | _GEN_1235; // @[]
  wire  _GEN_1269 = _GEN_1239 | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par1_go_out | fsm_out == 3'h0
     & ~signal_reg_out & wrapper_early_reset_cond50_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_seq0_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par2_go_out
     | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond60_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond70_go_out; // @[]
  wire  _GEN_1322 = fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond00_go_out | fsm_out == 3'h0 & ~
    signal_reg_out & wrapper_early_reset_cond10_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_par_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond20_go_out |
    fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_seq_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_par0_go_out | _GEN_1230; // @[]
  wire  _GEN_1352 = _GEN_1322 | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond40_go_out | fsm_out == 3'h0
     & ~signal_reg_out & wrapper_early_reset_static_par1_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond50_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_seq0_go_out |
    fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par2_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond60_go_out; // @[]
  wire [31:0] _GEN_263 = invoke15_go_out ? C_int_read_data : 32'h0; // @[]
  wire [31:0] _GEN_264 = invoke20_go_out ? F_int_read_data : _GEN_263; // @[]
  wire [31:0] _GEN_265 = invoke3_go_out ? A_int_read_data : _GEN_264; // @[]
  wire [31:0] _GEN_266 = invoke8_go_out | invoke27_go_out ? E_int_read_data : _GEN_265; // @[]
  wire [31:0] _GEN_267 = invoke32_go_out ? G_int_read_data : _GEN_266; // @[]
  wire [3:0] _GEN_270 = invoke10_go_out | invoke22_go_out | invoke34_go_out ? add1_out : 4'h0; // @[]
  wire [3:0] _GEN_273 = early_reset_static_par0_go_out | early_reset_static_par2_go_out | early_reset_static_par4_go_out
     ? add1_out : 4'h0; // @[]
  wire  _GEN_277 = early_reset_static_par4_go_out; // @[]
  wire  _GEN_304 = early_reset_static_seq_go_out; // @[]
  std_add #(.WIDTH(32)) add0 (
    .left(add0_left),
    .right(add0_right),
    .out(add0_out)
  );
  std_add #(.WIDTH(4)) add1 (
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
  std_const #(.WIDTH(32), .VALUE(0)) const14 (
    .out(const14_out)
  );
  std_const #(.WIDTH(4), .VALUE(1)) const17 (
    .out(const17_out)
  );
  std_reg #(.WIDTH(4)) i0 (
    .in(i0_in),
    .write_en(i0_write_en),
    .clk(i0_clk),
    .reset(i0_reset),
    .out(i0_out),
    .done(i0_done)
  );
  std_reg #(.WIDTH(4)) j0 (
    .in(j0_in),
    .write_en(j0_write_en),
    .clk(j0_clk),
    .reset(j0_reset),
    .out(j0_out),
    .done(j0_done)
  );
  std_reg #(.WIDTH(4)) k0 (
    .in(k0_in),
    .write_en(k0_write_en),
    .clk(k0_clk),
    .reset(k0_reset),
    .out(k0_out),
    .done(k0_done)
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
  std_reg #(.WIDTH(32)) v_0 (
    .in(v_0_in),
    .write_en(v_0_write_en),
    .clk(v_0_clk),
    .reset(v_0_reset),
    .out(v_0_out),
    .done(v_0_done)
  );
  std_reg #(.WIDTH(1)) comb_reg (
    .in(comb_reg_in),
    .write_en(comb_reg_write_en),
    .clk(comb_reg_clk),
    .reset(comb_reg_reset),
    .out(comb_reg_out),
    .done(comb_reg_done)
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
  std_reg #(.WIDTH(1)) comb_reg2 (
    .in(comb_reg2_in),
    .write_en(comb_reg2_write_en),
    .clk(comb_reg2_clk),
    .reset(comb_reg2_reset),
    .out(comb_reg2_out),
    .done(comb_reg2_done)
  );
  std_reg #(.WIDTH(1)) comb_reg3 (
    .in(comb_reg3_in),
    .write_en(comb_reg3_write_en),
    .clk(comb_reg3_clk),
    .reset(comb_reg3_reset),
    .out(comb_reg3_out),
    .done(comb_reg3_done)
  );
  std_reg #(.WIDTH(1)) comb_reg4 (
    .in(comb_reg4_in),
    .write_en(comb_reg4_write_en),
    .clk(comb_reg4_clk),
    .reset(comb_reg4_reset),
    .out(comb_reg4_out),
    .done(comb_reg4_done)
  );
  std_reg #(.WIDTH(1)) comb_reg5 (
    .in(comb_reg5_in),
    .write_en(comb_reg5_write_en),
    .clk(comb_reg5_clk),
    .reset(comb_reg5_reset),
    .out(comb_reg5_out),
    .done(comb_reg5_done)
  );
  std_reg #(.WIDTH(1)) comb_reg6 (
    .in(comb_reg6_in),
    .write_en(comb_reg6_write_en),
    .clk(comb_reg6_clk),
    .reset(comb_reg6_reset),
    .out(comb_reg6_out),
    .done(comb_reg6_done)
  );
  std_reg #(.WIDTH(1)) comb_reg7 (
    .in(comb_reg7_in),
    .write_en(comb_reg7_write_en),
    .clk(comb_reg7_clk),
    .reset(comb_reg7_reset),
    .out(comb_reg7_out),
    .done(comb_reg7_done)
  );
  std_reg #(.WIDTH(3)) fsm (
    .in(fsm_in),
    .write_en(fsm_write_en),
    .clk(fsm_clk),
    .reset(fsm_reset),
    .out(fsm_out),
    .done(fsm_done)
  );
  undef #(.WIDTH(1)) ud (
    .out(ud_out)
  );
  std_add #(.WIDTH(3)) adder (
    .left(adder_left),
    .right(adder_right),
    .out(adder_out)
  );
  undef #(.WIDTH(1)) ud0 (
    .out(ud0_out)
  );
  std_add #(.WIDTH(3)) adder0 (
    .left(adder0_left),
    .right(adder0_right),
    .out(adder0_out)
  );
  undef #(.WIDTH(1)) ud1 (
    .out(ud1_out)
  );
  std_add #(.WIDTH(3)) adder1 (
    .left(adder1_left),
    .right(adder1_right),
    .out(adder1_out)
  );
  undef #(.WIDTH(1)) ud2 (
    .out(ud2_out)
  );
  std_add #(.WIDTH(3)) adder2 (
    .left(adder2_left),
    .right(adder2_right),
    .out(adder2_out)
  );
  undef #(.WIDTH(1)) ud3 (
    .out(ud3_out)
  );
  std_add #(.WIDTH(3)) adder3 (
    .left(adder3_left),
    .right(adder3_right),
    .out(adder3_out)
  );
  undef #(.WIDTH(1)) ud4 (
    .out(ud4_out)
  );
  std_add #(.WIDTH(3)) adder4 (
    .left(adder4_left),
    .right(adder4_right),
    .out(adder4_out)
  );
  undef #(.WIDTH(1)) ud5 (
    .out(ud5_out)
  );
  std_add #(.WIDTH(3)) adder5 (
    .left(adder5_left),
    .right(adder5_right),
    .out(adder5_out)
  );
  undef #(.WIDTH(1)) ud6 (
    .out(ud6_out)
  );
  std_add #(.WIDTH(3)) adder6 (
    .left(adder6_left),
    .right(adder6_right),
    .out(adder6_out)
  );
  undef #(.WIDTH(1)) ud7 (
    .out(ud7_out)
  );
  std_add #(.WIDTH(3)) adder7 (
    .left(adder7_left),
    .right(adder7_right),
    .out(adder7_out)
  );
  undef #(.WIDTH(1)) ud8 (
    .out(ud8_out)
  );
  std_add #(.WIDTH(3)) adder8 (
    .left(adder8_left),
    .right(adder8_right),
    .out(adder8_out)
  );
  undef #(.WIDTH(1)) ud9 (
    .out(ud9_out)
  );
  std_add #(.WIDTH(3)) adder9 (
    .left(adder9_left),
    .right(adder9_right),
    .out(adder9_out)
  );
  undef #(.WIDTH(1)) ud10 (
    .out(ud10_out)
  );
  std_add #(.WIDTH(3)) adder10 (
    .left(adder10_left),
    .right(adder10_right),
    .out(adder10_out)
  );
  undef #(.WIDTH(1)) ud11 (
    .out(ud11_out)
  );
  std_add #(.WIDTH(3)) adder11 (
    .left(adder11_left),
    .right(adder11_right),
    .out(adder11_out)
  );
  undef #(.WIDTH(1)) ud12 (
    .out(ud12_out)
  );
  std_add #(.WIDTH(3)) adder12 (
    .left(adder12_left),
    .right(adder12_right),
    .out(adder12_out)
  );
  undef #(.WIDTH(1)) ud13 (
    .out(ud13_out)
  );
  std_add #(.WIDTH(3)) adder13 (
    .left(adder13_left),
    .right(adder13_right),
    .out(adder13_out)
  );
  undef #(.WIDTH(1)) ud14 (
    .out(ud14_out)
  );
  std_add #(.WIDTH(3)) adder14 (
    .left(adder14_left),
    .right(adder14_right),
    .out(adder14_out)
  );
  undef #(.WIDTH(1)) ud15 (
    .out(ud15_out)
  );
  std_add #(.WIDTH(3)) adder15 (
    .left(adder15_left),
    .right(adder15_right),
    .out(adder15_out)
  );
  undef #(.WIDTH(1)) ud16 (
    .out(ud16_out)
  );
  std_add #(.WIDTH(3)) adder16 (
    .left(adder16_left),
    .right(adder16_right),
    .out(adder16_out)
  );
  std_reg #(.WIDTH(1)) signal_reg (
    .in(signal_reg_in),
    .write_en(signal_reg_write_en),
    .clk(signal_reg_clk),
    .reset(signal_reg_reset),
    .out(signal_reg_out),
    .done(signal_reg_done)
  );
  std_reg #(.WIDTH(2)) fsm0 (
    .in(fsm0_in),
    .write_en(fsm0_write_en),
    .clk(fsm0_clk),
    .reset(fsm0_reset),
    .out(fsm0_out),
    .done(fsm0_done)
  );
  std_reg #(.WIDTH(1)) pd (
    .in(pd_in),
    .write_en(pd_write_en),
    .clk(pd_clk),
    .reset(pd_reset),
    .out(pd_out),
    .done(pd_done)
  );
  std_reg #(.WIDTH(2)) fsm1 (
    .in(fsm1_in),
    .write_en(fsm1_write_en),
    .clk(fsm1_clk),
    .reset(fsm1_reset),
    .out(fsm1_out),
    .done(fsm1_done)
  );
  std_reg #(.WIDTH(1)) pd0 (
    .in(pd0_in),
    .write_en(pd0_write_en),
    .clk(pd0_clk),
    .reset(pd0_reset),
    .out(pd0_out),
    .done(pd0_done)
  );
  std_reg #(.WIDTH(2)) fsm2 (
    .in(fsm2_in),
    .write_en(fsm2_write_en),
    .clk(fsm2_clk),
    .reset(fsm2_reset),
    .out(fsm2_out),
    .done(fsm2_done)
  );
  std_reg #(.WIDTH(1)) pd1 (
    .in(pd1_in),
    .write_en(pd1_write_en),
    .clk(pd1_clk),
    .reset(pd1_reset),
    .out(pd1_out),
    .done(pd1_done)
  );
  std_reg #(.WIDTH(2)) fsm3 (
    .in(fsm3_in),
    .write_en(fsm3_write_en),
    .clk(fsm3_clk),
    .reset(fsm3_reset),
    .out(fsm3_out),
    .done(fsm3_done)
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
  std_reg #(.WIDTH(2)) fsm5 (
    .in(fsm5_in),
    .write_en(fsm5_write_en),
    .clk(fsm5_clk),
    .reset(fsm5_reset),
    .out(fsm5_out),
    .done(fsm5_done)
  );
  std_reg #(.WIDTH(1)) pd4 (
    .in(pd4_in),
    .write_en(pd4_write_en),
    .clk(pd4_clk),
    .reset(pd4_reset),
    .out(pd4_out),
    .done(pd4_done)
  );
  std_reg #(.WIDTH(6)) fsm6 (
    .in(fsm6_in),
    .write_en(fsm6_write_en),
    .clk(fsm6_clk),
    .reset(fsm6_reset),
    .out(fsm6_out),
    .done(fsm6_done)
  );
  std_wire #(.WIDTH(1)) beg_spl_let11_go (
    .in(beg_spl_let11_go_in),
    .out(beg_spl_let11_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let11_done (
    .in(beg_spl_let11_done_in),
    .out(beg_spl_let11_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let12_go (
    .in(beg_spl_let12_go_in),
    .out(beg_spl_let12_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let12_done (
    .in(beg_spl_let12_done_in),
    .out(beg_spl_let12_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let15_go (
    .in(beg_spl_let15_go_in),
    .out(beg_spl_let15_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let15_done (
    .in(beg_spl_let15_done_in),
    .out(beg_spl_let15_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let19_go (
    .in(beg_spl_let19_go_in),
    .out(beg_spl_let19_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let19_done (
    .in(beg_spl_let19_done_in),
    .out(beg_spl_let19_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let20_go (
    .in(beg_spl_let20_go_in),
    .out(beg_spl_let20_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let20_done (
    .in(beg_spl_let20_done_in),
    .out(beg_spl_let20_done_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let23_go (
    .in(beg_spl_let23_go_in),
    .out(beg_spl_let23_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let23_done (
    .in(beg_spl_let23_done_in),
    .out(beg_spl_let23_done_out)
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
  std_wire #(.WIDTH(1)) beg_spl_let7_go (
    .in(beg_spl_let7_go_in),
    .out(beg_spl_let7_go_out)
  );
  std_wire #(.WIDTH(1)) beg_spl_let7_done (
    .in(beg_spl_let7_done_in),
    .out(beg_spl_let7_done_out)
  );
  std_wire #(.WIDTH(1)) invoke0_go (
    .in(invoke0_go_in),
    .out(invoke0_go_out)
  );
  std_wire #(.WIDTH(1)) invoke0_done (
    .in(invoke0_done_in),
    .out(invoke0_done_out)
  );
  std_wire #(.WIDTH(1)) invoke1_go (
    .in(invoke1_go_in),
    .out(invoke1_go_out)
  );
  std_wire #(.WIDTH(1)) invoke1_done (
    .in(invoke1_done_in),
    .out(invoke1_done_out)
  );
  std_wire #(.WIDTH(1)) invoke3_go (
    .in(invoke3_go_in),
    .out(invoke3_go_out)
  );
  std_wire #(.WIDTH(1)) invoke3_done (
    .in(invoke3_done_in),
    .out(invoke3_done_out)
  );
  std_wire #(.WIDTH(1)) invoke4_go (
    .in(invoke4_go_in),
    .out(invoke4_go_out)
  );
  std_wire #(.WIDTH(1)) invoke4_done (
    .in(invoke4_done_in),
    .out(invoke4_done_out)
  );
  std_wire #(.WIDTH(1)) invoke8_go (
    .in(invoke8_go_in),
    .out(invoke8_go_out)
  );
  std_wire #(.WIDTH(1)) invoke8_done (
    .in(invoke8_done_in),
    .out(invoke8_done_out)
  );
  std_wire #(.WIDTH(1)) invoke10_go (
    .in(invoke10_go_in),
    .out(invoke10_go_out)
  );
  std_wire #(.WIDTH(1)) invoke10_done (
    .in(invoke10_done_in),
    .out(invoke10_done_out)
  );
  std_wire #(.WIDTH(1)) invoke11_go (
    .in(invoke11_go_in),
    .out(invoke11_go_out)
  );
  std_wire #(.WIDTH(1)) invoke11_done (
    .in(invoke11_done_in),
    .out(invoke11_done_out)
  );
  std_wire #(.WIDTH(1)) invoke12_go (
    .in(invoke12_go_in),
    .out(invoke12_go_out)
  );
  std_wire #(.WIDTH(1)) invoke12_done (
    .in(invoke12_done_in),
    .out(invoke12_done_out)
  );
  std_wire #(.WIDTH(1)) invoke13_go (
    .in(invoke13_go_in),
    .out(invoke13_go_out)
  );
  std_wire #(.WIDTH(1)) invoke13_done (
    .in(invoke13_done_in),
    .out(invoke13_done_out)
  );
  std_wire #(.WIDTH(1)) invoke15_go (
    .in(invoke15_go_in),
    .out(invoke15_go_out)
  );
  std_wire #(.WIDTH(1)) invoke15_done (
    .in(invoke15_done_in),
    .out(invoke15_done_out)
  );
  std_wire #(.WIDTH(1)) invoke16_go (
    .in(invoke16_go_in),
    .out(invoke16_go_out)
  );
  std_wire #(.WIDTH(1)) invoke16_done (
    .in(invoke16_done_in),
    .out(invoke16_done_out)
  );
  std_wire #(.WIDTH(1)) invoke20_go (
    .in(invoke20_go_in),
    .out(invoke20_go_out)
  );
  std_wire #(.WIDTH(1)) invoke20_done (
    .in(invoke20_done_in),
    .out(invoke20_done_out)
  );
  std_wire #(.WIDTH(1)) invoke22_go (
    .in(invoke22_go_in),
    .out(invoke22_go_out)
  );
  std_wire #(.WIDTH(1)) invoke22_done (
    .in(invoke22_done_in),
    .out(invoke22_done_out)
  );
  std_wire #(.WIDTH(1)) invoke23_go (
    .in(invoke23_go_in),
    .out(invoke23_go_out)
  );
  std_wire #(.WIDTH(1)) invoke23_done (
    .in(invoke23_done_in),
    .out(invoke23_done_out)
  );
  std_wire #(.WIDTH(1)) invoke24_go (
    .in(invoke24_go_in),
    .out(invoke24_go_out)
  );
  std_wire #(.WIDTH(1)) invoke24_done (
    .in(invoke24_done_in),
    .out(invoke24_done_out)
  );
  std_wire #(.WIDTH(1)) invoke25_go (
    .in(invoke25_go_in),
    .out(invoke25_go_out)
  );
  std_wire #(.WIDTH(1)) invoke25_done (
    .in(invoke25_done_in),
    .out(invoke25_done_out)
  );
  std_wire #(.WIDTH(1)) invoke27_go (
    .in(invoke27_go_in),
    .out(invoke27_go_out)
  );
  std_wire #(.WIDTH(1)) invoke27_done (
    .in(invoke27_done_in),
    .out(invoke27_done_out)
  );
  std_wire #(.WIDTH(1)) invoke28_go (
    .in(invoke28_go_in),
    .out(invoke28_go_out)
  );
  std_wire #(.WIDTH(1)) invoke28_done (
    .in(invoke28_done_in),
    .out(invoke28_done_out)
  );
  std_wire #(.WIDTH(1)) invoke32_go (
    .in(invoke32_go_in),
    .out(invoke32_go_out)
  );
  std_wire #(.WIDTH(1)) invoke32_done (
    .in(invoke32_done_in),
    .out(invoke32_done_out)
  );
  std_wire #(.WIDTH(1)) invoke34_go (
    .in(invoke34_go_in),
    .out(invoke34_go_out)
  );
  std_wire #(.WIDTH(1)) invoke34_done (
    .in(invoke34_done_in),
    .out(invoke34_done_out)
  );
  std_wire #(.WIDTH(1)) invoke35_go (
    .in(invoke35_go_in),
    .out(invoke35_go_out)
  );
  std_wire #(.WIDTH(1)) invoke35_done (
    .in(invoke35_done_in),
    .out(invoke35_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond00_go (
    .in(early_reset_cond00_go_in),
    .out(early_reset_cond00_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond00_done (
    .in(early_reset_cond00_done_in),
    .out(early_reset_cond00_done_out)
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
  std_wire #(.WIDTH(1)) early_reset_cond30_go (
    .in(early_reset_cond30_go_in),
    .out(early_reset_cond30_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond30_done (
    .in(early_reset_cond30_done_in),
    .out(early_reset_cond30_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond40_go (
    .in(early_reset_cond40_go_in),
    .out(early_reset_cond40_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond40_done (
    .in(early_reset_cond40_done_in),
    .out(early_reset_cond40_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond50_go (
    .in(early_reset_cond50_go_in),
    .out(early_reset_cond50_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond50_done (
    .in(early_reset_cond50_done_in),
    .out(early_reset_cond50_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond60_go (
    .in(early_reset_cond60_go_in),
    .out(early_reset_cond60_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond60_done (
    .in(early_reset_cond60_done_in),
    .out(early_reset_cond60_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond70_go (
    .in(early_reset_cond70_go_in),
    .out(early_reset_cond70_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond70_done (
    .in(early_reset_cond70_done_in),
    .out(early_reset_cond70_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond80_go (
    .in(early_reset_cond80_go_in),
    .out(early_reset_cond80_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_cond80_done (
    .in(early_reset_cond80_done_in),
    .out(early_reset_cond80_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par_go (
    .in(early_reset_static_par_go_in),
    .out(early_reset_static_par_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par_done (
    .in(early_reset_static_par_done_in),
    .out(early_reset_static_par_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq_go (
    .in(early_reset_static_seq_go_in),
    .out(early_reset_static_seq_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq_done (
    .in(early_reset_static_seq_done_in),
    .out(early_reset_static_seq_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par0_go (
    .in(early_reset_static_par0_go_in),
    .out(early_reset_static_par0_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par0_done (
    .in(early_reset_static_par0_done_in),
    .out(early_reset_static_par0_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par1_go (
    .in(early_reset_static_par1_go_in),
    .out(early_reset_static_par1_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par1_done (
    .in(early_reset_static_par1_done_in),
    .out(early_reset_static_par1_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq0_go (
    .in(early_reset_static_seq0_go_in),
    .out(early_reset_static_seq0_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq0_done (
    .in(early_reset_static_seq0_done_in),
    .out(early_reset_static_seq0_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par2_go (
    .in(early_reset_static_par2_go_in),
    .out(early_reset_static_par2_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par2_done (
    .in(early_reset_static_par2_done_in),
    .out(early_reset_static_par2_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par3_go (
    .in(early_reset_static_par3_go_in),
    .out(early_reset_static_par3_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par3_done (
    .in(early_reset_static_par3_done_in),
    .out(early_reset_static_par3_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq1_go (
    .in(early_reset_static_seq1_go_in),
    .out(early_reset_static_seq1_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_seq1_done (
    .in(early_reset_static_seq1_done_in),
    .out(early_reset_static_seq1_done_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par4_go (
    .in(early_reset_static_par4_go_in),
    .out(early_reset_static_par4_go_out)
  );
  std_wire #(.WIDTH(1)) early_reset_static_par4_done (
    .in(early_reset_static_par4_done_in),
    .out(early_reset_static_par4_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond00_go (
    .in(wrapper_early_reset_cond00_go_in),
    .out(wrapper_early_reset_cond00_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond00_done (
    .in(wrapper_early_reset_cond00_done_in),
    .out(wrapper_early_reset_cond00_done_out)
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
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq_go (
    .in(wrapper_early_reset_static_seq_go_in),
    .out(wrapper_early_reset_static_seq_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq_done (
    .in(wrapper_early_reset_static_seq_done_in),
    .out(wrapper_early_reset_static_seq_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par0_go (
    .in(wrapper_early_reset_static_par0_go_in),
    .out(wrapper_early_reset_static_par0_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par0_done (
    .in(wrapper_early_reset_static_par0_done_in),
    .out(wrapper_early_reset_static_par0_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond30_go (
    .in(wrapper_early_reset_cond30_go_in),
    .out(wrapper_early_reset_cond30_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond30_done (
    .in(wrapper_early_reset_cond30_done_in),
    .out(wrapper_early_reset_cond30_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond40_go (
    .in(wrapper_early_reset_cond40_go_in),
    .out(wrapper_early_reset_cond40_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond40_done (
    .in(wrapper_early_reset_cond40_done_in),
    .out(wrapper_early_reset_cond40_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par1_go (
    .in(wrapper_early_reset_static_par1_go_in),
    .out(wrapper_early_reset_static_par1_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par1_done (
    .in(wrapper_early_reset_static_par1_done_in),
    .out(wrapper_early_reset_static_par1_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond50_go (
    .in(wrapper_early_reset_cond50_go_in),
    .out(wrapper_early_reset_cond50_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond50_done (
    .in(wrapper_early_reset_cond50_done_in),
    .out(wrapper_early_reset_cond50_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq0_go (
    .in(wrapper_early_reset_static_seq0_go_in),
    .out(wrapper_early_reset_static_seq0_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq0_done (
    .in(wrapper_early_reset_static_seq0_done_in),
    .out(wrapper_early_reset_static_seq0_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par2_go (
    .in(wrapper_early_reset_static_par2_go_in),
    .out(wrapper_early_reset_static_par2_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par2_done (
    .in(wrapper_early_reset_static_par2_done_in),
    .out(wrapper_early_reset_static_par2_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond60_go (
    .in(wrapper_early_reset_cond60_go_in),
    .out(wrapper_early_reset_cond60_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond60_done (
    .in(wrapper_early_reset_cond60_done_in),
    .out(wrapper_early_reset_cond60_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond70_go (
    .in(wrapper_early_reset_cond70_go_in),
    .out(wrapper_early_reset_cond70_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond70_done (
    .in(wrapper_early_reset_cond70_done_in),
    .out(wrapper_early_reset_cond70_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par3_go (
    .in(wrapper_early_reset_static_par3_go_in),
    .out(wrapper_early_reset_static_par3_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par3_done (
    .in(wrapper_early_reset_static_par3_done_in),
    .out(wrapper_early_reset_static_par3_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond80_go (
    .in(wrapper_early_reset_cond80_go_in),
    .out(wrapper_early_reset_cond80_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_cond80_done (
    .in(wrapper_early_reset_cond80_done_in),
    .out(wrapper_early_reset_cond80_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq1_go (
    .in(wrapper_early_reset_static_seq1_go_in),
    .out(wrapper_early_reset_static_seq1_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_seq1_done (
    .in(wrapper_early_reset_static_seq1_done_in),
    .out(wrapper_early_reset_static_seq1_done_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par4_go (
    .in(wrapper_early_reset_static_par4_go_in),
    .out(wrapper_early_reset_static_par4_go_out)
  );
  std_wire #(.WIDTH(1)) wrapper_early_reset_static_par4_done (
    .in(wrapper_early_reset_static_par4_done_in),
    .out(wrapper_early_reset_static_par4_done_out)
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
  std_wire #(.WIDTH(1)) par1_go (
    .in(par1_go_in),
    .out(par1_go_out)
  );
  std_wire #(.WIDTH(1)) par1_done (
    .in(par1_done_in),
    .out(par1_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc1_go (
    .in(tdcc1_go_in),
    .out(tdcc1_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc1_done (
    .in(tdcc1_done_in),
    .out(tdcc1_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc2_go (
    .in(tdcc2_go_in),
    .out(tdcc2_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc2_done (
    .in(tdcc2_done_in),
    .out(tdcc2_done_out)
  );
  std_wire #(.WIDTH(1)) par2_go (
    .in(par2_go_in),
    .out(par2_go_out)
  );
  std_wire #(.WIDTH(1)) par2_done (
    .in(par2_done_in),
    .out(par2_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc3_go (
    .in(tdcc3_go_in),
    .out(tdcc3_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc3_done (
    .in(tdcc3_done_in),
    .out(tdcc3_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc4_go (
    .in(tdcc4_go_in),
    .out(tdcc4_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc4_done (
    .in(tdcc4_done_in),
    .out(tdcc4_done_out)
  );
  std_wire #(.WIDTH(1)) tdcc5_go (
    .in(tdcc5_go_in),
    .out(tdcc5_go_out)
  );
  std_wire #(.WIDTH(1)) tdcc5_done (
    .in(tdcc5_done_in),
    .out(tdcc5_done_out)
  );
  assign done = tdcc5_done_out; // @[]
  assign A_int_addr0 = beg_spl_let3_go_out ? i0_out : 4'h0; // @[]
  assign A_int_addr1 = beg_spl_let3_go_out ? k0_out : 4'h0; // @[]
  assign A_int_write_en = 1'h0;
  assign A_int_write_data = 32'h0;
  assign A_int_read_en = beg_spl_let3_go_out; // @[]
  assign B_int_addr0 = beg_spl_let4_go_out ? k0_out : 4'h0; // @[]
  assign B_int_addr1 = beg_spl_let4_go_out ? j0_out : 4'h0; // @[]
  assign B_int_write_en = 1'h0;
  assign B_int_write_data = 32'h0;
  assign B_int_read_en = beg_spl_let4_go_out; // @[]
  assign C_int_addr0 = beg_spl_let11_go_out ? i0_out : 4'h0; // @[]
  assign C_int_addr1 = beg_spl_let11_go_out ? k0_out : 4'h0; // @[]
  assign C_int_write_en = 1'h0;
  assign C_int_write_data = 32'h0;
  assign C_int_read_en = beg_spl_let11_go_out; // @[]
  assign D_int_addr0 = beg_spl_let12_go_out ? k0_out : 4'h0; // @[]
  assign D_int_addr1 = beg_spl_let12_go_out ? j0_out : 4'h0; // @[]
  assign D_int_write_en = 1'h0;
  assign D_int_write_data = 32'h0;
  assign D_int_read_en = beg_spl_let12_go_out; // @[]
  assign E_int_addr0 = beg_spl_let19_go_out | beg_spl_let7_go_out | early_reset_static_par_go_out |
    early_reset_static_par0_go_out ? i0_out : 4'h0; // @[]
  assign E_int_addr1 = beg_spl_let19_go_out ? k0_out : _GEN_29; // @[]
  assign E_int_write_en = early_reset_static_par_go_out | early_reset_static_par0_go_out; // @[]
  assign E_int_write_data = early_reset_static_par_go_out ? const14_out : _GEN_40; // @[]
  assign E_int_read_en = beg_spl_let19_go_out | beg_spl_let7_go_out; // @[]
  assign F_int_addr0 = beg_spl_let20_go_out ? k0_out : _GEN_25; // @[]
  assign F_int_addr1 = beg_spl_let15_go_out | beg_spl_let20_go_out | early_reset_static_par1_go_out |
    early_reset_static_par2_go_out ? j0_out : 4'h0; // @[]
  assign F_int_write_en = early_reset_static_par1_go_out | early_reset_static_par2_go_out; // @[]
  assign F_int_write_data = early_reset_static_par1_go_out ? const14_out : _GEN_35; // @[]
  assign F_int_read_en = beg_spl_let15_go_out | beg_spl_let20_go_out; // @[]
  assign G_int_addr0 = beg_spl_let23_go_out | early_reset_static_par3_go_out | early_reset_static_par4_go_out ? i0_out
     : 4'h0; // @[]
  assign G_int_addr1 = beg_spl_let23_go_out | early_reset_static_par3_go_out | early_reset_static_par4_go_out ? j0_out
     : 4'h0; // @[]
  assign G_int_write_en = early_reset_static_par3_go_out | early_reset_static_par4_go_out; // @[]
  assign G_int_write_data = early_reset_static_par3_go_out ? const14_out : _GEN_21; // @[]
  assign G_int_read_en = beg_spl_let23_go_out; // @[]
  assign add0_left = early_reset_static_par0_go_out | early_reset_static_par2_go_out | early_reset_static_par4_go_out ?
    bin_read0_0_out : 32'h0; // @[]
  assign add0_right = early_reset_static_par0_go_out | early_reset_static_par2_go_out | early_reset_static_par4_go_out
     ? v_0_out : 32'h0; // @[]
  assign add1_left = early_reset_static_par0_go_out | early_reset_static_par2_go_out | early_reset_static_par4_go_out ?
    k0_out : _GEN_15; // @[]
  assign add1_right = invoke10_go_out | invoke11_go_out | invoke22_go_out | invoke23_go_out | invoke34_go_out |
    invoke35_go_out | early_reset_static_par0_go_out | early_reset_static_par2_go_out | early_reset_static_par4_go_out
     ? const17_out : 4'h0; // @[]
  assign bin_read0_0_in = fsm_out == 3'h3 & early_reset_static_seq_go_out | fsm_out == 3'h3 &
    early_reset_static_seq0_go_out | fsm_out == 3'h3 & early_reset_static_seq1_go_out ? mult_pipe0_out : _GEN_267; // @[]
  assign bin_read0_0_write_en = invoke3_go_out | invoke8_go_out | invoke15_go_out | invoke20_go_out | invoke27_go_out |
    invoke32_go_out | fsm_out == 3'h3 & early_reset_static_seq_go_out | fsm_out == 3'h3 & early_reset_static_seq0_go_out
     | fsm_out == 3'h3 & early_reset_static_seq1_go_out; // @[]
  assign bin_read0_0_clk = clk;
  assign bin_read0_0_reset = reset;
  assign i0_in = invoke0_go_out | invoke12_go_out | invoke24_go_out ? const0_out : _GEN_1; // @[]
  assign i0_write_en = invoke0_go_out | invoke11_go_out | invoke12_go_out | invoke23_go_out | invoke24_go_out |
    invoke35_go_out; // @[]
  assign i0_clk = clk;
  assign i0_reset = reset;
  assign j0_in = invoke1_go_out | invoke13_go_out | invoke25_go_out ? const0_out : _GEN_270; // @[]
  assign j0_write_en = invoke1_go_out | invoke10_go_out | invoke13_go_out | invoke22_go_out | invoke25_go_out |
    invoke34_go_out; // @[]
  assign j0_clk = clk;
  assign j0_reset = reset;
  assign k0_in = early_reset_static_par_go_out | early_reset_static_par1_go_out | early_reset_static_par3_go_out ?
    const0_out : _GEN_273; // @[]
  assign k0_write_en = early_reset_static_par_go_out | early_reset_static_par0_go_out | early_reset_static_par1_go_out
     | early_reset_static_par2_go_out | early_reset_static_par3_go_out | early_reset_static_par4_go_out; // @[]
  assign k0_clk = clk;
  assign k0_reset = reset;
  assign le0_left = early_reset_cond20_go_out | early_reset_cond50_go_out | early_reset_cond80_go_out ? k0_out :
    _GEN_232; // @[]
  assign le0_right = early_reset_cond00_go_out | early_reset_cond10_go_out | early_reset_cond20_go_out |
    early_reset_cond30_go_out | early_reset_cond40_go_out | early_reset_cond50_go_out | early_reset_cond60_go_out |
    early_reset_cond70_go_out | early_reset_cond80_go_out ? const1_out : 4'h0; // @[]
  assign mult_pipe0_clk = clk;
  assign mult_pipe0_reset = reset;
  assign mult_pipe0_go = fsm_out < 3'h3 & early_reset_static_seq_go_out | fsm_out < 3'h3 &
    early_reset_static_seq0_go_out | fsm_out < 3'h3 & early_reset_static_seq1_go_out; // @[]
  assign mult_pipe0_left = fsm_out < 3'h3 & early_reset_static_seq_go_out | fsm_out < 3'h3 &
    early_reset_static_seq0_go_out | fsm_out < 3'h3 & early_reset_static_seq1_go_out ? bin_read0_0_out : 32'h0; // @[]
  assign mult_pipe0_right = fsm_out < 3'h3 & early_reset_static_seq_go_out | fsm_out < 3'h3 &
    early_reset_static_seq0_go_out | fsm_out < 3'h3 & early_reset_static_seq1_go_out ? v_0_out : 32'h0; // @[]
  assign v_0_in = fsm_out == 3'h4 & early_reset_static_seq_go_out | fsm_out == 3'h4 & early_reset_static_seq0_go_out |
    fsm_out == 3'h4 & early_reset_static_seq1_go_out ? bin_read0_0_out : _GEN_6; // @[]
  assign v_0_write_en = invoke4_go_out | invoke16_go_out | invoke28_go_out | fsm_out == 3'h4 &
    early_reset_static_seq_go_out | fsm_out == 3'h4 & early_reset_static_seq0_go_out | fsm_out == 3'h4 &
    early_reset_static_seq1_go_out; // @[]
  assign v_0_clk = clk;
  assign v_0_reset = reset;
  assign comb_reg_in = early_reset_cond00_go_out & le0_out; // @[]
  assign comb_reg_write_en = early_reset_cond00_go_out; // @[]
  assign comb_reg_clk = clk;
  assign comb_reg_reset = reset;
  assign comb_reg0_in = early_reset_cond10_go_out & le0_out; // @[]
  assign comb_reg0_write_en = early_reset_cond10_go_out; // @[]
  assign comb_reg0_clk = clk;
  assign comb_reg0_reset = reset;
  assign comb_reg1_in = early_reset_cond20_go_out & le0_out; // @[]
  assign comb_reg1_write_en = early_reset_cond20_go_out; // @[]
  assign comb_reg1_clk = clk;
  assign comb_reg1_reset = reset;
  assign comb_reg2_in = early_reset_cond30_go_out & le0_out; // @[]
  assign comb_reg2_write_en = early_reset_cond30_go_out; // @[]
  assign comb_reg2_clk = clk;
  assign comb_reg2_reset = reset;
  assign comb_reg3_in = early_reset_cond40_go_out & le0_out; // @[]
  assign comb_reg3_write_en = early_reset_cond40_go_out; // @[]
  assign comb_reg3_clk = clk;
  assign comb_reg3_reset = reset;
  assign comb_reg4_in = early_reset_cond50_go_out & le0_out; // @[]
  assign comb_reg4_write_en = early_reset_cond50_go_out; // @[]
  assign comb_reg4_clk = clk;
  assign comb_reg4_reset = reset;
  assign comb_reg5_in = early_reset_cond60_go_out & le0_out; // @[]
  assign comb_reg5_write_en = early_reset_cond60_go_out; // @[]
  assign comb_reg5_clk = clk;
  assign comb_reg5_reset = reset;
  assign comb_reg6_in = early_reset_cond70_go_out & le0_out; // @[]
  assign comb_reg6_write_en = early_reset_cond70_go_out; // @[]
  assign comb_reg6_clk = clk;
  assign comb_reg6_reset = reset;
  assign comb_reg7_in = early_reset_cond80_go_out & le0_out; // @[]
  assign comb_reg7_write_en = early_reset_cond80_go_out; // @[]
  assign comb_reg7_clk = clk;
  assign comb_reg7_reset = reset;
  assign fsm_in = fsm_out != 3'h4 & early_reset_static_seq_go_out ? adder9_out : _GEN_69; // @[]
  assign fsm_write_en = early_reset_cond00_go_out | early_reset_cond10_go_out | early_reset_cond20_go_out |
    early_reset_cond30_go_out | early_reset_cond40_go_out | early_reset_cond50_go_out | early_reset_cond60_go_out |
    early_reset_cond70_go_out | early_reset_cond80_go_out | early_reset_static_par_go_out |
    early_reset_static_seq_go_out | early_reset_static_par0_go_out | early_reset_static_par1_go_out |
    early_reset_static_seq0_go_out | early_reset_static_par2_go_out | early_reset_static_par3_go_out |
    early_reset_static_seq1_go_out | early_reset_static_par4_go_out; // @[]
  assign fsm_clk = clk;
  assign fsm_reset = reset;
  assign adder_left = early_reset_cond00_go_out ? fsm_out : 3'h0; // @[]
  assign adder_right = {{2'd0}, _GEN_72};
  assign adder0_left = early_reset_cond10_go_out ? fsm_out : 3'h0; // @[]
  assign adder0_right = {{2'd0}, _GEN_178};
  assign adder1_left = early_reset_cond20_go_out ? fsm_out : 3'h0; // @[]
  assign adder1_right = {{2'd0}, _GEN_9};
  assign adder2_left = early_reset_cond30_go_out ? fsm_out : 3'h0; // @[]
  assign adder2_right = {{2'd0}, _GEN_193};
  assign adder3_left = early_reset_cond40_go_out ? fsm_out : 3'h0; // @[]
  assign adder3_right = {{2'd0}, _GEN_209};
  assign adder4_left = early_reset_cond50_go_out ? fsm_out : 3'h0; // @[]
  assign adder4_right = {{2'd0}, _GEN_137};
  assign adder5_left = early_reset_cond60_go_out ? fsm_out : 3'h0; // @[]
  assign adder5_right = {{2'd0}, _GEN_211};
  assign adder6_left = early_reset_cond70_go_out ? fsm_out : 3'h0; // @[]
  assign adder6_right = {{2'd0}, _GEN_180};
  assign adder7_left = early_reset_cond80_go_out ? fsm_out : 3'h0; // @[]
  assign adder7_right = {{2'd0}, _GEN_206};
  assign adder8_left = early_reset_static_par_go_out ? fsm_out : 3'h0; // @[]
  assign adder8_right = {{2'd0}, _GEN_237};
  assign adder9_left = early_reset_static_seq_go_out ? fsm_out : 3'h0; // @[]
  assign adder9_right = {{2'd0}, _GEN_304};
  assign adder10_left = early_reset_static_par0_go_out ? fsm_out : 3'h0; // @[]
  assign adder10_right = {{2'd0}, _GEN_74};
  assign adder11_left = early_reset_static_par1_go_out ? fsm_out : 3'h0; // @[]
  assign adder11_right = {{2'd0}, _GEN_221};
  assign adder12_left = early_reset_static_seq0_go_out ? fsm_out : 3'h0; // @[]
  assign adder12_right = {{2'd0}, _GEN_76};
  assign adder13_left = early_reset_static_par2_go_out ? fsm_out : 3'h0; // @[]
  assign adder13_right = {{2'd0}, _GEN_151};
  assign adder14_left = early_reset_static_par3_go_out ? fsm_out : 3'h0; // @[]
  assign adder14_right = {{2'd0}, _GEN_239};
  assign adder15_left = early_reset_static_seq1_go_out ? fsm_out : 3'h0; // @[]
  assign adder15_right = {{2'd0}, _GEN_153};
  assign adder16_left = early_reset_static_par4_go_out ? fsm_out : 3'h0; // @[]
  assign adder16_right = {{2'd0}, _GEN_277};
  assign signal_reg_in = fsm_out == 3'h0 & signal_reg_out ? 1'h0 : _GEN_1352 | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond70_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par3_go_out |
    fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond80_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_seq1_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par4_go_out; // @[]
  assign signal_reg_write_en = _GEN_1269 | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par3_go_out |
    fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond80_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_seq1_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_par4_go_out; // @[]
  assign signal_reg_clk = clk;
  assign signal_reg_reset = reset;
  assign fsm0_in = fsm0_out == 2'h1 & invoke3_done_out & tdcc_go_out ? 2'h2 : {{1'd0}, _GEN_198}; // @[]
  assign fsm0_write_en = fsm0_out == 2'h2 | fsm0_out == 2'h0 & beg_spl_let3_done_out & tdcc_go_out | fsm0_out == 2'h1 &
    invoke3_done_out & tdcc_go_out; // @[]
  assign fsm0_clk = clk;
  assign fsm0_reset = reset;
  assign pd_in = pd_out & pd0_out ? 1'h0 : tdcc_done_out & par0_go_out; // @[]
  assign pd_write_en = pd_out & pd0_out | tdcc_done_out & par0_go_out; // @[]
  assign pd_clk = clk;
  assign pd_reset = reset;
  assign fsm1_in = fsm1_out == 2'h1 & invoke4_done_out & tdcc0_go_out ? 2'h2 : {{1'd0}, _GEN_161}; // @[]
  assign fsm1_write_en = fsm1_out == 2'h2 | fsm1_out == 2'h0 & beg_spl_let4_done_out & tdcc0_go_out | fsm1_out == 2'h1
     & invoke4_done_out & tdcc0_go_out; // @[]
  assign fsm1_clk = clk;
  assign fsm1_reset = reset;
  assign pd0_in = pd_out & pd0_out ? 1'h0 : tdcc0_done_out & par0_go_out; // @[]
  assign pd0_write_en = pd_out & pd0_out | tdcc0_done_out & par0_go_out; // @[]
  assign pd0_clk = clk;
  assign pd0_reset = reset;
  assign fsm2_in = fsm2_out == 2'h1 & invoke15_done_out & tdcc1_go_out ? 2'h2 : {{1'd0}, _GEN_202}; // @[]
  assign fsm2_write_en = fsm2_out == 2'h2 | fsm2_out == 2'h0 & beg_spl_let11_done_out & tdcc1_go_out | fsm2_out == 2'h1
     & invoke15_done_out & tdcc1_go_out; // @[]
  assign fsm2_clk = clk;
  assign fsm2_reset = reset;
  assign pd1_in = pd1_out & pd2_out ? 1'h0 : tdcc1_done_out & par1_go_out; // @[]
  assign pd1_write_en = pd1_out & pd2_out | tdcc1_done_out & par1_go_out; // @[]
  assign pd1_clk = clk;
  assign pd1_reset = reset;
  assign fsm3_in = fsm3_out == 2'h1 & invoke16_done_out & tdcc2_go_out ? 2'h2 : {{1'd0}, _GEN_140}; // @[]
  assign fsm3_write_en = fsm3_out == 2'h2 | fsm3_out == 2'h0 & beg_spl_let12_done_out & tdcc2_go_out | fsm3_out == 2'h1
     & invoke16_done_out & tdcc2_go_out; // @[]
  assign fsm3_clk = clk;
  assign fsm3_reset = reset;
  assign pd2_in = pd1_out & pd2_out ? 1'h0 : tdcc2_done_out & par1_go_out; // @[]
  assign pd2_write_en = pd1_out & pd2_out | tdcc2_done_out & par1_go_out; // @[]
  assign pd2_clk = clk;
  assign pd2_reset = reset;
  assign fsm4_in = fsm4_out == 2'h1 & invoke27_done_out & tdcc3_go_out ? 2'h2 : {{1'd0}, _GEN_165}; // @[]
  assign fsm4_write_en = fsm4_out == 2'h2 | fsm4_out == 2'h0 & beg_spl_let19_done_out & tdcc3_go_out | fsm4_out == 2'h1
     & invoke27_done_out & tdcc3_go_out; // @[]
  assign fsm4_clk = clk;
  assign fsm4_reset = reset;
  assign pd3_in = pd3_out & pd4_out ? 1'h0 : tdcc3_done_out & par2_go_out; // @[]
  assign pd3_write_en = pd3_out & pd4_out | tdcc3_done_out & par2_go_out; // @[]
  assign pd3_clk = clk;
  assign pd3_reset = reset;
  assign fsm5_in = fsm5_out == 2'h1 & invoke28_done_out & tdcc4_go_out ? 2'h2 : {{1'd0}, _GEN_144}; // @[]
  assign fsm5_write_en = fsm5_out == 2'h2 | fsm5_out == 2'h0 & beg_spl_let20_done_out & tdcc4_go_out | fsm5_out == 2'h1
     & invoke28_done_out & tdcc4_go_out; // @[]
  assign fsm5_clk = clk;
  assign fsm5_reset = reset;
  assign pd4_in = pd3_out & pd4_out ? 1'h0 : tdcc4_done_out & par2_go_out; // @[]
  assign pd4_write_en = pd3_out & pd4_out | tdcc4_done_out & par2_go_out; // @[]
  assign pd4_clk = clk;
  assign pd4_reset = reset;
  assign fsm6_in = fsm6_out == 6'h2a & wrapper_early_reset_static_par4_done_out & tdcc5_go_out ? 6'h2b : _GEN_125; // @[]
  assign fsm6_write_en = _GEN_744 | fsm6_out == 6'h2e & invoke35_done_out & tdcc5_go_out | fsm6_out == 6'h21 & (
    wrapper_early_reset_cond60_done_out & ~comb_reg5_out) & tdcc5_go_out | fsm6_out == 6'h2f & (
    wrapper_early_reset_cond60_done_out & ~comb_reg5_out) & tdcc5_go_out; // @[]
  assign fsm6_clk = clk;
  assign fsm6_reset = reset;
  assign beg_spl_let11_go_in = ~beg_spl_let11_done_out & fsm2_out == 2'h0 & tdcc1_go_out; // @[]
  assign beg_spl_let11_done_in = C_int_read_done;
  assign beg_spl_let12_go_in = ~beg_spl_let12_done_out & fsm3_out == 2'h0 & tdcc2_go_out; // @[]
  assign beg_spl_let12_done_in = D_int_read_done;
  assign beg_spl_let15_go_in = ~beg_spl_let15_done_out & fsm6_out == 6'h18 & tdcc5_go_out; // @[]
  assign beg_spl_let15_done_in = F_int_read_done;
  assign beg_spl_let19_go_in = ~beg_spl_let19_done_out & fsm4_out == 2'h0 & tdcc3_go_out; // @[]
  assign beg_spl_let19_done_in = E_int_read_done;
  assign beg_spl_let20_go_in = ~beg_spl_let20_done_out & fsm5_out == 2'h0 & tdcc4_go_out; // @[]
  assign beg_spl_let20_done_in = F_int_read_done;
  assign beg_spl_let23_go_in = ~beg_spl_let23_done_out & fsm6_out == 6'h28 & tdcc5_go_out; // @[]
  assign beg_spl_let23_done_in = G_int_read_done;
  assign beg_spl_let3_go_in = ~beg_spl_let3_done_out & fsm0_out == 2'h0 & tdcc_go_out; // @[]
  assign beg_spl_let3_done_in = A_int_read_done;
  assign beg_spl_let4_go_in = ~beg_spl_let4_done_out & fsm1_out == 2'h0 & tdcc0_go_out; // @[]
  assign beg_spl_let4_done_in = B_int_read_done;
  assign beg_spl_let7_go_in = ~beg_spl_let7_done_out & fsm6_out == 6'h8 & tdcc5_go_out; // @[]
  assign beg_spl_let7_done_in = E_int_read_done;
  assign invoke0_go_in = ~invoke0_done_out & fsm6_out == 6'h0 & tdcc5_go_out; // @[]
  assign invoke0_done_in = i0_done;
  assign invoke1_go_in = ~invoke1_done_out & fsm6_out == 6'h2 & tdcc5_go_out; // @[]
  assign invoke1_done_in = j0_done;
  assign invoke3_go_in = ~invoke3_done_out & fsm0_out == 2'h1 & tdcc_go_out; // @[]
  assign invoke3_done_in = bin_read0_0_done;
  assign invoke4_go_in = ~invoke4_done_out & fsm1_out == 2'h1 & tdcc0_go_out; // @[]
  assign invoke4_done_in = v_0_done;
  assign invoke8_go_in = ~invoke8_done_out & fsm6_out == 6'h9 & tdcc5_go_out; // @[]
  assign invoke8_done_in = bin_read0_0_done;
  assign invoke10_go_in = ~invoke10_done_out & fsm6_out == 6'hc & tdcc5_go_out; // @[]
  assign invoke10_done_in = j0_done;
  assign invoke11_go_in = ~invoke11_done_out & fsm6_out == 6'he & tdcc5_go_out; // @[]
  assign invoke11_done_in = i0_done;
  assign invoke12_go_in = ~invoke12_done_out & fsm6_out == 6'h10 & tdcc5_go_out; // @[]
  assign invoke12_done_in = i0_done;
  assign invoke13_go_in = ~invoke13_done_out & fsm6_out == 6'h12 & tdcc5_go_out; // @[]
  assign invoke13_done_in = j0_done;
  assign invoke15_go_in = ~invoke15_done_out & fsm2_out == 2'h1 & tdcc1_go_out; // @[]
  assign invoke15_done_in = bin_read0_0_done;
  assign invoke16_go_in = ~invoke16_done_out & fsm3_out == 2'h1 & tdcc2_go_out; // @[]
  assign invoke16_done_in = v_0_done;
  assign invoke20_go_in = ~invoke20_done_out & fsm6_out == 6'h19 & tdcc5_go_out; // @[]
  assign invoke20_done_in = bin_read0_0_done;
  assign invoke22_go_in = ~invoke22_done_out & fsm6_out == 6'h1c & tdcc5_go_out; // @[]
  assign invoke22_done_in = j0_done;
  assign invoke23_go_in = ~invoke23_done_out & fsm6_out == 6'h1e & tdcc5_go_out; // @[]
  assign invoke23_done_in = i0_done;
  assign invoke24_go_in = ~invoke24_done_out & fsm6_out == 6'h20 & tdcc5_go_out; // @[]
  assign invoke24_done_in = i0_done;
  assign invoke25_go_in = ~invoke25_done_out & fsm6_out == 6'h22 & tdcc5_go_out; // @[]
  assign invoke25_done_in = j0_done;
  assign invoke27_go_in = ~invoke27_done_out & fsm4_out == 2'h1 & tdcc3_go_out; // @[]
  assign invoke27_done_in = bin_read0_0_done;
  assign invoke28_go_in = ~invoke28_done_out & fsm5_out == 2'h1 & tdcc4_go_out; // @[]
  assign invoke28_done_in = v_0_done;
  assign invoke32_go_in = ~invoke32_done_out & fsm6_out == 6'h29 & tdcc5_go_out; // @[]
  assign invoke32_done_in = bin_read0_0_done;
  assign invoke34_go_in = ~invoke34_done_out & fsm6_out == 6'h2c & tdcc5_go_out; // @[]
  assign invoke34_done_in = j0_done;
  assign invoke35_go_in = ~invoke35_done_out & fsm6_out == 6'h2e & tdcc5_go_out; // @[]
  assign invoke35_done_in = i0_done;
  assign early_reset_cond00_go_in = wrapper_early_reset_cond00_go_out; // @[]
  assign early_reset_cond00_done_in = ud_out;
  assign early_reset_cond10_go_in = wrapper_early_reset_cond10_go_out; // @[]
  assign early_reset_cond10_done_in = ud0_out;
  assign early_reset_cond20_go_in = wrapper_early_reset_cond20_go_out; // @[]
  assign early_reset_cond20_done_in = ud1_out;
  assign early_reset_cond30_go_in = wrapper_early_reset_cond30_go_out; // @[]
  assign early_reset_cond30_done_in = ud2_out;
  assign early_reset_cond40_go_in = wrapper_early_reset_cond40_go_out; // @[]
  assign early_reset_cond40_done_in = ud3_out;
  assign early_reset_cond50_go_in = wrapper_early_reset_cond50_go_out; // @[]
  assign early_reset_cond50_done_in = ud4_out;
  assign early_reset_cond60_go_in = wrapper_early_reset_cond60_go_out; // @[]
  assign early_reset_cond60_done_in = ud5_out;
  assign early_reset_cond70_go_in = wrapper_early_reset_cond70_go_out; // @[]
  assign early_reset_cond70_done_in = ud6_out;
  assign early_reset_cond80_go_in = wrapper_early_reset_cond80_go_out; // @[]
  assign early_reset_cond80_done_in = ud7_out;
  assign early_reset_static_par_go_in = wrapper_early_reset_static_par_go_out; // @[]
  assign early_reset_static_par_done_in = ud8_out;
  assign early_reset_static_seq_go_in = wrapper_early_reset_static_seq_go_out; // @[]
  assign early_reset_static_seq_done_in = ud9_out;
  assign early_reset_static_par0_go_in = wrapper_early_reset_static_par0_go_out; // @[]
  assign early_reset_static_par0_done_in = ud10_out;
  assign early_reset_static_par1_go_in = wrapper_early_reset_static_par1_go_out; // @[]
  assign early_reset_static_par1_done_in = ud11_out;
  assign early_reset_static_seq0_go_in = wrapper_early_reset_static_seq0_go_out; // @[]
  assign early_reset_static_seq0_done_in = ud12_out;
  assign early_reset_static_par2_go_in = wrapper_early_reset_static_par2_go_out; // @[]
  assign early_reset_static_par2_done_in = ud13_out;
  assign early_reset_static_par3_go_in = wrapper_early_reset_static_par3_go_out; // @[]
  assign early_reset_static_par3_done_in = ud14_out;
  assign early_reset_static_seq1_go_in = wrapper_early_reset_static_seq1_go_out; // @[]
  assign early_reset_static_seq1_done_in = ud15_out;
  assign early_reset_static_par4_go_in = wrapper_early_reset_static_par4_go_out; // @[]
  assign early_reset_static_par4_done_in = ud16_out;
  assign wrapper_early_reset_cond00_go_in = ~wrapper_early_reset_cond00_done_out & fsm6_out == 6'h1 & tdcc5_go_out | ~
    wrapper_early_reset_cond00_done_out & fsm6_out == 6'hf & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond00_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond10_go_in = ~wrapper_early_reset_cond10_done_out & fsm6_out == 6'h3 & tdcc5_go_out | ~
    wrapper_early_reset_cond10_done_out & fsm6_out == 6'hd & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond10_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par_go_in = ~wrapper_early_reset_static_par_done_out & fsm6_out == 6'h4 &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_par_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond20_go_in = ~wrapper_early_reset_cond20_done_out & fsm6_out == 6'h5 & tdcc5_go_out | ~
    wrapper_early_reset_cond20_done_out & fsm6_out == 6'hb & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond20_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_seq_go_in = ~wrapper_early_reset_static_seq_done_out & fsm6_out == 6'h7 &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_seq_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par0_go_in = ~wrapper_early_reset_static_par0_done_out & fsm6_out == 6'ha &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_par0_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond30_go_in = ~wrapper_early_reset_cond30_done_out & fsm6_out == 6'h11 & tdcc5_go_out | ~
    wrapper_early_reset_cond30_done_out & fsm6_out == 6'h1f & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond30_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond40_go_in = ~wrapper_early_reset_cond40_done_out & fsm6_out == 6'h13 & tdcc5_go_out | ~
    wrapper_early_reset_cond40_done_out & fsm6_out == 6'h1d & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond40_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par1_go_in = ~wrapper_early_reset_static_par1_done_out & fsm6_out == 6'h14 &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_par1_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond50_go_in = ~wrapper_early_reset_cond50_done_out & fsm6_out == 6'h15 & tdcc5_go_out | ~
    wrapper_early_reset_cond50_done_out & fsm6_out == 6'h1b & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond50_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_seq0_go_in = ~wrapper_early_reset_static_seq0_done_out & fsm6_out == 6'h17 &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_seq0_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par2_go_in = ~wrapper_early_reset_static_par2_done_out & fsm6_out == 6'h1a &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_par2_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond60_go_in = ~wrapper_early_reset_cond60_done_out & fsm6_out == 6'h21 & tdcc5_go_out | ~
    wrapper_early_reset_cond60_done_out & fsm6_out == 6'h2f & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond60_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond70_go_in = ~wrapper_early_reset_cond70_done_out & fsm6_out == 6'h23 & tdcc5_go_out | ~
    wrapper_early_reset_cond70_done_out & fsm6_out == 6'h2d & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond70_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par3_go_in = ~wrapper_early_reset_static_par3_done_out & fsm6_out == 6'h24 &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_par3_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond80_go_in = ~wrapper_early_reset_cond80_done_out & fsm6_out == 6'h25 & tdcc5_go_out | ~
    wrapper_early_reset_cond80_done_out & fsm6_out == 6'h2b & tdcc5_go_out; // @[]
  assign wrapper_early_reset_cond80_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_seq1_go_in = ~wrapper_early_reset_static_seq1_done_out & fsm6_out == 6'h27 &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_seq1_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par4_go_in = ~wrapper_early_reset_static_par4_done_out & fsm6_out == 6'h2a &
    tdcc5_go_out; // @[]
  assign wrapper_early_reset_static_par4_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign par0_go_in = ~par0_done_out & fsm6_out == 6'h6 & tdcc5_go_out; // @[]
  assign par0_done_in = pd_out & pd0_out; // @[]
  assign tdcc_go_in = ~(pd_out | tdcc_done_out) & par0_go_out; // @[]
  assign tdcc_done_in = fsm0_out == 2'h2; // @[]
  assign tdcc0_go_in = ~(pd0_out | tdcc0_done_out) & par0_go_out; // @[]
  assign tdcc0_done_in = fsm1_out == 2'h2; // @[]
  assign par1_go_in = ~par1_done_out & fsm6_out == 6'h16 & tdcc5_go_out; // @[]
  assign par1_done_in = pd1_out & pd2_out; // @[]
  assign tdcc1_go_in = ~(pd1_out | tdcc1_done_out) & par1_go_out; // @[]
  assign tdcc1_done_in = fsm2_out == 2'h2; // @[]
  assign tdcc2_go_in = ~(pd2_out | tdcc2_done_out) & par1_go_out; // @[]
  assign tdcc2_done_in = fsm3_out == 2'h2; // @[]
  assign par2_go_in = ~par2_done_out & fsm6_out == 6'h26 & tdcc5_go_out; // @[]
  assign par2_done_in = pd3_out & pd4_out; // @[]
  assign tdcc3_go_in = ~(pd3_out | tdcc3_done_out) & par2_go_out; // @[]
  assign tdcc3_done_in = fsm4_out == 2'h2; // @[]
  assign tdcc4_go_in = ~(pd4_out | tdcc4_done_out) & par2_go_out; // @[]
  assign tdcc4_done_in = fsm5_out == 2'h2; // @[]
  assign tdcc5_go_in = go;
  assign tdcc5_done_in = fsm6_out == 6'h30; // @[]
endmodule

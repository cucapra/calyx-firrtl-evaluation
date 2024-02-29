module std_reg_32(
  input  [31:0] in,
  input         write_en,
  input         clk,
  input         reset,
  output [31:0] out,
  output        done
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] internal_reg;
  reg  done_reg;
  assign out = internal_reg;
  assign done = done_reg;
  always @(posedge clk) begin
    if (reset) begin
      internal_reg <= 32'h0;
    end else if (write_en) begin
      internal_reg <= in;
    end
    if (reset) begin
      done_reg <= 1'h0;
    end else begin
      done_reg <= write_en;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  internal_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  done_reg = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module std_mult_pipe_32(
  input  [31:0] left,
  input  [31:0] right,
  input         reset,
  input         go,
  input         clk,
  output [31:0] out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] rtmp;
  reg [31:0] ltmp;
  reg [63:0] out_tmp;
  assign out = out_tmp[31:0];
  always @(posedge clk) begin
    if (reset) begin
      rtmp <= 32'h0;
    end else if (go) begin
      rtmp <= right;
    end else begin
      rtmp <= 32'h0;
    end
    if (reset) begin
      ltmp <= 32'h0;
    end else if (go) begin
      ltmp <= left;
    end else begin
      ltmp <= 32'h0;
    end
    if (reset) begin
      out_tmp <= 64'h0;
    end else if (go) begin
      out_tmp <= ltmp * rtmp;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rtmp = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  ltmp = _RAND_1[31:0];
  _RAND_2 = {2{`RANDOM}};
  out_tmp = _RAND_2[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module std_reg_3(
  input  [2:0] in,
  input        write_en,
  input        clk,
  input        reset,
  output [2:0] out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] internal_reg;
  assign out = internal_reg;
  always @(posedge clk) begin
    if (reset) begin
      internal_reg <= 3'h0;
    end else if (write_en) begin
      internal_reg <= in;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  internal_reg = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module std_reg_5(
  input  [4:0] in,
  input        write_en,
  input        clk,
  input        reset,
  output [4:0] out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [4:0] internal_reg;
  assign out = internal_reg;
  always @(posedge clk) begin
    if (reset) begin
      internal_reg <= 5'h0;
    end else if (write_en) begin
      internal_reg <= in;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  internal_reg = _RAND_0[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module std_add_32(
  input  [31:0] left,
  input  [31:0] right,
  output [31:0] out
);
  wire [32:0] _GEN_0 = left + right;
  assign out = _GEN_0[31:0];
endmodule
module std_reg_1(
  input   in,
  input   write_en,
  input   clk,
  input   reset,
  output  out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg  internal_reg;
  assign out = internal_reg;
  always @(posedge clk) begin
    if (reset) begin
      internal_reg <= 1'h0;
    end else if (write_en) begin
      internal_reg <= in;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  internal_reg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module std_lt_4(
  input  [3:0] left,
  input  [3:0] right,
  output       out
);
  assign out = left < right;
endmodule
module std_le_4(
  input  [3:0] left,
  input  [3:0] right,
  output       out
);
  assign out = left <= right;
endmodule
module std_add_4(
  input  [3:0] left,
  input  [3:0] right,
  output [3:0] out
);
  wire [4:0] _GEN_0 = left + right;
  assign out = _GEN_0[3:0];
endmodule
module std_reg_4(
  input  [3:0] in,
  input        write_en,
  input        clk,
  input        reset,
  output [3:0] out,
  output       done
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [3:0] internal_reg;
  reg  done_reg;
  assign out = internal_reg;
  assign done = done_reg;
  always @(posedge clk) begin
    if (reset) begin
      internal_reg <= 4'h0;
    end else if (write_en) begin
      internal_reg <= in;
    end
    if (reset) begin
      done_reg <= 1'h0;
    end else begin
      done_reg <= write_en;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  internal_reg = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  done_reg = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module std_wire_1(
  input   in,
  output  out
);
  assign out = in;
endmodule
module std_add_3(
  input  [2:0] left,
  input  [2:0] right,
  output [2:0] out
);
  wire [3:0] _GEN_0 = left + right;
  assign out = _GEN_0[2:0];
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
  output        alpha_int_addr0,
  output        alpha_int_write_en,
  output [31:0] alpha_int_write_data,
  output        alpha_int_read_en,
  input  [31:0] alpha_int_read_data,
  input         alpha_int_write_done,
  input         alpha_int_read_done
);
  wire [31:0] A_int_read0_0_in;
  wire  A_int_read0_0_write_en;
  wire  A_int_read0_0_clk;
  wire  A_int_read0_0_reset;
  wire [31:0] A_int_read0_0_out;
  wire  A_int_read0_0_done;
  wire [31:0] B_i_j_0_in;
  wire  B_i_j_0_write_en;
  wire  B_i_j_0_clk;
  wire  B_i_j_0_reset;
  wire [31:0] B_i_j_0_out;
  wire  B_i_j_0_done;
  wire [31:0] B_k_j_0_in;
  wire  B_k_j_0_write_en;
  wire  B_k_j_0_clk;
  wire  B_k_j_0_reset;
  wire [31:0] B_k_j_0_out;
  wire  B_k_j_0_done;
  wire [3:0] add0_left;
  wire [3:0] add0_right;
  wire [3:0] add0_out;
  wire [31:0] add1_left;
  wire [31:0] add1_right;
  wire [31:0] add1_out;
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
  wire [3:0] k_0_in;
  wire  k_0_write_en;
  wire  k_0_clk;
  wire  k_0_reset;
  wire [3:0] k_0_out;
  wire  k_0_done;
  wire [3:0] le0_left;
  wire [3:0] le0_right;
  wire  le0_out;
  wire [3:0] lt0_left;
  wire [3:0] lt0_right;
  wire  lt0_out;
  wire [31:0] mult_pipe0_left;
  wire [31:0] mult_pipe0_right;
  wire  mult_pipe0_reset;
  wire  mult_pipe0_go;
  wire  mult_pipe0_clk;
  wire [31:0] mult_pipe0_out;
  wire  comb_reg_in;
  wire  comb_reg_write_en;
  wire  comb_reg_clk;
  wire  comb_reg_reset;
  wire  comb_reg_out;
  wire  comb_reg0_in;
  wire  comb_reg0_write_en;
  wire  comb_reg0_clk;
  wire  comb_reg0_reset;
  wire  comb_reg0_out;
  wire  comb_reg1_in;
  wire  comb_reg1_write_en;
  wire  comb_reg1_clk;
  wire  comb_reg1_reset;
  wire  comb_reg1_out;
  wire [2:0] fsm_in;
  wire  fsm_write_en;
  wire  fsm_clk;
  wire  fsm_reset;
  wire [2:0] fsm_out;
  wire [2:0] adder_left;
  wire [2:0] adder_right;
  wire [2:0] adder_out;
  wire [2:0] adder0_left;
  wire [2:0] adder0_right;
  wire [2:0] adder0_out;
  wire [2:0] adder1_left;
  wire [2:0] adder1_right;
  wire [2:0] adder1_out;
  wire [2:0] adder2_left;
  wire [2:0] adder2_right;
  wire [2:0] adder2_out;
  wire [2:0] adder3_left;
  wire [2:0] adder3_right;
  wire [2:0] adder3_out;
  wire  signal_reg_in;
  wire  signal_reg_write_en;
  wire  signal_reg_clk;
  wire  signal_reg_reset;
  wire  signal_reg_out;
  wire [4:0] fsm0_in;
  wire  fsm0_write_en;
  wire  fsm0_clk;
  wire  fsm0_reset;
  wire [4:0] fsm0_out;
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
  wire  beg_spl_let7_go_in;
  wire  beg_spl_let7_go_out;
  wire  beg_spl_let7_done_in;
  wire  beg_spl_let7_done_out;
  wire  beg_spl_let8_go_in;
  wire  beg_spl_let8_go_out;
  wire  beg_spl_let8_done_in;
  wire  beg_spl_let8_done_out;
  wire  invoke0_go_in;
  wire  invoke0_go_out;
  wire  invoke0_done_in;
  wire  invoke0_done_out;
  wire  invoke1_go_in;
  wire  invoke1_go_out;
  wire  invoke1_done_in;
  wire  invoke1_done_out;
  wire  invoke2_go_in;
  wire  invoke2_go_out;
  wire  invoke2_done_in;
  wire  invoke2_done_out;
  wire  invoke3_go_in;
  wire  invoke3_go_out;
  wire  invoke3_done_in;
  wire  invoke3_done_out;
  wire  invoke4_go_in;
  wire  invoke4_go_out;
  wire  invoke4_done_in;
  wire  invoke4_done_out;
  wire  invoke5_go_in;
  wire  invoke5_go_out;
  wire  invoke5_done_in;
  wire  invoke5_done_out;
  wire  invoke9_go_in;
  wire  invoke9_go_out;
  wire  invoke9_done_in;
  wire  invoke9_done_out;
  wire  invoke10_go_in;
  wire  invoke10_go_out;
  wire  invoke10_done_in;
  wire  invoke10_done_out;
  wire  invoke14_go_in;
  wire  invoke14_go_out;
  wire  invoke14_done_in;
  wire  invoke14_done_out;
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
  wire  early_reset_static_par_go_in;
  wire  early_reset_static_par_go_out;
  wire  early_reset_static_par_done_in;
  wire  early_reset_static_par_done_out;
  wire  early_reset_static_seq0_go_in;
  wire  early_reset_static_seq0_go_out;
  wire  early_reset_static_seq0_done_in;
  wire  early_reset_static_seq0_done_out;
  wire  wrapper_early_reset_cond00_go_in;
  wire  wrapper_early_reset_cond00_go_out;
  wire  wrapper_early_reset_cond00_done_in;
  wire  wrapper_early_reset_cond00_done_out;
  wire  wrapper_early_reset_cond10_go_in;
  wire  wrapper_early_reset_cond10_go_out;
  wire  wrapper_early_reset_cond10_done_in;
  wire  wrapper_early_reset_cond10_done_out;
  wire  wrapper_early_reset_cond20_go_in;
  wire  wrapper_early_reset_cond20_go_out;
  wire  wrapper_early_reset_cond20_done_in;
  wire  wrapper_early_reset_cond20_done_out;
  wire  wrapper_early_reset_static_par_go_in;
  wire  wrapper_early_reset_static_par_go_out;
  wire  wrapper_early_reset_static_par_done_in;
  wire  wrapper_early_reset_static_par_done_out;
  wire  wrapper_early_reset_static_seq0_go_in;
  wire  wrapper_early_reset_static_seq0_go_out;
  wire  wrapper_early_reset_static_seq0_done_in;
  wire  wrapper_early_reset_static_seq0_done_out;
  wire  tdcc_go_in;
  wire  tdcc_go_out;
  wire  tdcc_done_in;
  wire  tdcc_done_out;
  wire [3:0] _GEN_1 = invoke14_go_out ? add0_out : 4'h0; // @[]
  wire  _GEN_4 = early_reset_cond20_go_out; // @[]
  wire [3:0] _GEN_18 = beg_spl_let3_go_out | beg_spl_let7_go_out | fsm_out == 3'h4 & early_reset_static_par_go_out |
    fsm_out == 3'h4 & early_reset_static_seq0_go_out ? i0_out : 4'h0; // @[]
  wire [31:0] _GEN_21 = fsm_out == 3'h4 & early_reset_static_par_go_out ? add1_out : 32'h0; // @[]
  wire [2:0] _GEN_24 = fsm_out != 3'h0 & early_reset_cond20_go_out ? adder1_out : 3'h0; // @[]
  wire [2:0] _GEN_25 = fsm_out != 3'h0 & early_reset_cond00_go_out ? adder_out : _GEN_24; // @[]
  wire [2:0] _GEN_26 = fsm_out != 3'h4 & early_reset_static_par_go_out ? adder2_out : _GEN_25; // @[]
  wire [2:0] _GEN_27 = fsm_out != 3'h5 & early_reset_static_seq0_go_out ? adder3_out : _GEN_26; // @[]
  wire [2:0] _GEN_28 = fsm_out != 3'h0 & early_reset_cond10_go_out ? adder0_out : _GEN_27; // @[]
  wire  _GEN_31 = early_reset_cond00_go_out; // @[]
  wire [3:0] _GEN_34 = invoke2_go_out | invoke14_go_out ? i0_out : 4'h0; // @[]
  wire [3:0] _GEN_35 = fsm_out == 3'h0 & early_reset_static_par_go_out ? k_0_out : _GEN_34; // @[]
  wire [31:0] _GEN_40 = invoke5_go_out ? A_int_read_data : 32'h0; // @[]
  wire [31:0] _GEN_41 = invoke9_go_out ? B_int_read_data : _GEN_40; // @[]
  wire  _GEN_53 = early_reset_cond10_go_out; // @[]
  wire  _GEN_58 = early_reset_static_par_go_out; // @[]
  wire  _GEN_221 = fsm0_out == 5'h0 & invoke0_done_out & tdcc_go_out; // @[]
  wire  _GEN_249 = fsm0_out == 5'h4 & invoke2_done_out & tdcc_go_out; // @[]
  wire  _GEN_253 = fsm0_out == 5'h16 | fsm0_out == 5'h0 & invoke0_done_out & tdcc_go_out | fsm0_out == 5'h1 & (
    wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc_go_out | fsm0_out == 5'h15 & (
    wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc_go_out | fsm0_out == 5'h2 & invoke1_done_out &
    tdcc_go_out | fsm0_out == 5'h3 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc_go_out | fsm0_out == 5'h13
     & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc_go_out | _GEN_249; // @[]
  wire  _GEN_282 = _GEN_253 | fsm0_out == 5'h5 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc_go_out |
    fsm0_out == 5'hd & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc_go_out | fsm0_out == 5'h6 &
    beg_spl_let3_done_out & tdcc_go_out | fsm0_out == 5'h7 & invoke3_done_out & tdcc_go_out | fsm0_out == 5'h8 &
    beg_spl_let4_done_out & tdcc_go_out | fsm0_out == 5'h9 & invoke4_done_out & tdcc_go_out | fsm0_out == 5'ha &
    beg_spl_let5_done_out & tdcc_go_out; // @[]
  wire  _GEN_311 = fsm0_out == 5'h10 & beg_spl_let8_done_out & tdcc_go_out; // @[]
  wire  _GEN_315 = fsm0_out == 5'h11 & invoke10_done_out & tdcc_go_out; // @[]
  wire  _GEN_318 = _GEN_282 | fsm0_out == 5'hb & invoke5_done_out & tdcc_go_out | fsm0_out == 5'hc &
    wrapper_early_reset_static_par_done_out & tdcc_go_out | fsm0_out == 5'h5 & (wrapper_early_reset_cond20_done_out & ~
    comb_reg1_out) & tdcc_go_out | fsm0_out == 5'hd & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) &
    tdcc_go_out | fsm0_out == 5'he & beg_spl_let7_done_out & tdcc_go_out | fsm0_out == 5'hf & invoke9_done_out &
    tdcc_go_out | _GEN_311 | _GEN_315; // @[]
  wire  _GEN_347 = fsm0_out == 5'h15 & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc_go_out; // @[]
  wire [3:0] _GEN_61 = fsm0_out == 5'he & beg_spl_let7_done_out & tdcc_go_out ? 4'hf : {{3'd0}, _GEN_221}; // @[]
  wire [4:0] _GEN_62 = fsm0_out == 5'h11 & invoke10_done_out & tdcc_go_out ? 5'h12 : {{1'd0}, _GEN_61}; // @[]
  wire [4:0] _GEN_63 = fsm0_out == 5'hf & invoke9_done_out & tdcc_go_out ? 5'h10 : _GEN_62; // @[]
  wire [4:0] _GEN_64 = fsm0_out == 5'h16 ? 5'h0 : _GEN_63; // @[]
  wire [4:0] _GEN_65 = fsm0_out == 5'h2 & invoke1_done_out & tdcc_go_out ? 5'h3 : _GEN_64; // @[]
  wire [4:0] _GEN_66 = fsm0_out == 5'hc & wrapper_early_reset_static_par_done_out & tdcc_go_out ? 5'hd : _GEN_65; // @[]
  wire [4:0] _GEN_67 = fsm0_out == 5'h5 & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc_go_out |
    fsm0_out == 5'hd & (wrapper_early_reset_cond20_done_out & ~comb_reg1_out) & tdcc_go_out ? 5'he : _GEN_66; // @[]
  wire [4:0] _GEN_68 = fsm0_out == 5'h4 & invoke2_done_out & tdcc_go_out ? 5'h5 : _GEN_67; // @[]
  wire [4:0] _GEN_69 = fsm0_out == 5'hb & invoke5_done_out & tdcc_go_out ? 5'hc : _GEN_68; // @[]
  wire [4:0] _GEN_70 = fsm0_out == 5'h1 & (wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc_go_out | fsm0_out
     == 5'h15 & (wrapper_early_reset_cond00_done_out & comb_reg_out) & tdcc_go_out ? 5'h2 : _GEN_69; // @[]
  wire [4:0] _GEN_71 = fsm0_out == 5'h7 & invoke3_done_out & tdcc_go_out ? 5'h8 : _GEN_70; // @[]
  wire [4:0] _GEN_72 = fsm0_out == 5'h9 & invoke4_done_out & tdcc_go_out ? 5'ha : _GEN_71; // @[]
  wire [4:0] _GEN_73 = fsm0_out == 5'h6 & beg_spl_let3_done_out & tdcc_go_out ? 5'h7 : _GEN_72; // @[]
  wire [4:0] _GEN_74 = fsm0_out == 5'ha & beg_spl_let5_done_out & tdcc_go_out ? 5'hb : _GEN_73; // @[]
  wire [4:0] _GEN_75 = fsm0_out == 5'h14 & invoke14_done_out & tdcc_go_out ? 5'h15 : _GEN_74; // @[]
  wire [4:0] _GEN_76 = fsm0_out == 5'h12 & wrapper_early_reset_static_seq0_done_out & tdcc_go_out ? 5'h13 : _GEN_75; // @[]
  wire [4:0] _GEN_77 = fsm0_out == 5'h1 & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc_go_out | fsm0_out
     == 5'h15 & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc_go_out ? 5'h16 : _GEN_76; // @[]
  wire [4:0] _GEN_78 = fsm0_out == 5'h3 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc_go_out | fsm0_out
     == 5'h13 & (wrapper_early_reset_cond10_done_out & comb_reg0_out) & tdcc_go_out ? 5'h4 : _GEN_77; // @[]
  wire [4:0] _GEN_79 = fsm0_out == 5'h5 & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc_go_out | fsm0_out
     == 5'hd & (wrapper_early_reset_cond20_done_out & comb_reg1_out) & tdcc_go_out ? 5'h6 : _GEN_78; // @[]
  wire [4:0] _GEN_80 = fsm0_out == 5'h3 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc_go_out |
    fsm0_out == 5'h13 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc_go_out ? 5'h14 : _GEN_79; // @[]
  wire [4:0] _GEN_81 = fsm0_out == 5'h10 & beg_spl_let8_done_out & tdcc_go_out ? 5'h11 : _GEN_80; // @[]
  wire  _GEN_86 = early_reset_static_seq0_go_out; // @[]
  wire [31:0] _GEN_88 = fsm_out < 3'h3 & early_reset_static_par_go_out ? A_int_read0_0_out : 32'h0; // @[]
  wire [31:0] _GEN_91 = fsm_out < 3'h3 & early_reset_static_seq0_go_out ? A_int_read0_0_out : 32'h0; // @[]
  wire [3:0] _GEN_95 = early_reset_cond00_go_out ? i0_out : 4'h0; // @[]
  wire [3:0] _GEN_97 = early_reset_cond00_go_out ? 4'h7 : 4'h0; // @[]
  wire [31:0] _GEN_105 = invoke10_go_out ? alpha_int_read_data : 32'h0; // @[]
  wire [3:0] _GEN_110 = fsm_out == 3'h5 & early_reset_static_seq0_go_out ? add0_out : 4'h0; // @[]
  std_reg_32 A_int_read0_0 (
    .in(A_int_read0_0_in),
    .write_en(A_int_read0_0_write_en),
    .clk(A_int_read0_0_clk),
    .reset(A_int_read0_0_reset),
    .out(A_int_read0_0_out),
    .done(A_int_read0_0_done)
  );
  std_reg_32 B_i_j_0 (
    .in(B_i_j_0_in),
    .write_en(B_i_j_0_write_en),
    .clk(B_i_j_0_clk),
    .reset(B_i_j_0_reset),
    .out(B_i_j_0_out),
    .done(B_i_j_0_done)
  );
  std_reg_32 B_k_j_0 (
    .in(B_k_j_0_in),
    .write_en(B_k_j_0_write_en),
    .clk(B_k_j_0_clk),
    .reset(B_k_j_0_reset),
    .out(B_k_j_0_out),
    .done(B_k_j_0_done)
  );
  std_add_4 add0 (
    .left(add0_left),
    .right(add0_right),
    .out(add0_out)
  );
  std_add_32 add1 (
    .left(add1_left),
    .right(add1_right),
    .out(add1_out)
  );
  std_reg_4 i0 (
    .in(i0_in),
    .write_en(i0_write_en),
    .clk(i0_clk),
    .reset(i0_reset),
    .out(i0_out),
    .done(i0_done)
  );
  std_reg_4 j0 (
    .in(j0_in),
    .write_en(j0_write_en),
    .clk(j0_clk),
    .reset(j0_reset),
    .out(j0_out),
    .done(j0_done)
  );
  std_reg_4 k_0 (
    .in(k_0_in),
    .write_en(k_0_write_en),
    .clk(k_0_clk),
    .reset(k_0_reset),
    .out(k_0_out),
    .done(k_0_done)
  );
  std_le_4 le0 (
    .left(le0_left),
    .right(le0_right),
    .out(le0_out)
  );
  std_lt_4 lt0 (
    .left(lt0_left),
    .right(lt0_right),
    .out(lt0_out)
  );
  std_mult_pipe_32 mult_pipe0 (
    .left(mult_pipe0_left),
    .right(mult_pipe0_right),
    .reset(mult_pipe0_reset),
    .go(mult_pipe0_go),
    .clk(mult_pipe0_clk),
    .out(mult_pipe0_out)
  );
  std_reg_1 comb_reg (
    .in(comb_reg_in),
    .write_en(comb_reg_write_en),
    .clk(comb_reg_clk),
    .reset(comb_reg_reset),
    .out(comb_reg_out)
  );
  std_reg_1 comb_reg0 (
    .in(comb_reg0_in),
    .write_en(comb_reg0_write_en),
    .clk(comb_reg0_clk),
    .reset(comb_reg0_reset),
    .out(comb_reg0_out)
  );
  std_reg_1 comb_reg1 (
    .in(comb_reg1_in),
    .write_en(comb_reg1_write_en),
    .clk(comb_reg1_clk),
    .reset(comb_reg1_reset),
    .out(comb_reg1_out)
  );
  std_reg_3 fsm (
    .in(fsm_in),
    .write_en(fsm_write_en),
    .clk(fsm_clk),
    .reset(fsm_reset),
    .out(fsm_out)
  );
  std_add_3 adder (
    .left(adder_left),
    .right(adder_right),
    .out(adder_out)
  );
  std_add_3 adder0 (
    .left(adder0_left),
    .right(adder0_right),
    .out(adder0_out)
  );
  std_add_3 adder1 (
    .left(adder1_left),
    .right(adder1_right),
    .out(adder1_out)
  );
  std_add_3 adder2 (
    .left(adder2_left),
    .right(adder2_right),
    .out(adder2_out)
  );
  std_add_3 adder3 (
    .left(adder3_left),
    .right(adder3_right),
    .out(adder3_out)
  );
  std_reg_1 signal_reg (
    .in(signal_reg_in),
    .write_en(signal_reg_write_en),
    .clk(signal_reg_clk),
    .reset(signal_reg_reset),
    .out(signal_reg_out)
  );
  std_reg_5 fsm0 (
    .in(fsm0_in),
    .write_en(fsm0_write_en),
    .clk(fsm0_clk),
    .reset(fsm0_reset),
    .out(fsm0_out)
  );
  std_wire_1 beg_spl_let3_go (
    .in(beg_spl_let3_go_in),
    .out(beg_spl_let3_go_out)
  );
  std_wire_1 beg_spl_let3_done (
    .in(beg_spl_let3_done_in),
    .out(beg_spl_let3_done_out)
  );
  std_wire_1 beg_spl_let4_go (
    .in(beg_spl_let4_go_in),
    .out(beg_spl_let4_go_out)
  );
  std_wire_1 beg_spl_let4_done (
    .in(beg_spl_let4_done_in),
    .out(beg_spl_let4_done_out)
  );
  std_wire_1 beg_spl_let5_go (
    .in(beg_spl_let5_go_in),
    .out(beg_spl_let5_go_out)
  );
  std_wire_1 beg_spl_let5_done (
    .in(beg_spl_let5_done_in),
    .out(beg_spl_let5_done_out)
  );
  std_wire_1 beg_spl_let7_go (
    .in(beg_spl_let7_go_in),
    .out(beg_spl_let7_go_out)
  );
  std_wire_1 beg_spl_let7_done (
    .in(beg_spl_let7_done_in),
    .out(beg_spl_let7_done_out)
  );
  std_wire_1 beg_spl_let8_go (
    .in(beg_spl_let8_go_in),
    .out(beg_spl_let8_go_out)
  );
  std_wire_1 beg_spl_let8_done (
    .in(beg_spl_let8_done_in),
    .out(beg_spl_let8_done_out)
  );
  std_wire_1 invoke0_go (
    .in(invoke0_go_in),
    .out(invoke0_go_out)
  );
  std_wire_1 invoke0_done (
    .in(invoke0_done_in),
    .out(invoke0_done_out)
  );
  std_wire_1 invoke1_go (
    .in(invoke1_go_in),
    .out(invoke1_go_out)
  );
  std_wire_1 invoke1_done (
    .in(invoke1_done_in),
    .out(invoke1_done_out)
  );
  std_wire_1 invoke2_go (
    .in(invoke2_go_in),
    .out(invoke2_go_out)
  );
  std_wire_1 invoke2_done (
    .in(invoke2_done_in),
    .out(invoke2_done_out)
  );
  std_wire_1 invoke3_go (
    .in(invoke3_go_in),
    .out(invoke3_go_out)
  );
  std_wire_1 invoke3_done (
    .in(invoke3_done_in),
    .out(invoke3_done_out)
  );
  std_wire_1 invoke4_go (
    .in(invoke4_go_in),
    .out(invoke4_go_out)
  );
  std_wire_1 invoke4_done (
    .in(invoke4_done_in),
    .out(invoke4_done_out)
  );
  std_wire_1 invoke5_go (
    .in(invoke5_go_in),
    .out(invoke5_go_out)
  );
  std_wire_1 invoke5_done (
    .in(invoke5_done_in),
    .out(invoke5_done_out)
  );
  std_wire_1 invoke9_go (
    .in(invoke9_go_in),
    .out(invoke9_go_out)
  );
  std_wire_1 invoke9_done (
    .in(invoke9_done_in),
    .out(invoke9_done_out)
  );
  std_wire_1 invoke10_go (
    .in(invoke10_go_in),
    .out(invoke10_go_out)
  );
  std_wire_1 invoke10_done (
    .in(invoke10_done_in),
    .out(invoke10_done_out)
  );
  std_wire_1 invoke14_go (
    .in(invoke14_go_in),
    .out(invoke14_go_out)
  );
  std_wire_1 invoke14_done (
    .in(invoke14_done_in),
    .out(invoke14_done_out)
  );
  std_wire_1 early_reset_cond00_go (
    .in(early_reset_cond00_go_in),
    .out(early_reset_cond00_go_out)
  );
  std_wire_1 early_reset_cond00_done (
    .in(early_reset_cond00_done_in),
    .out(early_reset_cond00_done_out)
  );
  std_wire_1 early_reset_cond10_go (
    .in(early_reset_cond10_go_in),
    .out(early_reset_cond10_go_out)
  );
  std_wire_1 early_reset_cond10_done (
    .in(early_reset_cond10_done_in),
    .out(early_reset_cond10_done_out)
  );
  std_wire_1 early_reset_cond20_go (
    .in(early_reset_cond20_go_in),
    .out(early_reset_cond20_go_out)
  );
  std_wire_1 early_reset_cond20_done (
    .in(early_reset_cond20_done_in),
    .out(early_reset_cond20_done_out)
  );
  std_wire_1 early_reset_static_par_go (
    .in(early_reset_static_par_go_in),
    .out(early_reset_static_par_go_out)
  );
  std_wire_1 early_reset_static_par_done (
    .in(early_reset_static_par_done_in),
    .out(early_reset_static_par_done_out)
  );
  std_wire_1 early_reset_static_seq0_go (
    .in(early_reset_static_seq0_go_in),
    .out(early_reset_static_seq0_go_out)
  );
  std_wire_1 early_reset_static_seq0_done (
    .in(early_reset_static_seq0_done_in),
    .out(early_reset_static_seq0_done_out)
  );
  std_wire_1 wrapper_early_reset_cond00_go (
    .in(wrapper_early_reset_cond00_go_in),
    .out(wrapper_early_reset_cond00_go_out)
  );
  std_wire_1 wrapper_early_reset_cond00_done (
    .in(wrapper_early_reset_cond00_done_in),
    .out(wrapper_early_reset_cond00_done_out)
  );
  std_wire_1 wrapper_early_reset_cond10_go (
    .in(wrapper_early_reset_cond10_go_in),
    .out(wrapper_early_reset_cond10_go_out)
  );
  std_wire_1 wrapper_early_reset_cond10_done (
    .in(wrapper_early_reset_cond10_done_in),
    .out(wrapper_early_reset_cond10_done_out)
  );
  std_wire_1 wrapper_early_reset_cond20_go (
    .in(wrapper_early_reset_cond20_go_in),
    .out(wrapper_early_reset_cond20_go_out)
  );
  std_wire_1 wrapper_early_reset_cond20_done (
    .in(wrapper_early_reset_cond20_done_in),
    .out(wrapper_early_reset_cond20_done_out)
  );
  std_wire_1 wrapper_early_reset_static_par_go (
    .in(wrapper_early_reset_static_par_go_in),
    .out(wrapper_early_reset_static_par_go_out)
  );
  std_wire_1 wrapper_early_reset_static_par_done (
    .in(wrapper_early_reset_static_par_done_in),
    .out(wrapper_early_reset_static_par_done_out)
  );
  std_wire_1 wrapper_early_reset_static_seq0_go (
    .in(wrapper_early_reset_static_seq0_go_in),
    .out(wrapper_early_reset_static_seq0_go_out)
  );
  std_wire_1 wrapper_early_reset_static_seq0_done (
    .in(wrapper_early_reset_static_seq0_done_in),
    .out(wrapper_early_reset_static_seq0_done_out)
  );
  std_wire_1 tdcc_go (
    .in(tdcc_go_in),
    .out(tdcc_go_out)
  );
  std_wire_1 tdcc_done (
    .in(tdcc_done_in),
    .out(tdcc_done_out)
  );
  assign done = tdcc_done_out; // @[]
  assign A_int_addr0 = beg_spl_let5_go_out ? k_0_out : 4'h0; // @[]
  assign A_int_addr1 = beg_spl_let5_go_out ? i0_out : 4'h0; // @[]
  assign A_int_write_en = 1'h0;
  assign A_int_write_data = 32'h0;
  assign A_int_read_en = beg_spl_let5_go_out; // @[]
  assign B_int_addr0 = beg_spl_let4_go_out ? k_0_out : _GEN_18; // @[]
  assign B_int_addr1 = beg_spl_let3_go_out | beg_spl_let4_go_out | beg_spl_let7_go_out | fsm_out == 3'h4 &
    early_reset_static_par_go_out | fsm_out == 3'h4 & early_reset_static_seq0_go_out ? j0_out : 4'h0; // @[]
  assign B_int_write_en = fsm_out == 3'h4 & early_reset_static_par_go_out | fsm_out == 3'h4 &
    early_reset_static_seq0_go_out; // @[]
  assign B_int_write_data = fsm_out == 3'h4 & early_reset_static_seq0_go_out ? A_int_read0_0_out : _GEN_21; // @[]
  assign B_int_read_en = beg_spl_let3_go_out | beg_spl_let4_go_out | beg_spl_let7_go_out; // @[]
  assign alpha_int_addr0 = 1'h0; // @[]
  assign alpha_int_write_en = 1'h0;
  assign alpha_int_write_data = 32'h0;
  assign alpha_int_read_en = beg_spl_let8_go_out; // @[]
  assign A_int_read0_0_in = fsm_out == 3'h3 & early_reset_static_par_go_out | fsm_out == 3'h3 &
    early_reset_static_seq0_go_out ? mult_pipe0_out : _GEN_41; // @[]
  assign A_int_read0_0_write_en = invoke5_go_out | invoke9_go_out | fsm_out == 3'h3 & early_reset_static_par_go_out |
    fsm_out == 3'h3 & early_reset_static_seq0_go_out; // @[]
  assign A_int_read0_0_clk = clk;
  assign A_int_read0_0_reset = reset;
  assign B_i_j_0_in = invoke3_go_out ? B_int_read_data : _GEN_105; // @[]
  assign B_i_j_0_write_en = invoke3_go_out | invoke10_go_out; // @[]
  assign B_i_j_0_clk = clk;
  assign B_i_j_0_reset = reset;
  assign B_k_j_0_in = invoke4_go_out ? B_int_read_data : 32'h0; // @[]
  assign B_k_j_0_write_en = invoke4_go_out; // @[]
  assign B_k_j_0_clk = clk;
  assign B_k_j_0_reset = reset;
  assign add0_left = fsm_out == 3'h5 & early_reset_static_seq0_go_out ? j0_out : _GEN_35; // @[]
  assign add0_right = invoke2_go_out | invoke14_go_out | fsm_out == 3'h0 & early_reset_static_par_go_out | fsm_out == 3'h5
     & early_reset_static_seq0_go_out ? 4'h1 : 4'h0; // @[]
  assign add1_left = fsm_out == 3'h4 & early_reset_static_par_go_out ? A_int_read0_0_out : 32'h0; // @[]
  assign add1_right = fsm_out == 3'h4 & early_reset_static_par_go_out ? B_i_j_0_out : 32'h0; // @[]
  assign i0_in = invoke0_go_out ? 4'h0 : _GEN_1; // @[]
  assign i0_write_en = invoke0_go_out | invoke14_go_out; // @[]
  assign i0_clk = clk;
  assign i0_reset = reset;
  assign j0_in = invoke1_go_out ? 4'h0 : _GEN_110; // @[]
  assign j0_write_en = invoke1_go_out | fsm_out == 3'h5 & early_reset_static_seq0_go_out; // @[]
  assign j0_clk = clk;
  assign j0_reset = reset;
  assign k_0_in = invoke2_go_out | fsm_out == 3'h0 & early_reset_static_par_go_out ? add0_out : 4'h0; // @[]
  assign k_0_write_en = invoke2_go_out | fsm_out == 3'h0 & early_reset_static_par_go_out; // @[]
  assign k_0_clk = clk;
  assign k_0_reset = reset;
  assign le0_left = early_reset_cond10_go_out ? j0_out : _GEN_95; // @[]
  assign le0_right = early_reset_cond10_go_out ? 4'hb : _GEN_97; // @[]
  assign lt0_left = early_reset_cond20_go_out ? k_0_out : 4'h0; // @[]
  assign lt0_right = early_reset_cond20_go_out ? 4'h8 : 4'h0; // @[]
  assign mult_pipe0_left = fsm_out < 3'h3 & early_reset_static_seq0_go_out ? B_i_j_0_out : _GEN_88; // @[]
  assign mult_pipe0_right = fsm_out < 3'h3 & early_reset_static_par_go_out ? B_k_j_0_out : _GEN_91; // @[]
  assign mult_pipe0_reset = reset;
  assign mult_pipe0_go = fsm_out < 3'h3 & early_reset_static_par_go_out | fsm_out < 3'h3 &
    early_reset_static_seq0_go_out; // @[]
  assign mult_pipe0_clk = clk;
  assign comb_reg_in = early_reset_cond00_go_out & le0_out; // @[]
  assign comb_reg_write_en = early_reset_cond00_go_out; // @[]
  assign comb_reg_clk = clk;
  assign comb_reg_reset = reset;
  assign comb_reg0_in = early_reset_cond10_go_out & le0_out; // @[]
  assign comb_reg0_write_en = early_reset_cond10_go_out; // @[]
  assign comb_reg0_clk = clk;
  assign comb_reg0_reset = reset;
  assign comb_reg1_in = early_reset_cond20_go_out & lt0_out; // @[]
  assign comb_reg1_write_en = early_reset_cond20_go_out; // @[]
  assign comb_reg1_clk = clk;
  assign comb_reg1_reset = reset;
  assign fsm_in = fsm_out == 3'h0 & early_reset_cond00_go_out | fsm_out == 3'h0 & early_reset_cond10_go_out | fsm_out
     == 3'h0 & early_reset_cond20_go_out | fsm_out == 3'h4 & early_reset_static_par_go_out | fsm_out == 3'h5 &
    early_reset_static_seq0_go_out ? 3'h0 : _GEN_28; // @[]
  assign fsm_write_en = early_reset_cond00_go_out | early_reset_cond10_go_out | early_reset_cond20_go_out |
    early_reset_static_par_go_out | early_reset_static_seq0_go_out; // @[]
  assign fsm_clk = clk;
  assign fsm_reset = reset;
  assign adder_left = early_reset_cond00_go_out ? fsm_out : 3'h0; // @[]
  assign adder_right = {{2'd0}, _GEN_31};
  assign adder0_left = early_reset_cond10_go_out ? fsm_out : 3'h0; // @[]
  assign adder0_right = {{2'd0}, _GEN_53};
  assign adder1_left = early_reset_cond20_go_out ? fsm_out : 3'h0; // @[]
  assign adder1_right = {{2'd0}, _GEN_4};
  assign adder2_left = early_reset_static_par_go_out ? fsm_out : 3'h0; // @[]
  assign adder2_right = {{2'd0}, _GEN_58};
  assign adder3_left = early_reset_static_seq0_go_out ? fsm_out : 3'h0; // @[]
  assign adder3_right = {{2'd0}, _GEN_86};
  assign signal_reg_in = fsm_out == 3'h0 & signal_reg_out ? 1'h0 : fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond00_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond10_go_out | fsm_out
     == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond20_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_par_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_seq0_go_out; // @[]
  assign signal_reg_write_en = fsm_out == 3'h0 & signal_reg_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_cond00_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond10_go_out | fsm_out
     == 3'h0 & ~signal_reg_out & wrapper_early_reset_cond20_go_out | fsm_out == 3'h0 & ~signal_reg_out &
    wrapper_early_reset_static_par_go_out | fsm_out == 3'h0 & ~signal_reg_out & wrapper_early_reset_static_seq0_go_out; // @[]
  assign signal_reg_clk = clk;
  assign signal_reg_reset = reset;
  assign fsm0_in = fsm0_out == 5'h8 & beg_spl_let4_done_out & tdcc_go_out ? 5'h9 : _GEN_81; // @[]
  assign fsm0_write_en = _GEN_318 | fsm0_out == 5'h12 & wrapper_early_reset_static_seq0_done_out & tdcc_go_out |
    fsm0_out == 5'h3 & (wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc_go_out | fsm0_out == 5'h13 & (
    wrapper_early_reset_cond10_done_out & ~comb_reg0_out) & tdcc_go_out | fsm0_out == 5'h14 & invoke14_done_out &
    tdcc_go_out | fsm0_out == 5'h1 & (wrapper_early_reset_cond00_done_out & ~comb_reg_out) & tdcc_go_out | _GEN_347; // @[]
  assign fsm0_clk = clk;
  assign fsm0_reset = reset;
  assign beg_spl_let3_go_in = ~beg_spl_let3_done_out & fsm0_out == 5'h6 & tdcc_go_out; // @[]
  assign beg_spl_let3_done_in = B_int_read_done;
  assign beg_spl_let4_go_in = ~beg_spl_let4_done_out & fsm0_out == 5'h8 & tdcc_go_out; // @[]
  assign beg_spl_let4_done_in = B_int_read_done;
  assign beg_spl_let5_go_in = ~beg_spl_let5_done_out & fsm0_out == 5'ha & tdcc_go_out; // @[]
  assign beg_spl_let5_done_in = A_int_read_done;
  assign beg_spl_let7_go_in = ~beg_spl_let7_done_out & fsm0_out == 5'he & tdcc_go_out; // @[]
  assign beg_spl_let7_done_in = B_int_read_done;
  assign beg_spl_let8_go_in = ~beg_spl_let8_done_out & fsm0_out == 5'h10 & tdcc_go_out; // @[]
  assign beg_spl_let8_done_in = alpha_int_read_done;
  assign invoke0_go_in = ~invoke0_done_out & fsm0_out == 5'h0 & tdcc_go_out; // @[]
  assign invoke0_done_in = i0_done;
  assign invoke1_go_in = ~invoke1_done_out & fsm0_out == 5'h2 & tdcc_go_out; // @[]
  assign invoke1_done_in = j0_done;
  assign invoke2_go_in = ~invoke2_done_out & fsm0_out == 5'h4 & tdcc_go_out; // @[]
  assign invoke2_done_in = k_0_done;
  assign invoke3_go_in = ~invoke3_done_out & fsm0_out == 5'h7 & tdcc_go_out; // @[]
  assign invoke3_done_in = B_i_j_0_done;
  assign invoke4_go_in = ~invoke4_done_out & fsm0_out == 5'h9 & tdcc_go_out; // @[]
  assign invoke4_done_in = B_k_j_0_done;
  assign invoke5_go_in = ~invoke5_done_out & fsm0_out == 5'hb & tdcc_go_out; // @[]
  assign invoke5_done_in = A_int_read0_0_done;
  assign invoke9_go_in = ~invoke9_done_out & fsm0_out == 5'hf & tdcc_go_out; // @[]
  assign invoke9_done_in = A_int_read0_0_done;
  assign invoke10_go_in = ~invoke10_done_out & fsm0_out == 5'h11 & tdcc_go_out; // @[]
  assign invoke10_done_in = B_i_j_0_done;
  assign invoke14_go_in = ~invoke14_done_out & fsm0_out == 5'h14 & tdcc_go_out; // @[]
  assign invoke14_done_in = i0_done;
  assign early_reset_cond00_go_in = wrapper_early_reset_cond00_go_out; // @[]
  assign early_reset_cond00_done_in = 1'h0;
  assign early_reset_cond10_go_in = wrapper_early_reset_cond10_go_out; // @[]
  assign early_reset_cond10_done_in = 1'h0;
  assign early_reset_cond20_go_in = wrapper_early_reset_cond20_go_out; // @[]
  assign early_reset_cond20_done_in = 1'h0;
  assign early_reset_static_par_go_in = wrapper_early_reset_static_par_go_out; // @[]
  assign early_reset_static_par_done_in = 1'h0;
  assign early_reset_static_seq0_go_in = wrapper_early_reset_static_seq0_go_out; // @[]
  assign early_reset_static_seq0_done_in = 1'h0;
  assign wrapper_early_reset_cond00_go_in = ~wrapper_early_reset_cond00_done_out & fsm0_out == 5'h1 & tdcc_go_out | ~
    wrapper_early_reset_cond00_done_out & fsm0_out == 5'h15 & tdcc_go_out; // @[]
  assign wrapper_early_reset_cond00_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond10_go_in = ~wrapper_early_reset_cond10_done_out & fsm0_out == 5'h3 & tdcc_go_out | ~
    wrapper_early_reset_cond10_done_out & fsm0_out == 5'h13 & tdcc_go_out; // @[]
  assign wrapper_early_reset_cond10_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_cond20_go_in = ~wrapper_early_reset_cond20_done_out & fsm0_out == 5'h5 & tdcc_go_out | ~
    wrapper_early_reset_cond20_done_out & fsm0_out == 5'hd & tdcc_go_out; // @[]
  assign wrapper_early_reset_cond20_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_par_go_in = ~wrapper_early_reset_static_par_done_out & fsm0_out == 5'hc &
    tdcc_go_out; // @[]
  assign wrapper_early_reset_static_par_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign wrapper_early_reset_static_seq0_go_in = ~wrapper_early_reset_static_seq0_done_out & fsm0_out == 5'h12 &
    tdcc_go_out; // @[]
  assign wrapper_early_reset_static_seq0_done_in = fsm_out == 3'h0 & signal_reg_out; // @[]
  assign tdcc_go_in = go;
  assign tdcc_done_in = fsm0_out == 5'h16; // @[]
endmodule

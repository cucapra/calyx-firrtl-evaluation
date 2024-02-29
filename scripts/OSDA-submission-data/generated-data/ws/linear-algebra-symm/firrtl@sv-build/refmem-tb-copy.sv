module TOP;

// Signals for the main module.
logic go, done, clk, reset;

// fields for memory controlled externally START
wire [3:0] A_int_addr0;
wire [3:0] A_int_addr1;
wire [31:0] A_int_write_data;
wire [31:0] A_int_read_data;
wire A_int_write_en;
wire A_int_read_en;
wire A_int_write_done;
wire A_int_read_done;

wire [3:0] B_int_addr0;
wire [3:0] B_int_addr1;
wire [31:0] B_int_write_data;
wire [31:0] B_int_read_data;
wire B_int_write_en;
wire B_int_read_en;
wire B_int_write_done;
wire B_int_read_done;

wire [3:0] C_int_addr0;
wire [3:0] C_int_addr1;
wire [31:0] C_int_write_data;
wire [31:0] C_int_read_data;
wire C_int_write_en;
wire C_int_read_en;
wire C_int_write_done;
wire C_int_read_done;

wire alpha_int_addr0;
wire [31:0] alpha_int_write_data;
wire [31:0] alpha_int_read_data;
wire alpha_int_write_en;
wire alpha_int_read_en;
wire alpha_int_write_done;
wire alpha_int_read_done;

wire beta_int_addr0;
wire [31:0] beta_int_write_data;
wire [31:0] beta_int_read_data;
wire beta_int_write_en;
wire beta_int_read_en;
wire beta_int_write_done;
wire beta_int_read_done;


// fields for memory controlled externally END

// Declaring memory START
seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D1_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_SIZE(8),
    .WIDTH(32)
    ) A_int (
    .addr1(A_int_addr1),
    .addr0(A_int_addr0),
    .clk(clk),
    .read_data(A_int_read_data),
    .reset(reset),
    .write_data(A_int_write_data),
    .write_en(A_int_write_en),
    .read_en(A_int_read_en),
    .read_done(A_int_read_done),
    .write_done(A_int_write_done)
);

seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D1_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_SIZE(12),
    .WIDTH(32)
    ) B_int (
    .addr1(B_int_addr1),
    .addr0(B_int_addr0),
    .clk(clk),
    .read_data(B_int_read_data),
    .reset(reset),
    .write_data(B_int_write_data),
    .write_en(B_int_write_en),
    .read_en(B_int_read_en),
    .read_done(B_int_read_done),
    .write_done(B_int_write_done)
);

seq_mem_d2 # (
    .D0_IDX_SIZE(4),
    .D1_IDX_SIZE(4),
    .D0_SIZE(8),
    .D1_SIZE(12),
    .WIDTH(32)
    ) C_int (
    .addr1(C_int_addr1),
    .addr0(C_int_addr0),
    .clk(clk),
    .read_data(C_int_read_data),
    .reset(reset),
    .write_data(C_int_write_data),
    .write_en(C_int_write_en),
    .read_en(C_int_read_en),
    .read_done(C_int_read_done),
    .write_done(C_int_write_done)
);

seq_mem_d1 # (
    .IDX_SIZE(1),
    .SIZE(1),
    .WIDTH(32)
    ) alpha_int (
    .addr0(alpha_int_addr0),
    .clk(clk),
    .read_data(alpha_int_read_data),
    .reset(reset),
    .write_data(alpha_int_write_data),
    .write_en(alpha_int_write_en),
    .read_en(alpha_int_read_en),
    .read_done(alpha_int_read_done),
    .write_done(alpha_int_write_done)
);

seq_mem_d1 # (
    .IDX_SIZE(1),
    .SIZE(1),
    .WIDTH(32)
    ) beta_int (
    .addr0(beta_int_addr0),
    .clk(clk),
    .read_data(beta_int_read_data),
    .reset(reset),
    .write_data(beta_int_write_data),
    .write_en(beta_int_write_en),
    .read_en(beta_int_read_en),
    .read_done(beta_int_read_done),
    .write_done(beta_int_write_done)
);


// Declaring memory END

// Declaring main module START
main #() main (
  .go(go),
  .clk(clk),
  .reset(reset),
  .done(done),
  .A_int_addr1(A_int_addr1),
  .A_int_addr0(A_int_addr0),
  .A_int_write_data(A_int_write_data),
  .A_int_read_data(A_int_read_data),
  .A_int_write_en(A_int_write_en),
  .A_int_read_en(A_int_read_en),
  .A_int_write_done(A_int_write_done),
  .A_int_read_done(A_int_read_done),
  .B_int_addr1(B_int_addr1),
  .B_int_addr0(B_int_addr0),
  .B_int_write_data(B_int_write_data),
  .B_int_read_data(B_int_read_data),
  .B_int_write_en(B_int_write_en),
  .B_int_read_en(B_int_read_en),
  .B_int_write_done(B_int_write_done),
  .B_int_read_done(B_int_read_done),
  .C_int_addr1(C_int_addr1),
  .C_int_addr0(C_int_addr0),
  .C_int_write_data(C_int_write_data),
  .C_int_read_data(C_int_read_data),
  .C_int_write_en(C_int_write_en),
  .C_int_read_en(C_int_read_en),
  .C_int_write_done(C_int_write_done),
  .C_int_read_done(C_int_read_done),
  .alpha_int_addr0(alpha_int_addr0),
  .alpha_int_write_data(alpha_int_write_data),
  .alpha_int_read_data(alpha_int_read_data),
  .alpha_int_write_en(alpha_int_write_en),
  .alpha_int_read_en(alpha_int_read_en),
  .alpha_int_write_done(alpha_int_write_done),
  .alpha_int_read_done(alpha_int_read_done),
  .beta_int_addr0(beta_int_addr0),
  .beta_int_write_data(beta_int_write_data),
  .beta_int_read_data(beta_int_read_data),
  .beta_int_write_en(beta_int_write_en),
  .beta_int_read_en(beta_int_read_en),
  .beta_int_write_done(beta_int_write_done),
  .beta_int_read_done(beta_int_read_done)
);
// Declaring main module END

localparam RESET_CYCLES = 3;

// Cycle counter. Make this signed to catch errors with cycle simulation
// counts.
logic signed [63:0] cycle_count;

always_ff @(posedge clk) begin
  cycle_count <= cycle_count + 1;
end

always_ff @(posedge clk) begin
  // Reset the design for a few cycles
  if (cycle_count < RESET_CYCLES) begin
    reset <= 1;
    go <= 0;
  end else begin
    reset <= 0;
    go <= 1;
  end
end

// Output location of the VCD file
string OUT;
// Disable VCD tracing
int NOTRACE;
// Maximum number of cycles to simulate
longint CYCLE_LIMIT;
// Dummy variable to track value returned by $value$plusargs
int CODE;
// Directory to read/write memory
string DATA;

initial begin
  CODE = $value$plusargs("DATA=%s", DATA);
  $display("DATA (path to meminit files): %s", DATA);
  // readmemh for each memory BEGIN
  $readmemh({DATA, "/A_int.dat"}, A_int.mem.mem);
  $readmemh({DATA, "/B_int.dat"}, B_int.mem.mem);
  $readmemh({DATA, "/C_int.dat"}, C_int.mem.mem);
  $readmemh({DATA, "/alpha_int.dat"}, alpha_int.mem);
  $readmemh({DATA, "/beta_int.dat"}, beta_int.mem);

  // readmemh for each memory END
  CODE = $value$plusargs("OUT=%s", OUT);
  CODE = $value$plusargs("CYCLE_LIMIT=%d", CYCLE_LIMIT);
  if (CYCLE_LIMIT != 0) begin
    $display("cycle limit set to %d", CYCLE_LIMIT);
  end
  CODE = $value$plusargs("NOTRACE=%d", NOTRACE);
  if (NOTRACE == 0) begin
    $display("VCD tracing enabled");
    $dumpfile(OUT);
    $dumpvars(0,main);
  end else begin
    $display("VCD tracing disabled");
  end

  // Initial values
  go = 0;
  clk = 0;
  reset = 1;
  cycle_count = 0;

  forever begin
    #10 clk = ~clk;
    if (cycle_count > RESET_CYCLES && done == 1) begin
      // Subtract 1 because the cycle counter is incremented at the end of the
      // cycle.
      $display("Simulated %d cycles", cycle_count - RESET_CYCLES - 1);
      $finish;
    end else if (cycle_count != 0 && cycle_count == CYCLE_LIMIT + RESET_CYCLES) begin
      $display("reached limit of %d cycles", CYCLE_LIMIT);
      $finish;
    end
  end
end

// writememh for each memory BEGIN
final begin
    $writememh({DATA, "/A_int.out"}, A_int.mem.mem);
    $writememh({DATA, "/B_int.out"}, B_int.mem.mem);
    $writememh({DATA, "/C_int.out"}, C_int.mem.mem);
    $writememh({DATA, "/alpha_int.out"}, alpha_int.mem);
    $writememh({DATA, "/beta_int.out"}, beta_int.mem);
end
// writememh for each memory END

endmodule

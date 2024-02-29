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

wire [3:0] p_int_addr0;
wire [31:0] p_int_write_data;
wire [31:0] p_int_read_data;
wire p_int_write_en;
wire p_int_read_en;
wire p_int_write_done;
wire p_int_read_done;

wire [3:0] q_int_addr0;
wire [31:0] q_int_write_data;
wire [31:0] q_int_read_data;
wire q_int_write_en;
wire q_int_read_en;
wire q_int_write_done;
wire q_int_read_done;

wire [3:0] r_int_addr0;
wire [31:0] r_int_write_data;
wire [31:0] r_int_read_data;
wire r_int_write_en;
wire r_int_read_en;
wire r_int_write_done;
wire r_int_read_done;

wire [3:0] s_int_addr0;
wire [31:0] s_int_write_data;
wire [31:0] s_int_read_data;
wire s_int_write_en;
wire s_int_read_en;
wire s_int_write_done;
wire s_int_read_done;


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

seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
    ) p_int (
    .addr0(p_int_addr0),
    .clk(clk),
    .read_data(p_int_read_data),
    .reset(reset),
    .write_data(p_int_write_data),
    .write_en(p_int_write_en),
    .read_en(p_int_read_en),
    .read_done(p_int_read_done),
    .write_done(p_int_write_done)
);

seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
    ) q_int (
    .addr0(q_int_addr0),
    .clk(clk),
    .read_data(q_int_read_data),
    .reset(reset),
    .write_data(q_int_write_data),
    .write_en(q_int_write_en),
    .read_en(q_int_read_en),
    .read_done(q_int_read_done),
    .write_done(q_int_write_done)
);

seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
    ) r_int (
    .addr0(r_int_addr0),
    .clk(clk),
    .read_data(r_int_read_data),
    .reset(reset),
    .write_data(r_int_write_data),
    .write_en(r_int_write_en),
    .read_en(r_int_read_en),
    .read_done(r_int_read_done),
    .write_done(r_int_write_done)
);

seq_mem_d1 # (
    .IDX_SIZE(4),
    .SIZE(8),
    .WIDTH(32)
    ) s_int (
    .addr0(s_int_addr0),
    .clk(clk),
    .read_data(s_int_read_data),
    .reset(reset),
    .write_data(s_int_write_data),
    .write_en(s_int_write_en),
    .read_en(s_int_read_en),
    .read_done(s_int_read_done),
    .write_done(s_int_write_done)
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
  .p_int_addr0(p_int_addr0),
  .p_int_write_data(p_int_write_data),
  .p_int_read_data(p_int_read_data),
  .p_int_write_en(p_int_write_en),
  .p_int_read_en(p_int_read_en),
  .p_int_write_done(p_int_write_done),
  .p_int_read_done(p_int_read_done),
  .q_int_addr0(q_int_addr0),
  .q_int_write_data(q_int_write_data),
  .q_int_read_data(q_int_read_data),
  .q_int_write_en(q_int_write_en),
  .q_int_read_en(q_int_read_en),
  .q_int_write_done(q_int_write_done),
  .q_int_read_done(q_int_read_done),
  .r_int_addr0(r_int_addr0),
  .r_int_write_data(r_int_write_data),
  .r_int_read_data(r_int_read_data),
  .r_int_write_en(r_int_write_en),
  .r_int_read_en(r_int_read_en),
  .r_int_write_done(r_int_write_done),
  .r_int_read_done(r_int_read_done),
  .s_int_addr0(s_int_addr0),
  .s_int_write_data(s_int_write_data),
  .s_int_read_data(s_int_read_data),
  .s_int_write_en(s_int_write_en),
  .s_int_read_en(s_int_read_en),
  .s_int_write_done(s_int_write_done),
  .s_int_read_done(s_int_read_done)
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
  $readmemh({DATA, "/p_int.dat"}, p_int.mem);
  $readmemh({DATA, "/q_int.dat"}, q_int.mem);
  $readmemh({DATA, "/r_int.dat"}, r_int.mem);
  $readmemh({DATA, "/s_int.dat"}, s_int.mem);

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
    $writememh({DATA, "/p_int.out"}, p_int.mem);
    $writememh({DATA, "/q_int.out"}, q_int.mem);
    $writememh({DATA, "/r_int.out"}, r_int.mem);
    $writememh({DATA, "/s_int.out"}, s_int.mem);
end
// writememh for each memory END

endmodule

module led_chika
  (
   input logic        clk,
   input logic        reset_n,
   output logic		led_out
   );
logic [1:0] counter = 2'h0;

always_ff @(posedge clk, negedge reset_n) begin
  if (!reset_n) begin
    counter <= 2'h0;
  end else begin
	  counter <= counter + 1;
  end
end


always_ff @(posedge clk, negedge reset_n) begin
  if (!reset_n) begin
    led_out <= 1'h0;
  end else begin
    if (counter == 0) begin
		led_out <= ~led_out;
	end
  end
end
endmodule // counter




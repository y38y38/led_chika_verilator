#include <iostream>
#include <verilated.h>
#include "Vled_chika.h"
#include <verilated_fst_c.h> 

int time_counter = 0;

int main(int argc, char** argv) {

  Verilated::commandArgs(argc, argv);

  // Instantiate DUT
  Vled_chika *dut = new Vled_chika();
  // -- ここから
  // Trace DUMP ON
  Verilated::traceEverOn(true);
  VerilatedFstC* tfp = new VerilatedFstC;

  dut->trace(tfp, 100);  // Trace 100 levels of hierarchy
  tfp->open("simx.fst");
  // -- ここまで
  
    // Format
  dut->reset_n = 0;
  dut->clk = 0;

  // Reset Time
  while (time_counter < 100) {
    dut->eval();
	 tfp->dump(time_counter);  // 波形ダンプ用の記述を追加
    time_counter++;
  }
  // Release reset
  dut->reset_n = 1;

  int cycle = 0;
 while (time_counter < 500 && !Verilated::gotFinish()) {
	     if ((time_counter % 5) == 0) {
      dut->clk = !dut->clk; // Toggle clock
    }
    if ((time_counter % 10) == 0) {
      // Cycle Count
      cycle ++;
    }

    // Evaluate DUT
    dut->eval();
tfp->dump(time_counter);  // 波形ダンプ用の記述を追加
    time_counter++;
  }

   dut->final();
 tfp->close(); 
}
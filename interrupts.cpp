#include "interrupts.h"
#include "stm32f4xx.h"


#ifdef __cplusplus
extern "C"{
#endif
        
void I2C1_EV_IRQHandler(void)
{
  interruptableClasses[1]->interruptHandler();

}

void I2C1_ER_IRQHandler(void)
{

  

}

int initializeInterrupts(){

  return 0;
}

}
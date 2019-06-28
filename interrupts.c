#include "interrupts.h"

extern "c" {
        
void I2C1_EV_IRQHandler(void)
{
  I2CMaster::handlers[0]-> EV_handler();

}

void I2C1_ER_IRQHandler(void)
{

  I2CMaster::handlers[0]-> ER_handler();

}

}
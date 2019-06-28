/* Includes */
#include "stm32f4xx.h"
#include "gpio.h"
#include "interrupts.h"


//#include "stm32f4xx_syscfg.h"
//#include "misc.h"
//#include "gpio.h"
//#include "i2c.h"
//#include "display.h"

/* Private function prototypes */
void Delay(__IO uint32_t nCount);


int main(void)
{

  const GPIO<GPIOxBaseRegisters::GPIO_G,
  	  PINS::PIN13,
  	  GpioModes::Output,
  	  OutputTypes::PushPull,
  	  OutputSpeed::MediumSpeed,
  	  PullUpPullDown::NoPullUpPullDown,
  	  AlternateFunction::AF0>greenLED;

  const GPIO<GPIOxBaseRegisters::GPIO_G,
  	  PINS::PIN14,
  	  GpioModes::Output,
  	  OutputTypes::PushPull,
  	  OutputSpeed::MediumSpeed,
  	  PullUpPullDown::NoPullUpPullDown,
  	  AlternateFunction::AF0>redLed;
        
        while(1){
          greenLED.toggle();
          redLed.toggle();
          Delay(0xFFFF);
}

  return 0;

}

void Delay(__IO uint32_t nCount)
{
  while(nCount--)
  {
  }
}
#include "interruptable.h"


extern "C"{

enum interruptList
{
  I2C1_EV,
  IC1_ER

 };

 interruptable *interruptableClasses[2];

 int initializeInterrupts();

 }
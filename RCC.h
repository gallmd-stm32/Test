
#ifndef RCC_H_
#define RCC_H_

#include "reg_access.h"
#include "reg_access_dynamic.h"
#include "registers.h"

namespace rcc {

typedef uint32_t BaseRegisterType; 
typedef uint32_t RccControlRegisterType;
typedef uint32_t RccAHB1EnableRegisterType; 

  namespace BaseRegisters
  {
    constexpr BaseRegisterType RccBaseRegister = 0x40023800U;
    
  }

  namespace RccClockControlRegister {

    constexpr RccControlRegisterType RegisterOffset = 0x00U;
    constexpr RccControlRegisterType RegisterReset = 0x00000083U;

    constexpr RccControlRegisterType PLLI2SReady = stm32fxx::bits::BIT27;
    constexpr RccControlRegisterType PLLI2SON = stm32fxx::bits::BIT26;
    constexpr RccControlRegisterType MainPLLReady = stm32fxx::bits::BIT25;
    constexpr RccControlRegisterType MainPLLOn = stm32fxx::bits::BIT24;
    constexpr RccControlRegisterType ClockSecuritySystemEnable = stm32fxx::bits::BIT19;
    constexpr RccControlRegisterType HSEBypass = stm32fxx::bits::BIT18;
    constexpr RccControlRegisterType HSEReady = stm32fxx::bits::BIT17;
    constexpr RccControlRegisterType HSEOn = stm32fxx::bits::BIT16;
    constexpr RccControlRegisterType HSIReady = stm32fxx::bits::BIT1;
    constexpr RccControlRegisterType HSIOn = stm32fxx::bits::BIT0;

  }

  namespace RccAHB1EnableRegister{

    constexpr RccControlRegisterType RegisterOffset = 0x30U;
    constexpr RccControlRegisterType RegisterReset = 0x00100000U;
    
    constexpr RccAHB1EnableRegisterType OtgHsulpi = stm32fxx::bits::BIT30;
    constexpr RccAHB1EnableRegisterType OtgHSEn = stm32fxx::bits::BIT29;
    constexpr RccAHB1EnableRegisterType EthernetMacPTP = stm32fxx::bits::BIT28;
    constexpr RccAHB1EnableRegisterType EthernetReception = stm32fxx::bits::BIT27;
    constexpr RccAHB1EnableRegisterType EthernetTransmission = stm32fxx::bits::BIT26;
    constexpr RccAHB1EnableRegisterType EthernetMAC = stm32fxx::bits::BIT25;
    constexpr RccAHB1EnableRegisterType DMA2DEN = stm32fxx::bits::BIT23;
    constexpr RccAHB1EnableRegisterType DMA2EN = stm32fxx::bits::BIT22;
    constexpr RccAHB1EnableRegisterType DMA1EN = stm32fxx::bits::BIT21;
    constexpr RccAHB1EnableRegisterType CcmDataRam = stm32fxx::bits::BIT20;
    constexpr RccAHB1EnableRegisterType BackupSramInterface = stm32fxx::bits::BIT18;
    constexpr RccAHB1EnableRegisterType CRCEN = stm32fxx::bits::BIT12;
    constexpr RccAHB1EnableRegisterType GpioK = stm32fxx::bits::BIT10;
    constexpr RccAHB1EnableRegisterType GpioJ = stm32fxx::bits::BIT9;
    constexpr RccAHB1EnableRegisterType GpioI = stm32fxx::bits::BIT8;
    constexpr RccAHB1EnableRegisterType GpioH = stm32fxx::bits::BIT7;
    constexpr RccAHB1EnableRegisterType GpioG = stm32fxx::bits::BIT6;
    constexpr RccAHB1EnableRegisterType GpioF = stm32fxx::bits::BIT5;
    constexpr RccAHB1EnableRegisterType GpioE = stm32fxx::bits::BIT4;
    constexpr RccAHB1EnableRegisterType GpioD = stm32fxx::bits::BIT3;
    constexpr RccAHB1EnableRegisterType GpioC = stm32fxx::bits::BIT2;
    constexpr RccAHB1EnableRegisterType GpioB = stm32fxx::bits::BIT1;
    constexpr RccAHB1EnableRegisterType GpioA = stm32fxx::bits::BIT0;


  }
}

#endif 
# SystickTimer

**Enabling SystickTimer for every 100ms in STM32F103C8 using KEIL**

**IDE:** KEIL
**MCU :** STM32F103C8T6 aka Bluepill
**frequency:** 72Mhz

Custom drivers created for GPIO functions.
`gp_drive.h` file having functions that can configure the STM32 GPIO ports and enable the pins as required. 

Enabled systick timer registers for every 100ms. We can observe the output by toggling the PC13 pin for every 100ms. 
By changing the load register values to appropriate values we can achieve our required delay.

# SystickTimer
Enabling SystickTimer for every 100ms in STM32F103C8 using KEIL

IDE : KEIL
MCU : STM32F103C8T6 aka Bluepill
frequency : 72Mhz

Custom drivers created for GPIO functions. We can find gp_drive.h for using all the gpios with out any hasle.
bare metal programmed and enabled systick timer registers for every 100ms. We can observe the output by toggling PC13 pin for every 100ms.
By changing the load register values by appropriate values we can achieve our required delay.

/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
#if 0
	__asm volatile ("LDR R1 , =#0x20001000");
	__asm volatile ("LDR R2 , =#0x20001004");
	__asm volatile ("LDR R0 , [R1]");
	__asm volatile ("LDR R1 , [R2]");
	__asm volatile ("ADD R0 , R0 , R1");
	__asm volatile ("STR R0 , [R2]");
#endif

	int val = 50;
	__asm volatile("MOV R0,%0" : : "r"(val)); // input operand only

	int control_reg;
	// write the value of control register to control_reg var
	__asm volatile("MRS %0,CONTROL": "=r"(control_reg)); // output operand only

	int var1 = 10 , var2;
	__asm volatile("MOV %0,%1": "=r"(var2) : "r"(var1)); // input and output operand

	int p1 , *p2;
	p2 = (int*)20000008;
	__asm volatile("LDR %0 , [%1]" : "=r"(p1) : "r"(p2)); // input and output operand


	for(;;);
}

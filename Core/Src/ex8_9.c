#include "ex8_9.h"

void setNumberOnClock(int num)
{
	switch (num)
	{
		case 0:
			HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
			break;
		default:
			// Handle invalid input if necessary
			break;
	}
}

void clearNumberOnClock(int num)
{
	switch (num)
	{
		case 0:
			HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
			break;
		default:
			// Handle invalid input if necessary
			break;
	}
}

void init_ex8_9()
{}
void ex8_9_run()
{
	setNumberOnClock(1);
	HAL_Delay(500);
	setNumberOnClock(9);
	HAL_Delay(500);
	setNumberOnClock(0);
	HAL_Delay(500);
	setNumberOnClock(4);
	HAL_Delay(500);
	clearNumberOnClock(4);
	HAL_Delay(500);
	clearNumberOnClock(0);
	HAL_Delay(500);
	clearNumberOnClock(9);
	HAL_Delay(500);
	clearNumberOnClock(1);
	HAL_Delay(500);
}

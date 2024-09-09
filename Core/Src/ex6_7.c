#include <ex6_7.h>

void init_digitalClock()
{
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
	HAL_Delay(500);
}

void clearAllClock()
{
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, RESET);
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	HAL_Delay(1000);
}
void init_ex6_7()
{
	init_digitalClock();
}

void ex6_7_run()
{
	init_digitalClock();
	clearAllClock();
}

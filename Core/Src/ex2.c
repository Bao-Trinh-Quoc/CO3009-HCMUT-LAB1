#include "ex2.h"

int traffic_status = LED_GREEN;
int counter = TIME_LED_GREEN;

void init_exercise2()
{
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_Delay(500);
}

void turn_on_red()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void turn_on_yellow()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
}

void turn_on_green()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
}

void exercise2_run()
{
	switch(traffic_status)
		  {
		  case LED_RED:
			  turn_on_red();
			  counter--;
			  if (counter <= 0)
			  {
				  traffic_status = LED_GREEN;
				  counter = TIME_LED_GREEN;
			  }
			  break;
		  case LED_YELLOW:
			  turn_on_yellow();
			  counter--;
			  if (counter <= 0)
			  {
				  traffic_status = LED_RED;
				  counter = TIME_LED_RED;
			  }
			  break;
		  case LED_GREEN:
			  turn_on_green();
			  counter--;
			  if (counter <= 0)
			  {
				  traffic_status = LED_YELLOW;
				  counter = TIME_LED_YELLOW;
			  }
			  break;
		  }
		  HAL_Delay(1000);
}

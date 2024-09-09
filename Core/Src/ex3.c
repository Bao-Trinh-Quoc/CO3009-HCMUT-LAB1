#include "ex3.h"

int traffic1_status = LED_GREEN;
int traffic2_status = LED_RED;
int counter1 = TIME_LED_GREEN;
int counter2 = TIME_LED_RED;

void init_exercise3()
{
	  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, RESET);
	  HAL_Delay(500);

	  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, RESET);
	  HAL_Delay(500);

	  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, RESET);

	  HAL_Delay(1000);

	  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, RESET);
	  HAL_Delay(500);

	  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, RESET);
	  HAL_Delay(500);

	  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, RESET);
}

void turn_on_red1()
{
	  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, RESET);
}

void turn_on_yellow1()
{
	  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, RESET);
}

void turn_on_green1()
{
	  HAL_GPIO_WritePin(LED1_RED_GPIO_Port, LED1_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED1_YELLOW_GPIO_Port, LED1_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED1_GREEN_GPIO_Port, LED1_GREEN_Pin, SET);
}

void turn_on_red2()
{
	  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, RESET);
}

void turn_on_yellow2()
{
	  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, RESET);
}

void turn_on_green2()
{
	  HAL_GPIO_WritePin(LED2_RED_GPIO_Port, LED2_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED2_YELLOW_GPIO_Port, LED2_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED2_GREEN_GPIO_Port, LED2_GREEN_Pin, SET);
}
void exercise3_run()
{
	switch(traffic1_status)
	  {
	  case LED_RED:
		  turn_on_red1();
		  counter1--;
		  if (counter1 <= 0)
		  {
			  traffic1_status = LED_GREEN;
			  counter1 = TIME_LED_GREEN;
		  }
		  break;
	  case LED_YELLOW:
		  turn_on_yellow1();
		  counter1--;
		  if (counter1 <= 0)
		  {
			  traffic1_status = LED_RED;
			  counter1 = TIME_LED_RED;
		  }
		  break;
	  case LED_GREEN:
		  turn_on_green1();
		  counter1--;
		  if (counter1 <= 0)
		  {
			  traffic1_status = LED_YELLOW;
			  counter1 = TIME_LED_YELLOW;
		  }
		  break;
	  }

	switch(traffic2_status)
		  {
		  case LED_RED:
			  turn_on_red2();
			  counter2--;
			  if (counter2 <= 0)
			  {
				  traffic2_status = LED_GREEN;
				  counter2 = TIME_LED_GREEN;
			  }
			  break;
		  case LED_YELLOW:
			  turn_on_yellow2();
			  counter2--;
			  if (counter2 <= 0)
			  {
				  traffic2_status = LED_RED;
				  counter2 = TIME_LED_RED;
			  }
			  break;
		  case LED_GREEN:
			  turn_on_green2();
			  counter2--;
			  if (counter2 <= 0)
			  {
				  traffic2_status = LED_YELLOW;
				  counter2 = TIME_LED_YELLOW;
			  }
			  break;
		  }
	HAL_Delay(1000);
}

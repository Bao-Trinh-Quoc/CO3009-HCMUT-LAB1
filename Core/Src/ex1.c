#include "ex1.h"

int led_status = LED_ON;
//int counter = TIME_SWITCH;
extern int counter;	// Declaration of counter

void init_exercise1()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
}

void led_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}

void exercise1_run(){
	switch(led_status){
		case LED_ON:
			led_on();
			counter--;
			if (counter <= 0)
			{
			  led_status = LED_OFF;
			  counter = TIME_SWITCH;
			}
			break;
		case LED_OFF:
			led_off();
			counter--;
			if (counter <= 0)
			{
			  led_status = LED_ON;
			  counter = TIME_SWITCH;
			}
			break;
		default:
			break;
	}
	HAL_Delay(1000);
}

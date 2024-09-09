#include "ex4.h"

int ex4_counter = 0;

void display7SEG(int num)
{
    // GFEDCBA
    switch (num)
    {
    case 0:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);
        break;
    case 1:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, SET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);
        break;
    case 2:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, SET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    case 3:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    case 4:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, SET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    case 5:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    case 6:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, SET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    case 7:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, SET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, SET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, SET);
        break;
    case 8:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    case 9:
        HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
        HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
        break;
    default:
        break;
    }
}

void init_exercise4()
{
    // Check connection here if needed
	// 7
    HAL_GPIO_WritePin(SEG1_0_GPIO_Port, SEG1_0_Pin, RESET);
    HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, RESET);
    HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, RESET);
    HAL_GPIO_WritePin(SEG1_3_GPIO_Port, SEG1_3_Pin, RESET);
    HAL_GPIO_WritePin(SEG1_4_GPIO_Port, SEG1_4_Pin, SET);
    HAL_GPIO_WritePin(SEG1_5_GPIO_Port, SEG1_5_Pin, RESET);
    HAL_GPIO_WritePin(SEG1_6_GPIO_Port, SEG1_6_Pin, RESET);
    HAL_Delay(1000);
}

void exercise4_run()
{
	if(ex4_counter >= 10)
	  ex4_counter = 0;
	display7SEG(ex4_counter++);
	HAL_Delay(1000);
}

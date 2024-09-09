#include "ex5.h"


// Changeds made in ex3

void init_exercise5()
{}

void display7SEG1(int num)
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
void display7SEG2(int num)
{
    // GFEDCBA
    switch (num)
    {
    case 0:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, SET);
        break;
    case 1:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, SET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, SET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, SET);
        break;
    case 2:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, SET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    case 3:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    case 4:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, SET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, SET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    case 5:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, SET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    case 6:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, SET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    case 7:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, SET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, SET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, SET);
        break;
    case 8:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    case 9:
        HAL_GPIO_WritePin(SEG2_0_GPIO_Port, SEG2_0_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_3_GPIO_Port, SEG2_3_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_4_GPIO_Port, SEG2_4_Pin, SET);
        HAL_GPIO_WritePin(SEG2_5_GPIO_Port, SEG2_5_Pin, RESET);
        HAL_GPIO_WritePin(SEG2_6_GPIO_Port, SEG2_6_Pin, RESET);
        break;
    default:
        break;
    }
}

void exercise5_run()
{
	display7SEG1(counter1);	// if u want 0 make counter - 1
	display7SEG2(counter2);
	exercise3_run();
}

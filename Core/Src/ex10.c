#include "ex10.h"

int second = 0;
int minute = 0;
int hour = 0;

void init_ex10()
{
	init_digitalClock();
	clearAllClock();
}

void ex10_run()
{
	clearAllClock();
	setNumberOnClock(second / 5);
	setNumberOnClock(minute / 5);
	setNumberOnClock(hour / 2);

	HAL_Delay(10);

	second++;
	if (second >= 60)
	{
		second = 0;
		minute++;
	}
	if (minute >= 60)
	{
	  minute = 0;
	  hour++;
	}
	if (hour >= 24)
	{
	  hour = 0;
	}
}

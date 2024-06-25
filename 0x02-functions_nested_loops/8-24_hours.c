#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack
 * outer loop iterates over each hour 4rm 0-23
 * inner loop iterates over each min 4rm 0-59
 * For each minute, calculates the individual digits hr and min
 * prints them in the format 'HH:MM' using _putchar
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

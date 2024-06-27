#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 */
void more_numbers(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}

		_putchar('\n');
	}
}

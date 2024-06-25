#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * The outer loop iterates over each row 4rm 0-9
 * Inner loop iterates over each column 4rm 0-9
 * Calculates the product of 'i' and 'j'for each cell in table
 * Prints comma & space after each num, besides 1st column
 * Adds an xtra space for alignment if single digit
 * Prints the 10s and units digits separately product>=10
 * Prints the units digit directly if product <10
 */
int void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (product < 10 && j != 0)
			{
				_putchar(' ');
			}

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}

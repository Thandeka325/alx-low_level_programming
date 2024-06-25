#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the 'n' times table, starting with 0
 * @n: Number to print times table for
 * Takes integer 'n' as input
 * Checks if 'n'is within valid range (0 to 15)
 * 'for' loops iterare through rows(i) & columns(j)
 * It calculates the product 'i * j'
 * Prints it formatted o ensure proper alignment(%2d and %4d)
 * If 'n' is > 15, < 0 function should not print anything
 *
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%2d", i * j);
			else
				printf("%4d", i * j);
		}
		printf("\n");
	}
}

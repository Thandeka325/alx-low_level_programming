#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the 'n' times table, starting with 0
 * @n: Number to print times table for
 * Takes integer 'n' as input
 * Checks if 'n'is within valid range (0 to 15)
 * If true iterates through nested 'for' loop generates times table
 * Prints each product 'i * j'using 'printf' with '%4d' format
 * The above ensures each num occupies at least 4 characters
 * If 'n' is > 15, < 0 function should not print anything
 *
 */
void print_times_table(void)
{
	int n, i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++) 
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}
}

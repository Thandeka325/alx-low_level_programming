#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * The outer loop iterates i from 0 to n-1
 * The inner loop iterates j from 0 to i-1 to print spaces,
 * before printing the backslash character \.
 */
void print_diagonal(int n)
{
	int i, j;


	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

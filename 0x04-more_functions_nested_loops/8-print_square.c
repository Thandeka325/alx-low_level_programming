#include "main.h"

/**
 * print_square - Prints a square
 * @size: Is the size of the square
 * Use the character # to print the square
 * If size is 0 or less, the function should print only a new line
 * The outer loop iterates i from 0 to size-1 to handle the rows
 * The inner loop iterates j from 0 to size-1 to handle the columns
 */
void print_square(int size)
{
	int i, j;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

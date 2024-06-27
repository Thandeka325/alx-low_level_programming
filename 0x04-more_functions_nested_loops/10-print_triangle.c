#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Is the size of the triangle
 * If size is 0 or less, print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

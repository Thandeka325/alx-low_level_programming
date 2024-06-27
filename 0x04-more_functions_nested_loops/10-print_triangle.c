#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Is the size of the triangle
 * If size is 0 or less, print only a new line
 * Use the character # to print the triangle
 * The 'i' loop iterates frm 1 to size to handle each row of the triangle
 * The 'j' loop iterates frm 1 to i to print i number of # characters,
 * in each row
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++);
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

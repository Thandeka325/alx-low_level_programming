#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * The print_line function uses a for loop to iterate from 0 to n-1
 * Inside the loop, it prints the character _ using _putchar.
 * If n is 0 or less, the loop does not execute,
 * and only the newline character is printed.
 */
void print_line(int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

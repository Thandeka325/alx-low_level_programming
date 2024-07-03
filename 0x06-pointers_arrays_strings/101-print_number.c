#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	/* Handle negative numbers */
	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n
	}

	/* Recursively print each digit */
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

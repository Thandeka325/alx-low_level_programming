#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	/* Recursively print each digit */
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

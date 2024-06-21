#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase
 *
 * loop iterates over the integers from 0 to 9
 *
 * integer is converted to its corresponding character
 *
 * second loop iterates over the integers from 0 to 5
 *
 *integer converted to corresponding hexadecimal character
 * Return: 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}

	for (x = 0; x <= 5; x++)
	{
		putchar(x + 'a');
	}

	putchar('\n');

	return (0);
}

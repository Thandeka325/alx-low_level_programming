#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 from 0, without using char
 *
 * for loop iterates over the integers from 0 to 9
 *
 * inside the loop,integer converted by adding the ASCII value of 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

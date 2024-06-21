#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 *
 * The for loop iterates over the characters from 0 to 9
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}

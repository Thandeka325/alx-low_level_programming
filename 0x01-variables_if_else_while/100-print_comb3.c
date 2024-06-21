#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits
 * Comma and space separated, two digits must be different
 * 01 and 10 considered same combo of 0 and 1
 * Print only the smallest combinations
 * Be in ascending order
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');/*print the first digit*/
			putchar(y + '0');/*print second digit*/

			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

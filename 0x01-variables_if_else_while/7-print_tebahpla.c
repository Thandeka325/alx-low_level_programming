#include <stdio.h>

/**
 * main - Print lowercase alphabets in reverse
 *
 * for loop iterates over the characters from z to a in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

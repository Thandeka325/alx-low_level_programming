#include <stdio.h>

/**
 * main - Print all alphabets in lowercase, except letter e and q
 *
 * The if function inside the loop checks if the letter is not e or q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Print all alphabets in lowercase except q and e
 * Inside the loop,an if statement checks if the current letter is not q and not e
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

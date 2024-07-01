#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to be reversed and printed
 * The while loop calculates the length of the string
 * for loop iterates backwards thru the string,
 * printing each character
 *
 */
void print_rev(char *s)
{
	int x = 0;
	int i;

	while (s[x] != '\0')
	{
		x++;
	}

	for (i = x -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

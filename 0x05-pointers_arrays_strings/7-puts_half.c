#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 * Print second half of the string
 * If the number of char is odd, print the last n
 * Characters of the string where n = (length_of_the_string - 1) / 2
 *
 */
void puts_half(char *str)
{
	int x = 0;
	int start;
	int i;

	/* Calculate the length of string */
	while (str[x] != '\0')
	{
		x++;
	}

	/* Determine the starting point 4 printing 2nd hlf */
	if (x % 2 == 0)
	{
		start = x / 2;
	}
	else
	{
		start = (x - 1) / 2 + 1;
	}

	/* Print the 2nd hlf of the string */
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

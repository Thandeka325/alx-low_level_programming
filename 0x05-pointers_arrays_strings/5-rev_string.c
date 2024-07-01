#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * The while loop calculates the length of the string
 * for loop swaps characters from beginning and end,
 * of the string, moving towards the center
 *
 */
void rev_string(char *s)
{
	int x = 0;
	int i;
	char y;

	/* Calculate length of string */
	while (s[x] != '\0')
	{
		x++;
	}

	/* Swap characters */
	for (i = 0; i < x / 2; i++)
	{
		y = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = y;
	}
}

#include "main.h"

/**
 * islower - checks for lowercase characters
 * @c: The character to check
 *
 * Takes an integer 'c' that represents an ASCII character
 * Checks if 'c' is within ASCII range for lowercase letters
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

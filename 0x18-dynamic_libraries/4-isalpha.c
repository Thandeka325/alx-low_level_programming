#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: Character to check
 *
 * Takes an integer'c' which represents an ASCII character
 * Checks if 'c' is within ASCII range for lower and uppercase
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

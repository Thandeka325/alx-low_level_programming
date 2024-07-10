#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string whose lenth is to be calculated
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursiion(s + 1));
}

#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 * '@s2' can contain the special character *.
 * The special char * can replace any string(including an empty string)
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0' || wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

#include "main.h"

/**
 * _strchr - Gets the length os a prefix substring
 * @s: string to be searched
 * @c: character to locate
 *
 * Return: pointer to the 1st occurrence of the character c,
 * in the string s, or NULL if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}

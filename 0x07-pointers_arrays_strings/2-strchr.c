#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: character to locate
 *
 * Return: a pointer to the first occurrance of character c in the string
 * s or NULL if character is not founf
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

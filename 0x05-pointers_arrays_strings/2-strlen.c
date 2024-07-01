#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string whose length is to be determined
 * The 'while' loop continues until end of string
 * When '*s' is '\0'
 * 'length' is incremented for each character in the strng
 *
 * Return: The length of the string
 *
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s)
	{
		x++;
		s++;
	}

	return (x);
}


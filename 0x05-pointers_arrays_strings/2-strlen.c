#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 * The length is calculated by counting the number,
 * of characters until the null teminator '\0' is encounted.
 *
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return a;
}

#include "main.h"

/**
 * _strspn - Gets the length of prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes in the initial segment of s
 * which consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		if (found == 0)
			return (count);
	}

	return (count);
}

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * iterates through both strings character by character.
 * If a mismatch is found between characters at the same position in,
 * 's1' & 's2', returns the difference between ASCII values of those char
 *
 * Return: an integer <, =, or > 0 if s1 is found,
 * respectively, to be <, to match, > than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to contatenate to s1
 *
 * Return: A pointer to the newly allocated space in memory,that contains s1,
 * followed by the first n bytes of s2, and null terminated
 * NULL if function fails, if NULL is passed treat it as an empty string
 * If n is >= to the length of s2 then use entire string s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len1, len2;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculate the lengths of s1 and s2 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	/* If n is greater than or equal to len2, use the entire string s2 */
	if (n >= len2)
		n = len2;
	/* Allocate memory for the new string */
	new_str = malloc(sizeof(char) * (len1 + n + 1));

	if (new_str == NULL)
		return (NULL);
	/* Copy s1 to new_str */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	/* Copy the first n bytes of s2 to new_str */
	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];
	/*NULL-terminate the new string */
	new_str[i] = '\0';

	return (new_str);
}

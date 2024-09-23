#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: the destination buffer to copy the string to
 * @src: the source string to be copied
 * @n: the maxium number of bytes to be copied 4rm src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n characters fm src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If the length of src is less than n, pad with null byte */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

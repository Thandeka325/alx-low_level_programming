#include "main.h"

/**
 * _memcpy - copies memory area,
 * Copies n bytes 4rm memory area src to memory area dest,
 * @dest: destination memory
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

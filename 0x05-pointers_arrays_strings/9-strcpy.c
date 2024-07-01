#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating,
 * null byte (\0),to the buffer pointed to by dest
 * @dest: The buffer to copy the string to
 * @src: The source string to be copied
 * while loop continues untill the null teminator
 * after loop, null terminator is added to the end of dest string
 *
 * Return: The source string to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

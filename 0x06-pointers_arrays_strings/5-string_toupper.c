#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be modified
 * itereates through each character in the string using a 'while'loop,
 * until the null terminator (''\0'') is reached
 * For each char,it checks if it is a lowercase letter (between 'a'& 'z')
 * it converts it to uppercase by subtracting 32 from its ASCII value.
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}

#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s:
 * The number in the string can be preceded by an infinite number of characters
 * take into account all the - and + signs before the number
 * not allowed to use long
 * not allowed to declare new variables of “type” array
 * not allowed to hard-code special values
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int has_started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !has_started)
		{
			sign = -sign;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			has_started = 1;
		}
		else if (has_started)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}

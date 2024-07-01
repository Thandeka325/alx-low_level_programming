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
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i] > '9')
				break;
			f = 0;
		}
		i++
	}
	if (f == 0)
		return (0);

	return (n);
}

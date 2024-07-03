#include "main.h"

/**
 * cap_string - capatalizes all words of a string
 * @str: the string to be modified
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, j;

	char spec[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == spec[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}

#include "main.h"

/**
 * cap_string - capatalizes all words of a string
 * @str: the string to be modified
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1;

	/* List of separators */
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		/* Check if current cha is a separator */
		int is_separator = 0;

		for (int j = 0; separator[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator)
		{
			cap_next = 1;
		}
		else if
		{
			str[i] = str[i] - 32;
			ap_next = 0;
		}
		else
		{
			cap_next = 0;
		}

		i++;
	}

	return (str);
}

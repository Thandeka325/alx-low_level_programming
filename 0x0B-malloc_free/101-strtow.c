#include "main.h"
#include <stdlib.h>

/**
 * count_words - Helper function to count the number of words in string
 * @str: The string to be counted
 *
 * Return: The number of words
 */
int  count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to be counted
 * Each element of the array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 *
 * Return: A pointer to an array of strings (words),
 * NULL if function fail or str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	i = 0;

	for (j = 0; j < word_count; j++)
	{
		while (str[i] && str[i] == ' ')
			i++;
		len = 0;

		while (str[i + len] && str[i + len] != ' ')
			len++;
		words[j] = malloc((len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[j][k] = str[i + k];
		words[j][len] = '\0';
		i += len;
	}
	words[j] = NULL;
	return (words);
}

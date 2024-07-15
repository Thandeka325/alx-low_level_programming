#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,initializez it with a specific char
 * @size: The size of the array to be created
 * @c: The char to initialize the array with
 *
 * Return: Null if size = 0, a pointer to the array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);


	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

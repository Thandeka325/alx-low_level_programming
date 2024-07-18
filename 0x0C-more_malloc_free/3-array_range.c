#include "main.h"
#include <stdlib>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 * The array created should contain all the values from min (included),
 * to max (included), ordered from min to max
 *
 * Return: The pointer to the newly created array
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* If min is greater than max, return NULL */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;
	/* Allocate memory for the array */
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < size; i++, min++)
		array[i] = min;

	return (array);
}

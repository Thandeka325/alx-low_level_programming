#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to be iterated over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Description: This function iterates over each element of the array
 * and applies the function pointed to by @action to each element.
 * If @array or @action is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Check if array and action pointer are not NULL */
	if (array == NULL || action == NULL)
		return;

	/* Iterates over each element of the array & apply the action function */
	for (i = 0; i <  size; i++)
	{
		action(array[i]);
	}
}

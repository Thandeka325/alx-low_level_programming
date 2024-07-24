#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to be searched.
 * @size: The number of elements in an array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches, return -1. If size is
 * less than or equal to 0, return -1.
 *
 * Description: This function searches for an integer in an array
 * using the comparison function pointed by @cmp. If the size is
 * less than or equal to 0, or if no element matches, i returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Check if array & cmp pointer are not NULL & size is greater than 0 */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* Iterate over each element of the array & apply the cmp function */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	/* If no element matches, return -1 */
	return (-1);
}

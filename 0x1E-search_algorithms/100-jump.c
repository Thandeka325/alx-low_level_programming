#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or
 * if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev, index;

	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the step size */
	step = (int)sqrt((double)size);
	prev = 0;
	index = 0;

	/* Jump in blocks to locate the potential range */
	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		prev = index;
		index += step;
	}

	/* Print the range where the value may exist */
	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	/* Perform linear search in the identified range */
	for (; prev < (int)size && prev <= index; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	/* Value not found */
	return (-1);
}

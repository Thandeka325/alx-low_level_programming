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
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	/* Determine jump step as the square root of the array size */
	step = sqrt(size);
	prev = 0;

	/* Jump in blocks to find the range where the value may exist */
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] >= value || prev + step >= size)
			break;
		prev += step;
	}

	/* Find the block's start and end */
	size_t start = prev > step ? prev - step : 0;
	size_t end = prev < size ? prev : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	/* Perform linear search within the block */
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	/* Value not found */
	return (-1);
}

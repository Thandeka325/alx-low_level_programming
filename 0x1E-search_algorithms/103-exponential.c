#include "search_algos.h"

/**
 * binary_search - Performs binary search on a subarray.
 * @array: Pointer to the first element of the array to search in.
 * @low: The lower bound index of the subarray.
 * @high: The upper bound index of the subarray.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or
 * if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%zu] and [%zu]\n", i / 2, i);
	return (binary_search(array, i / 2, (i < size ? i : size - 1), value));
}

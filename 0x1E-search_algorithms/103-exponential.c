#include "search_algos.h"

/**
 * binary_search - Performs binary search on an array.
 * @array: Pointer to the first element of the array to search in.
 * @size: The size of the array to search in.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
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
	size_t i = 1, high;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		i *= 2;
	}
	high = (i < size ? i : size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n",
			(unsigned long)(i / 2), (unsigned long)high);
	return (binary_search(array + i / 2, high - (i / 2) + 1, value));
}

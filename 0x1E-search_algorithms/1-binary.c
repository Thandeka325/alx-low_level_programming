#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array being searched.
 * @array: Pointer to the first element of the array to print.
 * @start: Starting index of the subarray.
 * @end: Ending index of the subarray.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integer
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where value is located,
 * or -1 if the value is not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}

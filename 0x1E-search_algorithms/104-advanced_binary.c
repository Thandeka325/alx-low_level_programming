#include "search_algos.h"

/**
 * print_array - Prints the elements of an array within a given range.
 * @array: Pointer to the first element of the array.
 * @low: The starting index of the range to print.
 * @high: The ending index of the range to print.
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}

	printf("\n");
}

/**
 * advanced_binary_helper - Helper function for the advanced binary search.
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_helper(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_helper(array, mid + 1, high, value));
	else
		return (advanced_binary_helper(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using an advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found or
 * if the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_helper(array, 0, size - 1, value));
}

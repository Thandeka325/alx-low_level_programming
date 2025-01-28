#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located, or -1 if not found or
 * if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	double f;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		if (array[high] == array[low])
		{
			if (array[low] == value)
				return (low);
			return (-1); }
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);

		pos = (size_t)(low + f);

		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			return (-1); }
		printf(" = [%d]\n", array[pos]); }

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	return (-1);
}

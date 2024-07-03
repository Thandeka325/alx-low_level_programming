#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 * 'for' loop iterates through the 1st half of the array
 * it swaps the element at position i with the element at position n - 1 - i
 * process continues until the middle of the array is reached ('n / 2')
 * 'tmp' is used as a temp variable to hold the value of swapped elemment
 *
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

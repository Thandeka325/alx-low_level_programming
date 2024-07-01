#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements of the array
 * Numbers must be separated by comma and space,
 * be displayed in the same order as they are stored
 * for loop iterates 4rm 1st element to the 'n'-th element
 * if statement ensures that comma and space are printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

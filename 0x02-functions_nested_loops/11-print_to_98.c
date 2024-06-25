#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 * Takes integer 'n' as input
 * Checks if 'n' is <= 98
 * If above check is true loop iterates from n to 98
 * Prints each number followed by comma & space
 * If false (n > 98) iterates from 'n' down to 98
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the first 50 fibonacci numbers, starting with 1 & 2
 * Numbers must be comma and space separated
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}

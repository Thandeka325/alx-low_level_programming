#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n = 0)
	{
		printf("The number is zero\n");
	}
	else (n < 0)
	{
		printf("The number is negative\n");
	}
	return (0);
}


#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}

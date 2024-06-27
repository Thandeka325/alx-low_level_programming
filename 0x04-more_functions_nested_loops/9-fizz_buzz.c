#include <stdio.h>

/**
 * main - Entry point
 * Prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three, prints "Fizz" instead of the number.
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0 (Success)
 */
int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 )
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

#include <stdio.h>

/**
 * main - Print all possible combinations of two-digit numbers
 * Numbers range from 0 to 99,two numbers separated by a space
 * Printed with 2 digits
 * Combination separated by comma and a space,ascending order
 * print_number - Function that prints a two-digit.
 * @n: the number to print
 * Description: can only use _putchar to print.
 * Return: 0 (Success)
 */
void print_number(int n)
{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
}

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			print_number(num1);
			putchar(' ');
			print_number(num2);

			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 * separated by comma and followed by a space
 * for loop iterates over integers and convert to corresponding char
 * if function is set to print comma and a space if digit is not 9
 * Return: 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
		putchar(y + '0');/*print the digit*/
		if (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

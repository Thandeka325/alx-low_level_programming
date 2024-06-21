#include <stdio.h>

/**
 * main - Print all possible different combinations of 3 digits
 * Be comma and space separated,all digits be different
 * Print smallest combos, in ascending order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y <= 8; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');/*print first digit*/
				putchar(y + '0');/*print second digit*/
				putchar(z + '0');/*print third digit*/

				if (!(x == 7 && y == 8 && z == 9))/*check if its not the last combination*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

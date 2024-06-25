#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints 10x the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			_putchar(alphabet[j]);
		}
		_putchar('\n');
	}
}

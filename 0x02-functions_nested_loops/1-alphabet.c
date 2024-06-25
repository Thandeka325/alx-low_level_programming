#include "main.h"

/**
 * print_alphabet - Entry point
 * 
 * Description: prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}

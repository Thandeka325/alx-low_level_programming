#include <stdio.h>

/**
 * main - Print the alphabet in lowercase,followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)/*loop iterates over the charachers a-z*/
		putchar(c);
	putchar('\n');
	return (0);
}

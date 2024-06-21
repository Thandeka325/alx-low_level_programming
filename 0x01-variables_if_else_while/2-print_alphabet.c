#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++) /**loop used to iterate over the char from a-z */
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: The string to be processed
 * for loop iterates thru the string untl null,
 * terminator ('\0') is reached
 * if statement checks if the index is even,
 * and if so, it prints the character at that index
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0 str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

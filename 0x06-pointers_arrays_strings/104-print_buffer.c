#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes to be printed from the buffer
 *
 * Description: The output should print 10 bytes per line.
 * Line starts with the position of the first byte in hexadecimal (8 chars),
 * starting with '0'.Shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space. It also shows the content of the
 * buffer,printing printable characters and replacing non-printable
 * characters with '.'. Each line ends with a newline.
 * If the size is 0 or less, the output is just a newline.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}

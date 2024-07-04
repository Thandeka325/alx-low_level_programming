#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes to be printed from the buffer
 * The output should print 10 bytes per line
 * starts with the position of the first byte in hexadecimal (8 chars)
 * starting with '0'
 * shows the hexadecimal content (2 chars) of the buffer
 * '2' bytes at a time, separated by a space
 * shows the content of the buffer,
 *  If byte is a printable character, print the letter, if not, print '.'
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if ((i + j) < size)
                printf("%02x", b[i + j]);
            else
                printf("  ");
            if (j % 2)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if ((i + j) < size)
            {
                char c = b[i + j];
                if (c >= 32 && c <= 126)
                    printf("%c", c);
                else
                    printf(".");
            }
        }
        printf("\n");
    }
}

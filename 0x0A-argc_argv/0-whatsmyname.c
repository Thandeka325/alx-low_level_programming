#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	(void)argc;/* Avoid unused parameter warning */

	printf("%s\n", argv[0]);
	return (0);
}

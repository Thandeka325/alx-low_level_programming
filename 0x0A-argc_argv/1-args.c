#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	(void)argv;/* Avoid unused parameter warnings */

	printf("%d\n", argc - 1);
	return (0);
}

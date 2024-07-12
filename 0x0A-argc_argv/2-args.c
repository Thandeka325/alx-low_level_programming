#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

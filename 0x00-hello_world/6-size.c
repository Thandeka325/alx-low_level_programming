#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	character char;
	integer int;
	long integer long int;
	long long integer long long int;
	float float;

	printf("Size of a character: %lu bytes\n", sizeof(char));
	printf("Size of an integer: %lu bytes\n", sizeof(int));
	printf("Size of a long integer: %lu bytes\n", sizeof(long int));
	printf("Size of a lon long integer: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));
	return (0);
}

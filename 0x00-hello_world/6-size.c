#include <stdio.h>

/**
 * main -Entry point
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

	printf("Size of character: %zu bytes\n", sizeof(char));
	printf("Size of integer: %zu bytes\n", sizeof(int));
	printf("Size of long integer: %zu bytes\n", sizeof(long int));
	printf("Size of long long integer: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	return (0);
}

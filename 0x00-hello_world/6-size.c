#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu bytes\n", sizeof(c));
	printf("Size of an int: %lu bytes\n", sizeof(i));
	printf("Size of a long int: %lu bytes\n", sizeof(li));
	printf("Size of a lon long int: %lu bytes\n", sizeof(lli));
	printf("Size of a float: %lu bytes\n", sizeof(f));
	return (0);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followeed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function prints numbers separated by the specified
 * string. If separator is NULL, it is not printed. A new line is printed
 * at the end of the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declare variables for iteration */
	unsigned int i;
	int number;

	/* Declarre a va_list variable to handle arguments */
	va_list args;

	/* Initialize the va_list variable with the number of arguments */
	va_start(args, n);

	/* Iterate through each argument */
	for (i = 0; i < n; i++)
	{
		/* Get the next argument */
		number = va_arg(args, int);

		/* Print the number */
		printf("%d", number);

		/* Print the separator if it is not NULL and not the last element */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	/* Clean up the va_list */
	va_end(args);

	/* Print a new line at the end */
	printf("\n");
}

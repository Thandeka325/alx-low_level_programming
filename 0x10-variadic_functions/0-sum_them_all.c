#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of parameters to sum.
 *
 * Return: The sum of all parameters
 * If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Declare variables for iteration and sum */
	unsigned int i;
	int sum = 0;

	/* Declare a va list variable to handle the variable arguments */
	va_list args;

	/* Initialize the va_list variable with the number of arguments */
	va_start(args, n);

	/* Iterate through each argument, adding it to sum */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	/* clean up the va_list */
	va_end(args);

	/* Return the calculated sum */
	return (sum);
}

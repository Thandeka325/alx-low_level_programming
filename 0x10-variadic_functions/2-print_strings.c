#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of stringgs passed to the function.
 *
 * Description: This function prints strings separated by the specified
 * string. If separator is NULL, it is not printed. If one of the strings
 * is NULL, (nil) is printed instead. A new line is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	/* Initialize the va_list variable with the number of arguments */
	va_start(args, n);

	/* Iterate through each argument */
	for (i = 0; i < n; i++)
	{
		/* Get the next argument */
		str = va_arg(args, char *);

		/* Print the string or (nil) if the string is NULL */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print the separator if it is not NULL and not the last element */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	/* Clean up the va_list */
	va_end(args);

	/* Print a new line at the end */
	printf("\n");
}

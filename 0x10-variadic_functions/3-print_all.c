#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a char.
 * @args: A va_list pointing to the character to print.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer.
 * @args: A va_list pointing to the integer to print.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float.
 * @args: A va_list pointing to the float to print.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string.
 * @args: A va_list pointing at the string to print.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * print_all - Prints anything based on the format provided
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 *
 * Description: This function prints various types of arguments based on
 * the format of the string provided. I supports char, integer, float, and
 * string types. Any other character in the format of a string is ignorned.
 * A new line is printed at the end of the function.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char current;
	va_list args;
	void (*print_func)(va_list);

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				print_func = print_char;
				break;
			case 'i':
				print_func = print_int;
				break;
			case 'f':
				print_func = print_float;
				break;
			case 's':
				print_func = print_string;
				break;
			default:
				print_func = NULL;
				break;
		}

		if (print_func)
		{
			print_func(args);

			if (format[i + 1])
				printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

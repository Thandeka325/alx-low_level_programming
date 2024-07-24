#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer as argument
 *
 * Description: This function prints the name provided to it
 * using the function pointed to by @f. If either @name or @f
 * is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if name and function pointer are not NULL */
	if (name == NULL || f == NULL)
		return;

	/* Call the function pointed to by f and pass the name */
	f(name);
}

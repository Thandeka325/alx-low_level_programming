#include <stdio.h>

/**
 * before_main - Prints a specific message before the main function.
 */
void __attribute__((constructor)) before_main(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

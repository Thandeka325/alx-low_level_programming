#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: A pointer to the struct dog to print.
 *
 * Descriptionn: This function prints the members of the struct dog
 * pointed to by @d. If an element of d is NULL, it prints (nil)
 * instead of this element. If d is NULL, it prints nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}

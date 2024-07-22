#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name to set.
 * @age: The age to set.
 * @owner: The owner to set.
 *
 * Description: This function initializes the members of the struct dog
 * pointed to by @d with the provided values for @name, @age, and @owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

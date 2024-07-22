#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(const char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;/* +1 for the null terminator */
	dup = malloc(len);

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);
	return (dup);
}

/**
 * new_dog - Creates a new dog.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner.
 *
 * Return: A pointer to the new dog, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* Allocate memory for the new dog */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	/* Initialize the dog's name */
	d->name = _strdup(name);
	if (d->name == NULL && name != NULL)
	{
		free(d);
		return (NULL);
	}
	/* Initialize the dogs's owner*/
	d->owner = _strdup(owner);

	if (d->owner == NULL && owner != NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	/* Set the age */
	d->age = age;
	return (d);
}

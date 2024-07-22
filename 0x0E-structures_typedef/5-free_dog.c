#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure.
 * @d: Pointer to the dog structure to be freed.
 *
 * Description: This function frees the memory allocated for the
 * dog structure and its members (name and owner).
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the name and owner if they are not NULL */
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);

	/* Free the dog structure itself */
	free(d);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 * contents will be copied to the newly allocated space,from the start of ptr
 * up to the minimum of the old and new sizes
 *
 * Return: Pointer to the newly allocated memory block, or NULL if it fails
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL,equivalent to malloc(new_size),for all values of old_size
 * and new_size
 * If new_size is = 0,and ptr is not NULL,call is equivalent to free(ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
		return (ptr);
	/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	/* If new_size = 0 & ptr != NULL,the call is equivalent to free(ptr). */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Allocate new memory block */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	/* Copy the contents from the old memory block to the new memory block */
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	/* Free the old memory block */
	free(ptr);
	return (new_ptr);
}

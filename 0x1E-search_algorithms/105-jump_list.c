#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted linked list
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the list.
 * @size: The size of the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the node where the value is found,
 * or NULL if the value is not in the list.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev = NULL, *current = list;
	size_t step = sqrt(size);

	if (!list)
		return (NULL);

	while (current && current->n < value)
	{
		prev = current;
		for (size_t i = 0; i < step && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);

		if (current->n >= value || !current->next)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}

#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers,
 * using the Jump search algorithm.
 * @list: Pointer to the head of the list.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: A pointer to the first node where the value is located,
 * or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current = list;
	size_t step = sqrt(size);
	listint_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current && current->next && current->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					prev ? prev->index : 0, current->index);
			while (prev && prev->index <= current->index)
			{
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			return (NULL);
		}
		prev = current;

		for (size_t i = 0; i < step && current; i++)
			current = current->next;
	}
	return (NULL);  /* If we did not find the value */
}

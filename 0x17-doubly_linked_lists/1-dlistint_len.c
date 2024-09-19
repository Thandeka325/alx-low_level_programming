#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Hread pointer to doubly linked list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;

	while (temp && temp->prev)
		temp = temp->next;

	for (count = 0; temp; count++, temp = temp->next)
		;
	return (count);
}

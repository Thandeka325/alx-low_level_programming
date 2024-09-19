#include "lists.h"

/**
 * print_dlistint - Prints all the elements of dlistint_t list
 * @h: Head pointer in doubly linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	tmp = h;

	while (tmp && tmp->prev)
		tmp = tmp->prev;

	for (count = 0; tmp; count++, tmp = tmp->next)
		printf("%d\n", tmp->n);

	return (count);
}

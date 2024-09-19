#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Head pointer in the list
 *
 * Return: Number of nodes
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

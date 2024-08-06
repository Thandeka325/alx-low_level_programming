#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: The pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

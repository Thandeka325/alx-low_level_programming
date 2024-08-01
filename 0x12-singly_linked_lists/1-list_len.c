#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the listi
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;/* Initializes a counter 4 the nmbr of nodes */

	/* Tranversing the linked list until the end */
	while (h)
	{
		node_count++;
		h = h->next;/* Moving to the next node in the list */
	}
	return (node_count);/* The total number of nodes */
}

#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of node
 * @index: Index of the node, starting from 0
 *
 * Return: NULL, if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c;

	temp = head;

	for (c = 0; temp && c < index; temp = temp->next, c++)
		;
	return (temp);
}


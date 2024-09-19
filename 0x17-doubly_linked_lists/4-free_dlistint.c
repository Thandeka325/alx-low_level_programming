#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * *head: Head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *hold;

	if (head == NULL)
		return;

	temp = head;

	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		hold = temp;
		temp = temp->next;
		free(hold);
	}
}

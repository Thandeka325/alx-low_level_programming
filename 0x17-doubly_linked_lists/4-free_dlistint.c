#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * *head: Head of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

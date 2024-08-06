#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index of a list
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	prev = *head;

	for (i = 0; i < index - 1 && prev != NULL; i++)
	{
		prev = prev->next; }
	if (prev == NULL || prev->next == NULL)
		return (-1);

	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);

	return (1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current;
	listint_t *next;

	while (*head != NULL)
	{
		current = *head;
		next = (*head)->next;
		current->next = prev;
		prev = current;
		*head = next;
	}
	*head = prev;
	return (*head);
}

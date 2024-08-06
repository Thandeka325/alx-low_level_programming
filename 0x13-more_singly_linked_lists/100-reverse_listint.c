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
	listint_t *current = NULL;
	listint_t *reversed = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = reversed;
		reversed = *head;
		*head = current;
	}
	*head = reversed;
	return (*head);
}

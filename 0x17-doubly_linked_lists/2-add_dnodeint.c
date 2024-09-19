#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head node
 * @n: Value to store in the node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (temp == NULL)
		new->next = NULL;
	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = new;
		new->next = temp;
	}
	*head = new;

	return (*head);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new  node at the end of a listint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer to add in the new node
 *
 * Return: The address of a new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}

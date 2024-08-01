#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in a new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	char *dup_str;
	unsigned int len = 0;

	dup_str = strdup(str);

	if (dup_str == NULL)
		return (NULL);
	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL); }
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node; }
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new_node; }
	return (new_node);
}

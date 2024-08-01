#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	/* Using strdup to duplicate string */
	dup_str = strdup(str);

	if (dup_str == NULL)
		return (NULL);

	while (str[len])
		len++;

	/* Memory allocation to the new node */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL); }
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);/* The address of the new node */
}

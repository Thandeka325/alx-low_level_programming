#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function frees each node in a linked list by,
 * iterating through the list, freeing the memory allocated for
 * the string and then freeing the node itself.
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}

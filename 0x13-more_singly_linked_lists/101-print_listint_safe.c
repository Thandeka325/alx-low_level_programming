#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *hold;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		hold = current;
		current = current->next;

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break; }}
	return (count);
}

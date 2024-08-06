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
	const listint_t *slow = head;
	const listint_t *fast = head;
	const listint_t *loop_start = NULL;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_start = head;

			while (loop_start != slow)
			{
				loop_start = loop_start->next;
				slow = slow->next; }
			break; }}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head == loop_start)
		{
			const listint_t *tmp = head->next;

			while (tmp != loop_start)
			{
				printf("[%p] %d\n", (void *)tmp, tmp->n);
				tmp = tmp->next;
				count++; }
			printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
			break; }
		head = head->next; }
	return (count);
}

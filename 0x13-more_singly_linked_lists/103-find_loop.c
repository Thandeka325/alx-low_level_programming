#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: The pointer to the head of the list
 *
 * Return: The address of the node where loop starts, or
 * NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast); }}
	return (NULL);
}

#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) 
 * of a dlistint_t linked list.
 * @head: Head of dlistint_t list
 * Return: Sum of the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;

	return (sum);
}
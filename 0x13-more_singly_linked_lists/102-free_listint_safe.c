#include "lists.h"
#include <stdlib.h>

/**
 * check_looped_listfree - checks if there is a loop in a linked list,
 * and counts the number of unique nodes in a looped linked list
 * @head: A pointer to the head of the list.
 *
 * Return: 0, if the list is not looped,
 * Otherwise the number of unique nodes in the list
 */
size_t check_looped_listfree(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
			break;
		tortoise = tortoise->next;
		hare = (hare->next)->next; }
	if (tortoise == hare)
	{
		tortoise = head;

		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next; }
		tortoise = tortoise->next;

		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next; }
		return (nodes); }
	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list with a loop
 * @h: A pointer to the head of the list
 * Description: The function sets the head to NULL.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = check_looped_listfree(*h);

	if (nodes == 0)
	{
		while (h != NULL && *h != NULL)
		{
			nodes++;
			tmp = (*h)->next;
			free(*h);
			*h = tmp; }}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp; }
		*h = NULL; }
	h = NULL;
	return (nodes);
}


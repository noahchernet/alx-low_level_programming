#include "lists.h"

/**
 * listint_len - returns the number of nodes in the linked list @h
 * @h: the head of the linked list
 *
 * Return: the number of nodes in the linked list @h
 *		   0 if @h is NULL
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

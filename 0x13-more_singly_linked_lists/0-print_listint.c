#include "lists.h"

/**
 * print_listint - prints contents the linked list of type listint_t
 * @h: the pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 *		   0 if the list is NULL
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

#include "lists.h"

/**
 * print_list - prints contents the linked list of type list_t
 * @h: the pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 *		   0 if the list is NULL
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

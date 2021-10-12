#include "lists.h"

/**
 *
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

	return ((size_t) nodes);
}

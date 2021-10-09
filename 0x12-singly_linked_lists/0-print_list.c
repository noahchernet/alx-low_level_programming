#include "lists.h"

/**
 *
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

	return nodes;
}

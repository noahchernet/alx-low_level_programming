#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node of type dlistint_t at the
 * given position @idx
 * @h: the first element of the doubly linked list
 * @idx: the position of the newly added element
 * @n: the data of the new element
 *
 * Return: address of the new node, or NULL if it fails or is not possible to
 * add the new node at @idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h_copy = *h;
	unsigned int node = 0;

	if (!*h)
		return (NULL);

	while (*h)
	{
		if (idx - 1 == node)
		{
			new_node->n = n;
			new_node->prev = (*h);
			new_node->next = (*h)->next;
			(*h)->next->prev = new_node;
			(*h)->next = new_node;
			*h = h_copy;

			return (new_node);
		}
		node++;
		*h = (*h)->next;
	}

	*h = h_copy;
	return (NULL);
}

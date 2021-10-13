#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the specified index @idx if it
 * is possible, otherwise it returns NULL
 * @head: the first node of the linked list
 * @idx: the index where the new node is to be added
 * @n: the value of the new node
 *
 * Return: newly added node or NULL if function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len;
	listint_t *first_node, *new_node, *next_to_new_node;

	if (!head)
		return (NULL);

	len = list_len(*head);
	first_node = *head;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (!len)
		return (NULL);
	else if (idx + 1 > len + 1)
	{
		return (NULL);
	}
	else if (idx != 0)
	{
		for (i = 0; i < idx - 1; i++)
			*head = (*head)->next;
		next_to_new_node = (*head)->next;

		(*head)->next = new_node;
		new_node->next = next_to_new_node;
		*head = first_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}

/**
 * list_len - get the number of nodes in the linked list @h
 * @h: the linked list whose size is to be calculated
 *
 * Return: the size of the list
 */
unsigned int list_len(listint_t *h)
{
	unsigned int nodes = 0;
	listint_t *first_node = h;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	h = first_node;
	return (nodes);
}

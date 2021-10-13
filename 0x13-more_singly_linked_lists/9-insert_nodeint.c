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
	listint_t *new_node = malloc(sizeof(listint_t *));
	listint_t *next_to_new_node;
	listint_t *first_node = *head;
	unsigned int i;

	new_node->n = n;
	new_node->next = NULL;

	if (!head || !new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (idx != 0)
	{
		for (i = 0; i < idx && *head != NULL; i++)
		{
			*head = (*head)->next;
			if (i + 2 == idx)
			{
				next_to_new_node = (*head)->next;
				(*head)->next = new_node;
				if (next_to_new_node)
					new_node->next = next_to_new_node;
			}
		}
	}
	else
	{
		(*head)->next = new_node;
	}

	if (!*head)
		return (NULL);

	*head = first_node;

	return (new_node);
}

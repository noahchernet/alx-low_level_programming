#include "lists.h"

/**
 * add_nodeint_end - adds a new listint_t to the end of the list
 * @head: the first element of the linked list
 * @n: the number that the new node will hold
 *
 * Return: new_node, the newly initialized node added to the end of the list
 *		   NULL if malloc or strdup fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *original_head_node = *head;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		original_head_node = *head;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new_node;
	}

	*head = original_head_node;

	return (new_node);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes element t index
 * @head: first element of the list
 * @index: where to be deleted
 *
 * Return: 1 if successfully deleted, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first_node = *head;
	unsigned int i;

	for (i = 0; i < index && *head; i++)
		*head = (*head)->next;

	if (i + 1 == index && *head)
	{
		if ((*head)->next->next)
			(*head)->next = (*head)->next->next;
		else
			(*head)->next = NULL;
		free((*head)->next);

		*head = first_node;
		return (1);
	}
	return (-1);
}

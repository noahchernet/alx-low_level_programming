#include "lists.h"

/**
 * pop_listint - deletes the head node of the passed linked list listint_t
 * @head: the first element of the linked list
 *
 * Return: the number held in the popped element
 *		   NULL (0) if the passed linked list is NULL
 */

int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *next_node = (*head)->next;

	if (!*head)
		return (0);

	free(*head);
	*head = next_node;
	return (n);

}

#include "lists.h"

/**
 * add_nodeint - adds a new listint_t to the top of the list
 * @head: the first element of the linked list
 * @n: the number to be put into the new node
 * Return: new_node, the newly initialized node added to the top of the list
 *		   NULL if malloc fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

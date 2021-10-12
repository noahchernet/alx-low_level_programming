#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the specified @index or NULL if
 * the node index is out of bounds of the linked list
 * @head: the linked list to go through
 * @index: the index of the element in the linked list
 *
 * Return: node at the given index if it exists
 *		   NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i != index && head != NULL; i++)
		head = head->next;

	if (head)
		return (head);
	return (NULL);
}

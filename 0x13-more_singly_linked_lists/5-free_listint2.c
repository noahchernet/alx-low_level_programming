#include "lists.h"

/**
 * free_listint2 - deletes the list @head from the heap
 * @head: the list to be deleted
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (!*head || !head)
		return;
	if ((*head)->next)
		free_listint2(&((*head)->next));
	free(*head);
	(*head) = NULL;
}

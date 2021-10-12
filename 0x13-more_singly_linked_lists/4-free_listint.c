#include "lists.h"

/**
 * free_listint - deletes the list @head from the heap
 * @head: the list to be deleted
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t **all_nodes = NULL;
	listint_t *first_node = head;
	int i, nodes = 0;

	for (; head != NULL; nodes++)
	{
		head = head->next;
	}
	nodes--;
	head = first_node;

	if (nodes == 0)
	{
		free(head->next);
		free(head);
		return;
	}
	all_nodes = malloc(sizeof(listint_t) * nodes);
	for (i = 0; i < nodes; i++)
	{
		all_nodes[i] = head;
		head = head->next;
	}

	for (i = nodes - 1; i >= 0; i -= 2)
	{
		free(all_nodes[i]->next);
		free(all_nodes[i]);
	}

	if ((nodes - 1) % 2)
	{
		free(all_nodes[0]->next);
		free(all_nodes[0]);
	}
	free(all_nodes);
}

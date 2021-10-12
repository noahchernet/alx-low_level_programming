#include "lists.h"

/**
 * sum_listint - finds the sum of all the integers in the list @head
 * @head: the first element in the linked list
 *
 * Return: the sum of all ints in the linked list starting with @head
 *		   0 if head is NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

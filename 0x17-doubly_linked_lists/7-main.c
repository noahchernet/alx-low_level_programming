#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 7, 4096);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 8, 789);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 9, -123);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 10, -456);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 11, -789);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 4096);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 789);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, -123);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, -456);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, -789);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 1, 9);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 1, 18);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 1, 27);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}

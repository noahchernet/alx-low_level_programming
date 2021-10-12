#include "lists.h"

/**
 * add_node_end - adds a new list_t to the end of the list
 * @head: the first element of the lined list
 * @str: the string which will be in the new node of the list
 *
 * Return: new_node, the newly initialized node added to the end of the list
 *		   NULL if malloc or strdup fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int length_of_str = _strlen((char *) str);
	list_t *original_head_node = *head;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!new_node->str) /* Free memory and return NULL if strdup() fails */
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}

	new_node->len = length_of_str;
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

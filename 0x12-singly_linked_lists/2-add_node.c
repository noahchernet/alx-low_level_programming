#include "lists.h"

/**
 * add_node - adds a new list_t to the top of the list
 * @head: the first element of the lined list
 * @str: the string which will be in the new node of the list
 *
 * Return: new_node, the newly initialized node added to the top of the list
 *		   NULL if malloc fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int length_of_str = _strlen((char *) str);

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}

	_strcpy(new_node->str, (char *) str);
	new_node->len = length_of_str;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

/**
 * _strcpy -  a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the buffer to be copied to
 * @src: the buffer to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != 0)
	{
		len++;
	}
	len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _strlen - counts the length of a string
 * @s: the string whose length is to be calculated
 *
 * Return: n, the length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		n++;
	}

	return (n++);
}

#include "lists.h"

/**
 * print_list - prints contents the linked list of type list_t
 * @h: the pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 *		   0 if the list is NULL
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}


/**
 * _strcpy -  a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the buffer to be copied to
 * @src: the buffer to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, const char *src)
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

int _strlen(const char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		n++;
	}

	return (n++);
}

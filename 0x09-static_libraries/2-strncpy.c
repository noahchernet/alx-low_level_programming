#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the first n number of characters form src to dest,
 * replacing the characters in dest
 * @dest: the string whose characters will be updated from @src
 * @src: the string whose characters will be used to update @dest
 * @n: the number of characters to be copied
 *
 * Return: @dest, the updated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;
	int dest_len = 0;
	int i;

	while (src[src_len] != '\0')
	{
		src_len++;
	}
	src_len--;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

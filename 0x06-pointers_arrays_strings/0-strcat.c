#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: the first string
 * @dest: the string which @src will be concatenated to
 *
 * Return: char pointer of the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int src_len = 0;
	int dest_len = 0;
	int i;

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	src_len--;
	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	return (dest);

}

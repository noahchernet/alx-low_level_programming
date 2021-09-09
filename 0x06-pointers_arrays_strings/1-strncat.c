#include "main.h"

/**
 * _strncat - concatenates specified amount of bytes from src to dest
 * @src: the string to be concatenated
 * @dest: the string which @src will be added to
 * @n: the number of characters to be concatenated
 *
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
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

	for (i = 0; i < n; i++)
	{
		if (i > src_len)
			break;
		dest[dest_len] = src[i];
		dest_len++;
	}

	return (dest);
}

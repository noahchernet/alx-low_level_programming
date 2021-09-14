#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: pointer to memory area
 * @b: the bytes to be filled in n
 * @n: the first bytes to be filled in
 *
 * Return: s, the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);
}

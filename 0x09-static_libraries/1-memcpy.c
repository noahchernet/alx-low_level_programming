#include "main.h"

/**
  * _memcpy - copies memory area
  * copies n bytes from memory area src to memory area dest
  * and returns a pointer to dest
  * @dest: destination of copied memory area
  * @src: memory area to be copied from
  * @n: bytes to be copied from @src to @dest
  *
  * Return: @dest, the copied memory area
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

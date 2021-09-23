#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size in bytes of each element
 *
 * Return: pointer to allocated memory
 *		   NULL if malloc fails
 *		   NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (!nmemb || !size)
		return (NULL);

	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);

	return (arr);
}

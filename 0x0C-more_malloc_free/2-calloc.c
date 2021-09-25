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
	void **arr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	printf("Allocating memory");

	arr = (void *) malloc(nmemb);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(size);
	}

	return (arr);
}

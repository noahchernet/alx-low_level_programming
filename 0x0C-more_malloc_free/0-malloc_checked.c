#include "main.h"

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: bytes to be allocated
 * Return: pointer to the address of the allocated memory
 *		   NULL if malloc fails to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_mem = malloc(b);

	if (!allocated_mem)
		return ((void *) 98);
	return (malloc(b));
}

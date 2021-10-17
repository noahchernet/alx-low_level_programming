#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to be modified
 * @index: the index to be updated to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long original = *n;
	*n |= 1U << index; /* Clear the bit at @index */

	while (original)
	{
		count++;
		original >>= 1;
	}

	if (index > count)
		return (-1);

	return (1);
}


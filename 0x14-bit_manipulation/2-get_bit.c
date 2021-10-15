#include "main.h"

/**
 * get_bit - gets the bit of @n at @index
 * @n: the number
 * @index: the index to print the bit
 *
 * Return:  tha value of the bit at @index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int copy = n;

	while (n)
	{
		count++;
		n >>= 1;
	}
	n = copy;
	if (index > count)
		return (-1);

	int bit = (n >> index) & 1;

	return (bit);
}


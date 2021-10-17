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
	int bit;

	while (n)
	{
		count++;
		n >>= 1;
	}
	n = copy;


	bit = (int) (n >> index) & 1;

	if (index > count && bit != 0)
		return (-1);

	return (bit);
}

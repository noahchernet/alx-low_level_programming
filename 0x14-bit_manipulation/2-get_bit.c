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
	int bit = (n >> index) & 1;

	return (bit);
}


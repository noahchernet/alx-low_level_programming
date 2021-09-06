#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value will be updated to b's value
 * @b: value will be updated to a's value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

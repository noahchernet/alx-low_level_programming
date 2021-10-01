#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of ints where @cmp will take each element of
 * @size: number of elements in @array
 * @cmp: passed function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !*cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

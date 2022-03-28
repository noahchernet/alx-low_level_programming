#include "search_algos.h"
/**
 * linear_search - searches through an integer array for value @value
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for in @array
 *
 * Return: The first index where value is located, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int idx = -1;
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			idx = i;
			break;
		}
	}

	return (idx);
}

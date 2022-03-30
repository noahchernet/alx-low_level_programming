#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm, with the
 * @array: sorted list of integers
 * @size: number of elements in the array
 * @value: the int to be searched for in the array
 *
 * Return: index of the @value in the array if it's in @array, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int i, idx = -1;
	int m = (int) sqrt((double) size);
	int lo = 0, hi = (int) size - 1;

	for (i = 0; array && hi < (int) size; i++)
	{
		lo = i * m;
		hi = (i + 1) * m;

		printf("Value checked array[%d] = [%d]\n", i * m, array[i * m]);

		if (array[lo] > value)
			break;

		if ((array[lo] <= value && array[hi] >= value) ||
			(array[lo] <= value && hi >= (int) size))
		{
			printf("Value found between indexes [%d] and [%d]\n", lo, hi);

			if (hi >= (int) size)
				hi = (int) size - 1;

			while (lo <= hi)
			{
				printf("Value checked array[%d] = [%d]\n", lo, array[lo]);

				if (array[lo] == value)
				{
					idx = lo;
					break;
				}

				lo++;
			}
			break;
		}
	}

	return (idx);
}

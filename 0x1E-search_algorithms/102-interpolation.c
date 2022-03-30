#include "search_algos.h"

/**
 * interpolation_search - searches for @value in sorted array @array using
 * the interpolation algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for in @array
 *
 * Return: The first index where value is located, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = (int) size - 1;
	size_t pos;

	if (!array)
		return (-1);

	pos = (size_t) lo + (size_t) (((double)(hi - lo) /
		(array[hi] - array[lo])) * (value - array[lo]));

	while ((int) (hi - lo) > -1)
	{
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[(int) pos]);
		if (array[pos] == value)
			return ((int) pos);

		if (value < array[pos])
			hi = pos - 1;
		else if (value > array[pos])
			lo = pos + 1;
		else
			lo = pos;
		pos = (size_t) lo + (size_t) (((double)(hi - lo) / (array[hi] - array[lo])) *
						   (value - array[lo]));
	}

	return (-1);

}

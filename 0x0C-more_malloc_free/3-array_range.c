#include "main.h"

/**
 * array_range - creates an array of integers between min and max (including
 * both min and max)
 * @min: the smallest and first integer in the array
 * @max: the biggest and last integer in the array
 *
 * Return: NULL if min > max
 *		   NULL if malloc fails to allocate memory
 *		   array of ints between min and max, including min and max
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j = max - min;

	if (min > max)
		return (NULL);

	if ((min < 0) && (max < 0))
		j = (-1 * max) - (-1 * min);
	else if ((max < 0) && (min > 0))
		j = (-1 * max) - min;
	else if ((min < 0) && (max > 0))
		j = max - (-1 * min);

	arr = malloc(sizeof(int) * (max - min) + 1);

	if (!arr)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}

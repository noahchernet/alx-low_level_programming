#include "main.h"

/**
 * abs - calculates the absolute value of passed integer
 * @a: the integer whose absolute value will be calculated
 * Return: if a < 0, the negation of a i.e. -1 * a
 *		   otherwise return a without modification
 */
int abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		return (-1 * a);
	}
	return (a);
}

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
	int j = abs(max) - abs(min);

	j = abs(j);

	if (min > max)
		return (NULL);


/*
	if ((min < 0) && (max < 0))
		j = (-1 * max) - (-1 * min);
	else if ((max < 0) && (min > 0))
		j = (-1 * max) - min;
	else if ((min < 0) && (max > 0))
		j = max - (-1 * min);
*/


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

#include "main.h"

/**
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j = max - min;

	if (min > max)
		return (NULL);

	arr = malloc (sizeof (int) * (max - min) + 1);

	if (!arr)
		return (NULL);

	for (i = 0; i <= j; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}

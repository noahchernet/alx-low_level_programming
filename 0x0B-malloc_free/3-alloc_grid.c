#include "main.h"

/**
 * alloc_grid - makes a 2D array of integers
 * @width: size of the inner array
 * @height: size of the outer array
 *
 * Return: 0 if width or height is 0 or if malloc returns 0
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == 0)
	{
		free(arr);
		return (0);
	}


	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);

		if (!arr[i])
		{
			for (j = 0; j <= i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);

}

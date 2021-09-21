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

	arr = malloc(8 * height);
	if (arr == 0)
		return (0);

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(4 * width);
	}

	if (width <= 0 || height <= 0 || arr == 0)
	{
		free(arr);
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);

}

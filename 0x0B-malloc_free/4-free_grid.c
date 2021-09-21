#include "main.h"

/**
* free_grid - frees the 2D array allocated by alloc_grid
 * @grid: the address of the bytes to be freed
 * @height: the size of the grid array
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

}

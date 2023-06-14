#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: None.
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}

#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2 dimensional grid previously created
 * @grid: the 2 dimensional grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[i]);

	free(grid);
}

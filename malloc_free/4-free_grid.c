#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0, j;

	for (; i < height; i++)
	{
		for (j = 0; grid[i][j]; j++)
			free(&grid[i][j]);
		free(grid[i]);
	}
	free(grid);
}

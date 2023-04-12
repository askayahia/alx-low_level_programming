#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees two dimo grid
 * created by alloc grid
 * @grid: the grid
 * @height: height dimension of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

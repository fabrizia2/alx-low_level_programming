#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid
 * @grid: pointer to width
 * @height: height of grid
 *
 * Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; height > k; k++)
	{

		free(grid[k]);
	}

	free(grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width of grid
 * @height: height of grid
 * Return: NULL if width && height = 0 || -ve
 */

int **alloc_grid(int width, int height)
{
	int **alloc;
	int m, r;

	alloc = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || alloc == NULL)
	{
		return (NULL);
	}

	for (m = 0; height > m; m++)
	{
		alloc[m] = malloc(sizeof(int) * width);
		if (alloc[m] == NULL)
		{
			for (m = m - 1; m >= 0; m--)
			{
				free(alloc[m]);
			}
			free(alloc);
			return (NULL);
		}
	}

	for (m = 0; width > r; r++)
	{
		alloc[m][r] = 0;
	}

	return (alloc);
}

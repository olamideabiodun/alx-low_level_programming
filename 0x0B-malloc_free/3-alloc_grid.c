#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to 2D array else NULL
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (d = 0; d < i; d++)
				free(g[d]);
			free(g);
			return (NULL);
		}
		for (d = 0; d < width; d++)
			g[i][d] = 0;
	}

	return (g);
}


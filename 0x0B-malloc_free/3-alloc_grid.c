#include "main.h"
#include <stdlib.h>

/**
	* alloc_grid - Allocates a 2D array of integers.
	*
	* @width: The width of the 2D array.
	* @height: The height of the 2D array.
	*
	* Return: If successful - a pointer to a newly allocated 2D array of integers,
	*         otherwise NULL.
	*/

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));

	if (grid[i] == NULL)
	{
	for (j = i - 1; j >= 0; j--)
	free(grid[j]);

	free(grid);
	return (NULL);
	}

	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}


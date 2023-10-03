#include "main.h"

/**
 * alloc_grid - Allocates a 2-dimensional grid of integers.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 *
 * Return: On success, returns a pointer to the allocated grid.
 *         On failure or if width or height is 0 or negative, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

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
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: largeur
 * @height: hauteur
 *
 * Return: a pointer or NULL on failure, 0 or negative
 */

int **alloc_grid(int width, int height)
{

	int **grid, w, h;

	if (width < 1 || height < 1)
	return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = (int *)malloc(width * sizeof(int));

		if (!grid[h])
		{
			while (h)
			{
				free(grid[h]);
				h--;
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}

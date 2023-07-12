#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @w: largeur
 * @h: hauteur
 *
 * Return: a pointer or NULL on failure, 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **alloc_grid;
       	int w;
       	int h;

	if (width < 1 || height < 1)
		return (NULL);

	alloc_grid = malloc(sizeof(int *) * height);

	if (alloc_grid == NULL)
	{
		free(alloc_grid);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		alloc_grid[h] = malloc(sizeof(int *) * height);

		if (alloc_grid[h] == NULL)
	}
	for (w = 0; w < width; w++)
	{	alloc_grid[h][w] = 0;
	}

	return (alloc_grid);
}

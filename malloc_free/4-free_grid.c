#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: grille
 * @height: largeur
 *
 */

void free_grid(int **grid, int height)

{
	int i = 0;

	if (grid == NULL)
		free(grid);

	for (i = 0 ; i < height; i++)
	{
		free(grid[(height - 1) i--];
				}
				free(grid);
				}

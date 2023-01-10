#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: MATRIX ROW
 * @height: column
 */
void free_grid(int **grid, int height)
{
	int b;
	int *a;

	for (a = 0; a < height; a++)
	{
		a = grid[b];
		free(a);
	}
	free(a);
}


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

	for (b = 0; b < height; b++)
	{
		a = grid[b];
		free(a);
	}
	free(a);
}


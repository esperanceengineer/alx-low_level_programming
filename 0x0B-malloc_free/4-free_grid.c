#include <stdlib.h>
#include <string.h>

/**
 *free_grid - alloc 2d array
 *@grid: grid
 *@h: height
 */
void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(grid[i]);
	free(grid);
}

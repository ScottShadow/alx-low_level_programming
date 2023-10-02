#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees all memory allocated
 * using the _alloc_grid function
 * @grid: pointer to the grid to free
 * @height: the number of single pointers(number of rows) involved
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

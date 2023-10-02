#include "main.h"
#include <stdlib.h>
/**
 * _free_all - frees extra memory from the grid
 * @height: amount of paramaters to free
 * @grid: the grid to free
 */
void _free_all(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the number of collumns
 * @height: the number of rows
 * Return: 2D array initialised with 0
 * NULL on (FAIL)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			_free_all(grid, i);
			return (NULL);
		}
	}
	return (grid);
}

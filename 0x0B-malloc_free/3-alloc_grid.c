#include "main.h"
#include <stdlib.h>
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
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}

#include <stdlib.h>
#include "holberton.h"

/**
 *free_grid -  a function that frees a 2 dimensional grid previously created by
 * alloc_grid function
 *@grid: 2d array
 *@height: height of array
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

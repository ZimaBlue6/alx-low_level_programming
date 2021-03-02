#include <stdlib.h>
#include "holberton.h"

/**
 *alloc_grid -  a function that returns a pointer to a newly allocated space in
 *memory
 *@width: width of array
 *@height: height of array
 *Return: NULL or pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **_2d;
	int h, v;

	if (width <= 0 || height <= 0)
		return (NULL);
	_2d = malloc(sizeof(int *) * height);
	if (_2d == 0)
		return (NULL);
	for (v = 0; v < height; v++)
	{
		_2d[v] = malloc(sizeof(int) * width);
		if (_2d[v] == NULL)
		{
			for (; v >= 0; v--)
				free(_2d[v]);
			free(_2d);
			return (NULL);
		}
		for (h = 0; h < width; h++)
			_2d[v][h] = 0;
	}
	return (_2d);
}

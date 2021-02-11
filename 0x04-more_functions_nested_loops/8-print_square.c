#include "holberton.h"

/**
 *print_square - draws a square
 *@size: dictates the size of the square
 */

void print_square(int size)
{
	int m, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = 1; k <= size; k = k + 1)
		{
			for (m = 1; m <= size; m = m + 1)
			_putchar(35);
			_putchar('\n');
		}
	}
}

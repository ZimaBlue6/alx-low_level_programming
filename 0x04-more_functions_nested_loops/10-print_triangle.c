#include "holberton.h"

/**
 *print_triangle - draws a triangle
 *@size: dictates the size of the triangle
 */

void print_triangle(int size)
{
	int m, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = size; k > 0; k = k - 1)
		{
			for (m = 1; m <= size; m = m + 1)
			{
				if (m < k)
					_putchar(32);
				else
					_putchar(35);
			}
		_putchar('\n');
		}
	}
}

#include "holberton.h"

/**
 *print_diagonal - draws a diagonal line
 *@n: dictates where the diagonal line starts and ends
 */

void print_diagonal(int n)
{
	for (; n > 0; n = n - 1)
	{	_putchar(32);
		if (n == 1)
		{
			_putchar(92);
			_putchar('\n');
		}
	}

}

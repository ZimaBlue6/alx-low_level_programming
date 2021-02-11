#include "holberton.h"

/**
 *print_diagonal - draws a diagonal line
 *@n: dictates where the diagonal line starts and ends
 */

void print_diagonal(int n)
{
	int m, k;

	for (k = 1; k <= n; k = k + 1)
	{
		for (m = 1; m < k; m = m + 1)
			_putchar(32);
		if (n > 0)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}

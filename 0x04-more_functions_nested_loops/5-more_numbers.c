#include "holberton.h"

/**
 *more_numbers - outputs 0 - 14, ten times
 *
 */

void more_numbers(void)
{
	int n, k;

	for (n = 0; n <= 9; n = n + 1)
	{
		for (k = 0; k <= 14; k = k + 1)
			if (k >= 10)
			{
				_putchar('1');
				_putchar('0' + k % 10);
			}
			else
				_putchar('0' + k);
		_putchar('\n');
	}
}

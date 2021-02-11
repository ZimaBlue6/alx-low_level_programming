#include "holberton.h"

/**
 *print_most_numbers - outputs 0 - 9, except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n = n + 1)
	{
		if (n != 2 && n != 4)
		_putchar('0' + n);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 *print_numbers - outputs 0 - 9
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n = n + 1)
		_putchar('0' + n);
	_putchar('\n');
}

#include "holberton.h"

/**
 *print_line - draws a line with length = n
 *@n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	for (; n > 0; n = n - 1)
		_putchar(95);
	_putchar('\n');
}

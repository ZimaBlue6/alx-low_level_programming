#include "holberton.h"

/**
 *print_chessboard - prints the chessboard
 *@a:pointer
 */

void print_chessboard(char (*a)[8])
{
	int m, k;

	for (k = 0; k <= 7; k = k + 1)
	{
		for (m = 0; m <= 7; m = m + 1)
			_putchar(a[k][m]);
		_putchar('\n');
	}
}

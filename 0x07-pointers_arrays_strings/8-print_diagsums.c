#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the chessboard
 *@a: pointer
 *@size: array size
*/

void print_diagsums(int *a, int size)
{
	int m, k, diag_sum = 0;

	for (k = 0; k < size; k = k + 1)
		diag_sum  = diag_sum + a[k * size + k];
	printf("%d, ", diag_sum);
	diag_sum = 0;
	for (m = 0; m < size; m = m + 1)
		diag_sum = diag_sum + a[(m + 1) * size - (m + 1)];
	printf("%d\n", diag_sum);
}

#include "holberton.h"

/**
 *swap_int - a function that swaps the values of two integers
 *@a: pointer 0
 *@b: pointer 1
 */

void swap_int(int *a, int *b)
{
	int temp_rep;

	temp_rep = *b;
	*b = *a;
	*a = temp_rep;
}

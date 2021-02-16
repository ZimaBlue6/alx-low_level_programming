#include "holberton.h"
#include <stdio.h>

/**
 *print_array - a function that prints n elements of an array of integers
 *@a: array
 *@n: the number of elements of the array to be printed
 *Return: 0
 */

void print_array(int *a, int n)
{
	int m = 0;

	for (n = n - 1; n >= 0; n = n - 1, m = m + 1)
	{	printf("%d", a[m]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}

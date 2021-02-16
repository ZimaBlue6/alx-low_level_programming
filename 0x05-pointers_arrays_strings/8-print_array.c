#include "holberton.h"
#include <stdio.h>

/**
 *print_array - a function that prints n elements of an array of integers
 *@a: parray
 *@n: the number of elements of the array to be printed
 *Return: 0
 */

void print_array(int *a, int n)
{
	int m = (sizeof(a) / 4) + 2;

	for (n = 0; a[n] != '\0'; n = n + 1)
	{
		if (n < m)
			printf("%d, ", a[n]);
		else if (n == m)
			printf("%d", a[n]);
	}
	printf("\n");
}

#include "holberton.h"

/**
 *perfect_sqrt - a function that checks if n is a perfect square of a number i
 *@n: number to be checked if it is a perfect square
 *@i: number to check with
 *Return: square root of aperfect_sqrt given number or -1 to indicate an error
 */

int perfect_sqrt(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (i * i > n)
		return (-1);
	else if (n < 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (perfect_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - a function that returns the square root of a number
 *@n: given number
 *Return: square root of a given number or -1 to indicate an error
 */

int _sqrt_recursion(int n)
{
	return (perfect_sqrt(n, 0));
}

#include "holberton.h"

/**
 *_pow_recursion - a function that returns value of x raised to the power of y
 *@x: base
 *@y: power
 *Return: the value of x raised to the power of y or -1 to indicate an error
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

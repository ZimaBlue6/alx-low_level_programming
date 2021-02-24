#include "holberton.h"

/**
 *factorial - a function that returns the factorial of a given number
 *@n: given number
 *Return: factorial of a given number or -1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

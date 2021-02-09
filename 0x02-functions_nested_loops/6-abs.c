#include "holberton.h"

/**
 *_abs - a function that outputs absolute value of n
 *@n: number to be put through absolute value
 *Return: absolute value of n
 */
int _abs(int n)
{
if (n < 0)
n = -(n);
return (n);
}

#include "holberton.h"

/**
 *print_last_digit - a function that outputs the last digit of n
 *@n: number to be calculated
 *Return: last digit of n
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (m < 0)
m = -(m);
_putchar('0' + m);
return (m);
}

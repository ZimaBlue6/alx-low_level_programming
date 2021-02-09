#include "holberton.h"

/**
 *print_sign - a function that checks for lowercase character.
 *@n: checking if character is an alphabetic character
 *Return: -1 if negative, 0 if zero and +1 if positive
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (+1);
}
else
{
_putchar('0');
return (0);
}
}

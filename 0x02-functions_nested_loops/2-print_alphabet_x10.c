#include "holberton.h"

/**
 *print_alphabet_x10 - outputs lowercase alphabet 10 times.
 *Return: Always 0
 */
void print_alphabet_x10(void)
{
int n, k;
for (k = 0; k < 10; k = k + 1)
{
for (n = 97; n < 123; n = n + 1)
{
_putchar(n);
}
_putchar('\n');
}
}

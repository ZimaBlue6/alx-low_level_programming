#include "holberton.h"

/**
 *print_alphabet - outputs lowercase alphabet.
 *Return: Always 0
 */
void print_alphabet(void)
{
int n;
for (n = 97; n < 123; n = n + 1)
{
_putchar(n);
}
_putchar('\n');
}

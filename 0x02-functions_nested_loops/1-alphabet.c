#include "holberton.h"

/**
 *main - outputs lowercase alphabet.
 *Return: Always 0
 */
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n = n + 1)
{
_putchar(n);
}
_putchar('\n');
return;
}

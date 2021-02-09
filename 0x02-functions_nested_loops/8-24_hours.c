#include "holberton.h"

/**
 *jack_bauer - outputs 00:00 to 23:59
 *Return: Always 0
 */
void jack_bauer(void)
{
int n, k;
for (n = 0; n < 24; n = n + 1)
{
for (k = 0; k < 60;  k = k + 1)
{
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
_putchar(':');
_putchar(k / 10 + 48);
_putchar(k % 10 + 48);
_putchar('\n');
}
}
}

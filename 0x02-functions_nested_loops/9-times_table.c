#include "holberton.h"

/**
 *times_table - outputs times table 0 to 9
 *
 */
void times_table(void)
{
int n, k, l;
for (n = 0; n <= 9; n = n + 1)
{
for (k = 0; k <= 9; k = k + 1)
{
l = n * k;
if (l < 10)
{
if (k > 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(l + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(l / 10 + '0');
_putchar(l % 10 + '0');
}
}
_putchar('\n');
}
}

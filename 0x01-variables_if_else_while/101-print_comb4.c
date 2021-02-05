#include <stdio.h>

/**
 *main - outputs 012 to 789 with comma and space.
 *Return: Always 0
 */
int main(void)
{
int n, k, m;
for (n = 0; n < 10; n = n + 1)
{
for (k = 0; k < 10;  k = k + 1)
{
for (m = 0; m < 10;  m = m + 1)
{
if (n < k && k < m)
{
putchar(n + 48);
putchar(k + 48);
putchar(m + 48);
if (n * k * m  < 504)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}

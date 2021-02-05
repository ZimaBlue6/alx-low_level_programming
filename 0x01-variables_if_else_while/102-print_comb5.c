#include <stdio.h>

/**
 *main - outputs 00 01 to 98 99 with comma and space.
 *Return: Always 0
 */
int main(void)
{
int n, k;
for (n = 0; n < 100; n = n + 1)
{
for (k = 0; k < 100;  k = k + 1)
{
if (n < k)
{
putchar(n / 10 + 48);
putchar(n % 10 + 48);
putchar(32);
putchar(k / 10 + 48);
putchar(k % 10 + 48);
if (k <= 99)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 *main - outputs 0 to 9 with comma and space.
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n = n + 1)
{
putchar(n);
if (n < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}

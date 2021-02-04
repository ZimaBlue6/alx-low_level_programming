#include <stdio.h>

/**
 *main - outputs 0 to 9 using putchar.
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n = n + 1)
putchar(n);
putchar(10);
return (0);
}

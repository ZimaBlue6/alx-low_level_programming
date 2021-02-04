#include <stdio.h>

/**
 *main - outputs lowercase alphabet and then UPPERCASE.
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 97; n < 123; n = n + 1)
{
putchar(n);
}
for (n = 65; n < 91; n = n + 1)
{
putchar(n);
}

putchar('\n');
return (0);
}

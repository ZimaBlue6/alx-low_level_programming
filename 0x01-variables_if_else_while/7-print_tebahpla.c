#include <stdio.h>

/**
 *main - outputs alphabet backwards.
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 122; n > 96; n = n - 1)
putchar(n);
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 *main - outputs all base 16 numbers in lowercase.
 *Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n = n + 1)
putchar(n);
for (n = 97; n < 103; n = n + 1)
putchar(n);
putchar('\n');
return (0);
}

#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - adds two numbers
 *@n: num to start from
 */
void print_to_98(int n)
{
if (n <= 98)
for (; n < 98; n = n + 1)
printf("%d, ", n);
else
for (; n > 98; n = n - 1)
printf("%d, ", n);
printf("%d\n", n);
}

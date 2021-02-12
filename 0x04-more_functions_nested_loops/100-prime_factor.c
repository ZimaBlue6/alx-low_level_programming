#include <stdio.h>

/**
 *main - finds and prints the largest prime factor of the number 612852475143
 *Return: 0
 */

int main(void)
{
	long num = 612852475143;
	int maxPrime, oddPrime;

	maxPrime = 0;
	oddPrime = 3;
	while (num % 2 == 0)
	{
		maxPrime = 2;
		num = num / 2;
	}
	while (num != 1)
	{
		while (num % oddPrime == 0)
		{
			maxPrime = oddPrime;
			num = num / oddPrime;
		}
		oddPrime = oddPrime + 2;
	}
	printf("%d\n", maxPrime);
	return (0);
}

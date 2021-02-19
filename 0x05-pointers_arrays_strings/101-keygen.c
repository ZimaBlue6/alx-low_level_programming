#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - keygen
 *
 *Return: 0
 */

int main(void)
{
	char c;
	int sum;

	srand(time(NULL));

	while (sum <= 2645)
		c = rand() % 128,
			sum += c,
			putchar(c);

	putchar(2772 - sum);

	return (0);
}

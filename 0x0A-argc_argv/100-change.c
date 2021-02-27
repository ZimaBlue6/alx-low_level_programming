#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins to make change for an amount of
 *money
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 for success, 1 for fail
 */

int main(int argc, char *argv[])
{
	int cents, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	cents = 0;
	while (change >= 25)
	{
		cents++;
		change = change - 25;
	}
	while (change > 0)
	{
		if (change >= 10)
		{
			cents++;
			change = change - 10;
		}
		else if (change >= 5)
		{
			cents++;
			change = change - 5;
		}
		else if (change >= 2)
		{
			cents++;
			change = change - 2;
		}
		else if (change >= 1)
		{
			cents++;
			change = change - 1;
		}
	}
	printf("%d\n", cents);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>


/**
 *main - a program that adds positive numbers
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i, addition = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			addition = addition + atoi(argv[i]);
	}
	printf("%d\n", addition);
	return (0);
}

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


	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		addition = addition + atoi(argv[i]);
	}
	printf("%i\n", addition);
	return (0);
}

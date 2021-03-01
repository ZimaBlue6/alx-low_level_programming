#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *digit_check - a program that adds positive numbers
 *@s: pointer
 *Return: 1 if true, 0 otherwise
 */

int digit_check(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

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
		if (!digit_check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		addition = addition + atoi(argv[i]);
	}
	printf("%i\n", addition);
	return (0);
}

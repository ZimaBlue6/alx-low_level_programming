#include <stdlib.h>
#include "holberton.h"

/**
 *argstostr - a function that concatenates all the arguments of your program
 * alloc_grid function
 *@ac: argument counter
 *@av: argument vector
 *Return: a pointer to a new string, or NULL if it fails
**/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}

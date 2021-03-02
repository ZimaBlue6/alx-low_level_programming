#include <stdlib.h>
#include "holberton.h"

/**
 *_strdup -  a function that returns a pointer to a newly allocated space in
 *memory
 *@str: pointer to char
 *Return: NULL or pointer to array
 */

char *_strdup(char *str)
{
	unsigned int i, n;
	char *ptr;

	if (str == 0)
		return (NULL);

	for (n = 0; str[n] != 0; n++)
		;
	n++;
	ptr = malloc(n * sizeof(char));
	if (ptr == 0)
                return (NULL);

	for (i = 0; str[i] != 0; i++)
		ptr[i] = str[i];
	ptr[n] = '\0';
	return (ptr);
}

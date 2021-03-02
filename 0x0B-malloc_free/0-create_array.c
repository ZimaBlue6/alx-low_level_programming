#include <stdlib.h>
#include "holberton.h"

/**
 *create_array -  a function that creates an array of chars, and initializes it
 *with a specific char
 *@c: char for array
 *@size: size of array
 *Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

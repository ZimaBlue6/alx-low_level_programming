#include "holberton.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@s: pointer to a character
 *@b: character to initialise the memory region
 *@n: number of bytes in the memory region to initialise
 *Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

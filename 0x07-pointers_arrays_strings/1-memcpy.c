#include "holberton.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@src: where to copy from
 *@dest: where to copy to
 *@n: number of characters to copy
 *Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char tempo;

	for (i = 0; i < n; i++)
	{
		tempo = src[i];
		src[i] = dest[i];
		dest[i] = tempo;
	}
	return (dest);

}

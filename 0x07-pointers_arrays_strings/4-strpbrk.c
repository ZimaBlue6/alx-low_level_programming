#include "holberton.h"
#include <stdlib.h>

/**
 *_strpbrk - a function that searches a string for any of a set of bytes
 *@s: string to be scanned
 *@accept: string containing the characters to match
 *Return:  a pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	do {
		for (i = 0; accept[i]; i++)
		if (*s == accept[i])
			return (s);
	} while (*s++);

	return (NULL);
}

#include "holberton.h"
#include <stdlib.h>
/**
 *_strchr - a function that locates a character in a string
 *@s: where to find character from
 *@c: caracter to find
 *Return: found result or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}

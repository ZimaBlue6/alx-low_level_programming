#include "holberton.h"
#include <stdlib.h>
/**
 *_strstr - a function that locates a string in a string
 *@haystack: main string
 *@needle: substring
 *Return: a pointer to the beginning of the located substring, or NULL if the
 *substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

	do {
		if (*needle == *haystack)
			return (needle);
	} while (*haystack++);

	return (NULL);
}

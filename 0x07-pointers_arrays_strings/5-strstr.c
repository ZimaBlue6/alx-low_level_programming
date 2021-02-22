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
	while (*haystack != '\0')
	{
		char *begin = haystack;
		char *found_str = needle;

		while (*found_str == *haystack && *found_str != '\0'
			&& *haystack != '\0')
		{
			haystack++;
			found_str++;
		}

		if (*found_str == '\0')
			return (begin);
		haystack = begin + 1;
	}
	return (NULL);
}

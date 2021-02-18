#include "holberton.h"

/**
 *_strlen - a function that returns the length of a string
 *@s: pointer
 *Return: 0
 */

int _strlen(char *s)
{
	int len_str;

	for (len_str = 0; s[len_str] != '\0'; len_str = len_str + 1)
		;

	return (len_str);
}

/**
 *_strncpy - a function that copies a string
 *@dest: target to copy to
 *@src: source to copy from
 *@n: number of characters to be copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

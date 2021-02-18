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
 *_strncat - a function that concatenates two strings up to n
 *@dest: target to copy to
 *@src: source to copy from
 *@n: number of characters to concatenate
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)

		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

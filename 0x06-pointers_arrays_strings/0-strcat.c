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
	len_str++;
	return (len_str);
}

/**
 *_strcat - a function that concatenates two strings
 *@dest: target to copy to
 *@src: source to copy from
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < dest_len && src[i] != '\0'; i++)

		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

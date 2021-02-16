#include <stdio.h>

/**
 * *_strcpy - a function that copies a string
 * @dest: target to copy to
 * @src: source to copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n = n + 1;
	}
	dest[n] = '\0';
	return (dest);
}

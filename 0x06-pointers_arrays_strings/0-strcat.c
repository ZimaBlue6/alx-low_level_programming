#include "holberton.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: target to copy to
 *@src: source to copy from
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len_str;
	int i;

	for (len_str = 0; dest[len_str] != '\0'; len_str = len_str + 1)
                ;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[len_str + i] = src[i];
	}
	dest[len_str + i] = '\0';

	return (dest);
}

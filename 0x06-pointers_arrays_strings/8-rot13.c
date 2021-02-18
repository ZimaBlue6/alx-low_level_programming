#include "holberton.h"

/**
 *rot13 - EBG13
 *@s: pointer
 *Return: char
 */

char *rot13(char *s)
{
	int i;

	char from_nor[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char to_rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13 = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == from_nor[i])
			{
				*s = to_rot13[i];
				break;
			}
		}
		s++;
	}
	return (rot13);
}

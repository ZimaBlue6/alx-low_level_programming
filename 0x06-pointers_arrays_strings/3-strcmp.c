#include "holberton.h"

/**
 *_strcmp - a function that compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0, -1 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int i, a1, a2;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		a1 = s1[i];
		a2 = s2[i];
		if (a1 > a2)
			return (a1 - a2);
		if (a2 > a1)
			return (a1 - a2);
	}
}

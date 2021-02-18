#include "holberton.h"

/**
 *leet - a function that replacs chars of aeotl & AEOTL with 43071
 *@s: pointer
 *Return: char
 */

char *leet(char *s)
{
	int i, n;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char subst[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n <= 4; n++)
		{
			if (s[i] == s1[n] || s[i] == s2[n])
				s[i] = subst[n];
		}
	}
	return (s);
}

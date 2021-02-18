#include "holberton.h"

/**
 *cap_string - a function that capitalizes all words of a string
 *@s: pointer
 *Return: char
 */

char *cap_string(char *s)
{
	int i = 0, n,

		sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			n = 0;
			while (n <= 12)
			{
				if (s[i - 1] == sep[n])
				{
					s[i] = s[i] - 32;
				}
				n = n + 1;
			}
		}
		i = i + 1;
	}
	return (s);
}

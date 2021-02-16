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
 *rev_string - a function that reverses a string
 *@s: pointer
 */

void rev_string(char *s)
{
	int length, n;
	char temp;

	length = _strlen(s);

	for (n = 0; n < length / 2; n = n + 1)
	{
		temp = s[n];
		s[n] = s[length - 1 - n];
		s[length - 1 - n] = temp;
	}
}

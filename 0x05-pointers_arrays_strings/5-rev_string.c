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
 *print_rev - a function that prints a string, in reverse
 *@s: pointer
 */

void print_rev(char *s)
{
	int i, tot_size;

	tot_size = _strlen(s);

	for (i = tot_size; i >= 0; i = i - 1)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 *rev_string - a function that everses a string
 *@s: pointer
 */

void rev_string(char *s)
{
	if (*s)
		print_rev(s);
	_putchar('\n');
}
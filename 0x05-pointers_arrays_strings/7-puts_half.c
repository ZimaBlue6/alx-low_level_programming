#include "holberton.h"

/**
 *puts_half - a function that prints half a string
 *@str: pointer
 *
 */

void puts_half(char *str)
{
	int len_str, n;

	for (len_str = 0; str[len_str] != '\0'; len_str = len_str + 1)
		;
	len_str = len_str + 1;

	n = len_str;

	for (n = n / 2; str[n] != '\0'; n = n + 1)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

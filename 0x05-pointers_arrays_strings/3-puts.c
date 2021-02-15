#include "holberton.h"

/**
 *_puts - a function that prints a string
 *@str: pointer
 *
 */

void _puts(char *str)
{

	int len_str;

	for (len_str = 0; str[len_str] != '\0'; len_str = len_str + 1)
		_putchar(str[len_str]);
	_putchar('\n');
}

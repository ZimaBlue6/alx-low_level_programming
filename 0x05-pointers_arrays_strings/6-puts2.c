#include "holberton.h"

/**
 *puts2 - a function that prints every other character
 *@str: pointer
 *
 */

void puts2(char *str)
{

	int len_str;

	for (len_str = 0; str[len_str] != '\0'; len_str = len_str + 1)
		if (len_str % 2 == 0)
			_putchar(str[len_str]);
	_putchar('\n');
}

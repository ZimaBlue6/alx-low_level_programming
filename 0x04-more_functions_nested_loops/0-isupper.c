#include "holberton.h"

/**
 *_isupper - a function that checks if c is an uppercase character
 *@c: character to be checked
 *Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}

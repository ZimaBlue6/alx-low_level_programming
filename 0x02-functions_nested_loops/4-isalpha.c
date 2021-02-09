#include "holberton.h"

/**
 *_isalpha - a function that checks for lowercase character.
 *@c: checking if character is an alphabetic character
 *Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
return (1);
else
return (0);
}

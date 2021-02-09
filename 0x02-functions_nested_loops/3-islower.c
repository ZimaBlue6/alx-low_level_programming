#include "holberton.h"

/**
 *_islower - a function that checks for lowercase character.
 *@c: checking if character is lowercase
 *Return: 1 if true and 0 if false
 */
int _islower(int c)
{
if (c >= 97 && c < 123)
return (1);
else
return (0);
}

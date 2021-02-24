#include "holberton.h"

/**
 *_strlen_recursion - a function that returns the length of a string
 *@s: string to be counted
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 *palindrome_check - a function that checks if a string is a palindrome
 *@s: string to be checked
 *@start: start of string
 *@end: end of string
 *Return: 1 if a string is a palindrome and 0 if not
 */

int palindrome_check(char *s, int start, int end)
{
	if (end - start == 1 || start == end)
		return (1);
	else if (s[start] == s[end])
		return (palindrome_check(s, start + 1, end - 1));
	else
		return (0);
}


/**
 *is_palindrome - a function that checks if a string is a palindrome
 *@s: string to be checked
 *Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if (len == 0)
		return (1);
	else
		return (palindrome_check(s, 0, len));
}

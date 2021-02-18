#include "holberton.h"

/**
 *cap_string - a function that capitalizes all words of a string
 *@s: pointer
 *Return: char
 */

char *cap_string(char *s)
{
        int i;

        for (i = 0; s[i]; i++)
        {
                if (i == 0)
                {
                        if(s[i] >= 'a' && s[i] <= 'z')
                                s[i] = s[i] - 32;
                }
                else if (s[i - 1] == ' ')
                {
                        if(s[i] >= 'a' && s[i] <= 'z')
                                s[i] = s[i] - 32;
                }
        }
        return (s);
}

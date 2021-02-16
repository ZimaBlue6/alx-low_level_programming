#include <stdio.h>

/**
 * print_array - prints first n elements of array
 * @a: int array to display from
 * @n: number of elements to display
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n = n + 1;
	}
	dest[n] = '\0';
	return dest;
}

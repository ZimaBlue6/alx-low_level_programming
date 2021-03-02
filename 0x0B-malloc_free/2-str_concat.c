#include <stdlib.h>
#include "holberton.h"

/**
 *str_concat -  a function that returns a pointer to a newly allocated space in
 *memory
 *@s1: pointer to char
 *@s2: pointer to char
 *Return: NULL or pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, n, m, tot_count = 0, tot_len;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (n = 0; s1[n] != 0; n++)
		n++;
	for (i = 0; s2[i] != 0; i++)
		i++;
	tot_len = n + i;
	ptr = malloc(tot_len * sizeof(char));

	if (ptr == 0)
		return (NULL);
	for (m = 0; s1[m] != 0; m++)
		ptr[tot_count++] = s1[m];
	for (m = 0; s2[m] != 0; m++)
		ptr[tot_count++] = s2[m];


	return (ptr);
}

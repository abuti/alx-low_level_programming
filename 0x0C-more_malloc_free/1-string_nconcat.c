#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the second  string to be concatenated
 * @n: no. of strings to be concatenated from s2
 * Return: pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by
 * the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int sz1 = 0, sz2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sz1] != '\0')
		sz1++;
	while (s2[sz2] != '\0')
		sz2++;
	if (sz2 <= n)
	{
		n = sz2;
	}
	ptr = malloc(sizeof(char) * (sz1 + n));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < sz1; i++)
		ptr[i] = s1[i];
	for (; i < (sz1 + n); i++)
		ptr[i] = s2[i - sz1];
	ptr[i] = '\0';
	return (ptr);
}



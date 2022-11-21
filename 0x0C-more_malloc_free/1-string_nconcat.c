#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
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
	unsigned int sz1, sz2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sz1 = strlen(s1);
	sz2 = strlen(s2);
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



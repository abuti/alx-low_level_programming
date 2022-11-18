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
	unsigned int sz1, sz2, i, j;

	if (s1 == NULL || s2 == NULL)
	{
		ptr = " ";
		return (ptr);
	}
	else
	{
		sz1 = strlen(s1);
		sz2 = strlen(s2);
		ptr = malloc(sizeof(char) * (n + sz1));
		if (ptr == NULL)
			exit(1);
		for (i = 0; i < sz1; i++)
			ptr[i] = s1[i];
		if (sz2 <= n)
		{
			for (j = 0; j < sz2; j++)
				ptr[sz1 + j] = s2[j];
		}
		else
		{
			for (j = 0; j < n; j++)
				ptr[sz1 + j] = s2[j];
		}
		return (ptr);
	}
}

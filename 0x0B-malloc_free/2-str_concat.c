#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string to concatinate
 * @s2: the second string that will be concatinated
 * Return: a void pointer to the concatinated string which is stored in DAM
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, n = 0, m = 0;

	if (s1 == NULL)
		n = 0;
	else
		while (s1[n] != '\0')
			n++;
	if (s2 == NULL)
		m = 0;
	else
		while (s2[m] != '\0')
			m++;
	ptr = (char *) malloc(((n + m + 2) * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		printf("Can't allocate the needed bytes\n");
		return (NULL);
	}
	if (n != 0)
		for (i = 0; i <= n; i++)
			ptr[i] = s1[i];
	if (m != 0)
		for (i = 0; i <= m; i++)
			ptr[n + i] = s2[i];
	ptr[n + m + 2] = '\0';
	return (ptr);
}

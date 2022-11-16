#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: the string to be split into words
 * Return: a pointer to an array of strings (words)
 * or NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int i = 0, j = 0, r = 0, c;
	char **ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			r++;
		i++;
	}
	ptr = malloc(sizeof(char) * r);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
	{
		c = 0;
		for (j = 0; str[j] != ' '; j++)
		{
			c++;
		}
		ptr[i] = malloc(sizeof(char) * c + 1);
	}
	for (i = 0; i < r; i++)
	{
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < r; i++)
	{
		for (j = 0; str[i + j] != ' '; j++)
		{
			ptr[i][j] = str[i + j];
		}
		ptr[i][j + 1] = '\0';
	}
	return (ptr);
}

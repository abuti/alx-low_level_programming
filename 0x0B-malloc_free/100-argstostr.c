#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: integer argumet to be concatinated
 * @av: char array/ string to be concatinated
 * Return: a pointer to a new string or  NULL if it fails or
 * ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l = l + ac;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		if (ptr[k] == '\0')
		{
			ptr[k++] = '\n';
		}
	}
	return (ptr);
}

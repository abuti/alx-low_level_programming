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
	int i = 0, j = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j])
			j++;
		i++;
	}
	j = j + ac;
	ptr = malloc(sizeof(char) * j + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[j] = av[i][j];
		}
		if (ptr[j] == '\0')
			ptr[j++] = '\n';
	}
	return (ptr);
}

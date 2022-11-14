#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string as an input
 * Return: a void pointer or a generic pointer to the base address of the
 * newly allocated memory space.
 */

char *_strdup(char *str)
{
	char *ptr;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[n] != '\0')
		{
			n++;
		}
		ptr = (char *)malloc((n + 1) * sizeof(char));
		if (ptr == NULL)
		{
			printf("Can't allocate the needed bytes\n");
			exit(1);
		}
		n = 0;
		while (str[n] != '\0')
		{
			ptr[n] = str[n];
			n++;
		}
		return (ptr);
	}
}

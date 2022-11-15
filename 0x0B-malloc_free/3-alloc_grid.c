#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers initilized with 0
 * @width: row of a 2D array
 * @height: column of a 2D array
 * Return: a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int w, h;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(width * sizeof(int));
		if (ptr[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(ptr[h]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w]  = 0;
		}
	}
	return (ptr);
ii}

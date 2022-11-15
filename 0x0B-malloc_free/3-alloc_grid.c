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
	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (w = 0; w < width; w++)
	{
		ptr[w] = (int *)malloc(height * sizeof(int));
		if (ptr[w] == NULL)
		{
			free(ptr[w]);
			return (NULL);
		}
	}
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			ptr[w][h]  = 0;
		}
	}
	return (ptr);
}













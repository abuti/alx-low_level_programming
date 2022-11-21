#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer value to be included in the array
 * @max: maximum integer value to be included in the array
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 2));
	if (ptr == NULL)
		return NULL;
	for (i = 0; i < (max - min + 2); i++)
		ptr[i] = min + i;
	return (ptr);
}

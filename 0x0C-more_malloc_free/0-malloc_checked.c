#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size to allocated
 * Return: void or a generic pointer to the DAM
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

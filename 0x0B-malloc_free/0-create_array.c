#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: a char to initiallize
 *
 * Return: a pointer to the array, or NULL if it fails or size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array_of_chars;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array_of_chars = malloc(sizeof(char) * size);

		if (array_of_chars == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				array_of_chars[i] = c;
			}
		}
	}
	return (array_of_chars);
}

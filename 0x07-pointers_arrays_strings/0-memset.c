#include "main.h"

/**
 * _memset - fills memory with condtant byte.
 * @s: pointer to the memory to be filled
 * @b: constant byte to filled
 * @n: the first bytes of the memory 
 *
 *Return: a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}


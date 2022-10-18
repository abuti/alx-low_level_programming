#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where the copied memory area will be stored
 * @src: a pointer to the memory area to copied
 * @n: bytes to be copied from memory area
 *
 * Return: pointer to the copied and stored memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

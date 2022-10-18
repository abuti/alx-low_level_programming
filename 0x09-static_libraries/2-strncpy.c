#include "main.h"

/**
* _strncpy - copies a string on to another string
* @dest: a string where the other string is going to be copied
* @src: a string to be copied
* @n: number of characters to be concatinated
*
* Return: the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}



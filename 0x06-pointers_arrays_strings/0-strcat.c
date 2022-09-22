#include "main.h"

/**
* _strcat - concatinates two strings
* @dest:a string that another string going to be add to
* @src: a string to be appended
*
* Return: concatinated string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

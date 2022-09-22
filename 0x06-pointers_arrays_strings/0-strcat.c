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
	int len1 = 0, len2;

	while (*(dest + len1) != '\0')
		len1++;

	for (len2 = 0; src[len2] != '\0'; ++len2)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';
	return (dest);
}

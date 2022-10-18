#include "main.h"
/**
 *_strncat - concatinates two strings with the exception atmost n bytes from
 *src string only src does not need to be null-terminated if it contains
 *@dest: the string that the other string going to be added to
 *@src: the string that will be appended
 *@n: maximum number of bytes
 *
 *Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	for (j = 0; (j != n) && (src[j] != '\0'); j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}

#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a stirng
 * @s: the string to be searched
 * @c: the character to be searched and located
 *
 * Return: a pointer to the first occurance of the c if not found NUL
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
			break;
		j++;
	}
	if (j >= i)
		return (NULL);
	return (&s[j]);
}

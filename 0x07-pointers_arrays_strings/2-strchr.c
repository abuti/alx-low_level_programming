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

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

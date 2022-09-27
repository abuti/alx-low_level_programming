#include "main.h"

/**
 *_strpbrk -  searches a string for any of a set of bytes.
 *@s: the string to be searched
 *@accept: the string to searched for
 *
 *Return: a pointer to the byte in s that matched or NULL if no set matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}


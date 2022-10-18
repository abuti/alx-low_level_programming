#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be searched
 * @accept: the prefix to be measured
 *
 * Return: The number of bytes in s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

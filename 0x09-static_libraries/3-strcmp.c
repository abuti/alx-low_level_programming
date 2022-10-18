#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if s1 and s2 are the same
 * less than 0 if s1<s2
 * greater than 0 if s1>s2.
 */

int _strcmp(char *s1, char *s2)
{
	int l = 0;

	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
			return (s1[l] - s2[l]);
		l++;
	}
	return (0);
}

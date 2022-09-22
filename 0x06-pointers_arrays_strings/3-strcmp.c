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
	int i = 0;
	int j = 0;
	int k;
	int result;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i == j)
	{
		for (k = 0; s1[k] == s2[k] && k <= i; k++)
		{
			if (s1[k] != '\0')
			{
				result = 0;
				break;
			}
			else
				continue;
		}
	}
	else if (i < j)
		result = -15;
	else
		result = 15;
	return (result);
}

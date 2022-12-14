#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to compare and can contain the special character *
 *     the special char * can replace any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

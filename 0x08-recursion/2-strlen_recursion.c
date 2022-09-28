#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length to be calculated
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(++s);
		++i;
	}
	return (i);
}


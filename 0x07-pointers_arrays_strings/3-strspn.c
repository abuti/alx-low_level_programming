#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string 
 * @accept:
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if ((s == NULL) || (accept == NULL))
		return (0);
	while (*s[i] == 

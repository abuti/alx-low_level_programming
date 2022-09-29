#include "main.h"

int check_palindrome(char *s, int l);
int is_palindrome(char *s);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 *
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * check_palindrome - checks if a string is palindrome or not
 * @s: the string to be checked
 * @l: the length of the string
 *
 * Return: 1 if a string is a palindrome and 0 if it is not
 * an empty string is a palindrome
 */
int check_palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (check_palindrome(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: the string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, length - 1));
}

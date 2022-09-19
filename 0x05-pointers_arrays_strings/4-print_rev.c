#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints a string in reverse order
 *@s: input string to be printed in reverse
 *
 *Return: Nothing
 */

 void print_rev(char *s)
{
	int i = (sizeof(s)) - 1;

	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
}

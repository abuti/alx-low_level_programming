#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: input string 
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

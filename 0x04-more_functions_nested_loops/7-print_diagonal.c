#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, ii;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (ii = 0; ii < i; ii++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i == (n - 1))
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}

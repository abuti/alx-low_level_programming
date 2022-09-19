#include "main.h"

/**
 *swap_int - swaps the two input variables
 *@a: input parameters
 *@b: input parameters
 *
 *Return: nothing/void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

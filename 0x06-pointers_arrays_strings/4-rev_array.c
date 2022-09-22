#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: no. of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int m = n - 1;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
		i++;
		m--;
	}
}

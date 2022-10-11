#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonal elements of a square matrix
 *
 * @a: array of integers/ a square matrix
 * @size: size of the square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sumd1 = *a, sumd2 = 0;

	for (i = 1; i <= size ; ++i)
	{
		if (i != size)
			sumd1 += *(a + (i * size) + i);
		sumd2 += *(a + (size - 1) * i);
	}
	printf("%d, ", sumd1);
	printf("%d\n", sumd2);
}

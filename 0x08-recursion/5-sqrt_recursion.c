#include "main.h"

int cal_sqrt(int m, int r);
int _sqrt_recursion(int n);

/**
 * cal_sqrt - calculates the natural square root of an inputted number.
 * @m: The number to find/test its square root
 * @r: the number to test if it's the auare root
 *
 * Return: If the number has a natural square root - the square root
 *         If the number does not have a natural square root - -1
 */

int cal_sqrt(int m, int r)
{
	if ((r * r) == m)
		return (r);
	if (r == m / 2)
		return (-1);
	return (cal_sqrt(m, r + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * if n does not have a natural square root, the function should return -1
 * @n: the number its square root is going to be calculated
 *
 * Return: the result of the square root
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (cal_sqrt(n, r));
}

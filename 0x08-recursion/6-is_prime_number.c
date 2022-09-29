#include "main.h"

int is_prime_number(int n);
int is_divisible(int m, int d);

/**
 * is_divisible - checks if a number is divisible by the given number
 * @m: the number to be checked if it is divisible
 * @d: the devisor
 * Return: 1 if it is divisible otherwise 0
 */

int is_divisible(int m, int d)
{
	if (m % d == 0)
		return (0);
	if (d == m / 2)
		return (1);
	return (is_divisible(m, d + 1));
}
/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == -1 || n == 1)
		return (0);
	return (is_divisible(n, i));
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int lstdigit;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdigit = n % 10;
	if (lstdigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lstdigit);
	}
	else if (lstdigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lstdigit);
	}
	else if (lstdigit < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lstdigit);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess/correct) 
 */
 
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n == 0)
	{
		printf("%i is zeero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	nclude <stdlib.h>
	
#include <time.h>
	
#include <stdio.h>
	
	
	
	/**
	 *
	 *  * main - Prints if number is positive, zero or negative
	 *
	 *   *
	 *
	 *    * Return: Always (Success)
	 *
	 *     */
	
	int main(void)
	
	{
	
		int n;
	
	
	
		srand(time(0));
	
		n = rand() - RAND_MAX / 2;
	
	
	
		if (n > 0)
	
		{
		
				printf("%d is positive\n", n);
		
			}
	
		else if (n == 0)
	
		{
		
				printf("%d is zero\n", n);
		
			}
	
		else
	
		{
		
				printf("%d is negative\n", n);
		
			}
	
	
	
		return (0);
	
	}
	
	}
	return (0);
}

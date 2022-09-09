#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point 
 * /
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
}
return (0);
}

#include <stdlib.h>

#include <time.h>

#include <stdio.h>

void positive_or_negative(int n)
{
	srand(time(0));
	printf("%d is %s\n", n, n == 0 ? "zero" : n < 0 ? "negative" : "positive");
}

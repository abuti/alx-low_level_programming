#include "main.h"

/**
* _atoi - converts/ casts a string to an int
* @s: the string to be changed to an integer
*
* Return: the integer
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}

#include "main.h"

/**
* leet - encodes a string into 1337: Letters a and A should be replaced
* by 4, e and E by 3, o and O by 0, t and T by 7, l and L by 1
* @str: a string to be encoded
*
* Return: encoded string
*/

char *leet(char *str)
{
	int i = 0, j;
	char s;
	char rs[11] = {"aAeEoOtTlL"};
	char rd[6] = {"43071"};

	while (*(str + i) != '\0')
	{
		s = *(str + i);
		for (j = 0; j < 10; ++j)
			if (s == rs[j])
				*(str + i) = rd[j / 2];
		i++;
	}
	return (str);
}

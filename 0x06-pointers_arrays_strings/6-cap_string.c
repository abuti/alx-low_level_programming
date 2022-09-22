#include "main.h"

/**
* cap_string - capitalizes all words of a string.
* @str: a string its' words to capitalized
*
*Return: string after change/ capitalization of its words
*/

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char c1, c2;
	char sc[] = "\t\n,;.!\?\"(){} ";

	while (str[i] != '\0')
	{
		c1 = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = c1 - 32;
			else
			{
				c2 = str[i - 1];
				for (j = 0; sc[j] != '\0'; j++)
				{
					if (c2 == sc[j])
						str[i] = c1 - 32;
				}
			}
		}
		i++;
	}
	return (str);
}

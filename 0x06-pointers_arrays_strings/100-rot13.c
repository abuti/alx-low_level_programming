#include "main.h"

/**
* rot13 - encodes a string using rot13. is a simple letter substitution cipher
* that replaces a letter with the 13th letter after it in the alphabet.
* @str: input string to be encoded
*
* Return: rot13 encoded string
*/

char *rot13(char *str)
{
	int i = 0, j;
	char encode[] = {"ABCDEFGHILJKMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char decode[] = {"NOPQRSTUVWXYZABCDEFGHILJKMnopqrstuvwxyzabcdefghijklm"};

	while (str[i] != '\0')
	{
		for (j = 0; encode[j] != '\0'; ++j)
		{
			if (str[i] == encode[j])
			{
				str[i] = decode[j];
				break;
			}
		}
		i++;
	}
	return (str);
}

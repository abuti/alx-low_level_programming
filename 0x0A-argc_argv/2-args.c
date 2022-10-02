#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the no. of arguments passed to the program
 * @argv: an array of strings each string is one of
 * the arguments passed to the program
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}

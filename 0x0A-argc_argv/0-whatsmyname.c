#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line.
 * @argc: number of arguments passed to the program
 * @argv: an array of strings and each string is one of the argu
 * ments that was passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

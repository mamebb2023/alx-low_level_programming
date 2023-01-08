#include <stdio.h>

/**
 * main - Prints all arguments in a new line
 * @argc: the number of arguments
 * @argv: the pointer of chars
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

#include <stdio.h>

/**
 * main - Prints the number of argument
 * @argc: the number of the arguments
 * @argv: pointer to char
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	(void)argv;

	return (0);
}

#include <stdio.h>

/**
 * main - Prints the name of the first argumenr
 * @argc: argument count
 * @argv: pointer the argc
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}

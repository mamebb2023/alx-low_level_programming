#include <stdio.h>

/**
 * main - Multiplies the two arguments
 * @argc: the number of arguments
 * @argv: the pointer to char
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc = 3)
	{
		for (i = 0; i < argc; i++)
			printf("%d\n", argv[1] * argv[2]);
	}
	else
		print("Error\n");

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds the ibers in arguments
 * @argc: the iber of arguments
 * @argv: the poointer to arguments
 *
 * Return: 0 if succuss, 1 if not
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

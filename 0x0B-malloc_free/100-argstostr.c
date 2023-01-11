#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatinates all the arguments
 * @ac: the number of argumnets
 * @av: the pointer to the argumnets
 *
 * Return: a pointer to the new char or NULL
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int l, lt, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		lt = 0;
		while (av[i][lt])
			lt++;
		l += lt + 1;
	}
	p = malloc((l + 1) * sizeof(char));

	if (p == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		lt = 0;
		while (av[j][lt])
		{
			p[i] = av[j][lt];
			k++;
			lt++;
		}
		p[i] = '\n';
		k++;
	}
	p[k] = '\0';

	return (s);
}

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
	char *cat, *chr;
	int arg, size;

	if (!ac || !av)
		return (NULL);

	for (arg = 0, size = 1; arg < ac; ++arg, ++size)
	{
		for (chr = av[arg]; *chr; ++chr, ++size)
			;
	}

	cat = (char *) malloc(sizeof(char) * size);

	if (!cat)
		return (NULL);

	for (arg = 0, size = 0; arg < ac; ++arg, ++size)
	{
		for (chr = av[arg]; *chr; ++chr, ++size)
			cat[size] = *chr;
		cat[size] = '\n';
	}

	cat[size] = '\0';

	return (cat);
}

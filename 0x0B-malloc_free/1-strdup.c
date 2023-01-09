#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: the pointer to the string
 *
 * Return: the new pointer to the string
 */

char *_strdup(char *str)
{
	int j, i;
	char *p;

	if (str == NULL)
		return (0);

	for (j = 0; str[j]; j++)
		;

	p = malloc(j * sizeof(char));

	if (p == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
                p[i] = str[i];

	return (p);
}

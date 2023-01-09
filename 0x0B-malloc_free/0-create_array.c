#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of char
 * @size: the size of array
 * @c: the specific char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (0);

	p = malloc(size * sizeof(char));

	if (p == 0)
		return (0);

	for (i = 0; i < size; i++)
		p[i] = c;

	p[i] = '\0';

	return (p);
}

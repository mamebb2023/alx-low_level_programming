#include "main.h"

/**
 * _calloc - Allocates nmemb bytes of size
 * @nmemb: the bytes
 * @size: the elements
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmem * size);

	if (p == NULL)
		return (NULL);

	filler = p;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (p);
}

#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b - size of the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p)
		return (p);

	exit (98);
}

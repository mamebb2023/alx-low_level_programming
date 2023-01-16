#include "dog.h"

/**
 * free_dog - Frees memory form dog
 * @d: the structure dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

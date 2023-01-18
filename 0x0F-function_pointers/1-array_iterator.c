#include "function_pointers.h"

/**
 * array_iterator - Prints the contents of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: the array
 * @size: the size of the array
 * @cmp: a function pointer
 *
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

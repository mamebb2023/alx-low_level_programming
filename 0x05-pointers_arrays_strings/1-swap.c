#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

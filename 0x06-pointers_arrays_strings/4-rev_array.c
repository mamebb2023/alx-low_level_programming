#include "main.h"

/**
 * reverse_array - Reverse the given array
 * @a: the array
 * @n: the number of elements of array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int *init, *final;
	int aux = 0;

	init = a;
	final = a;
	n -= 1;
	for (i = 0; i < n; i++)
		;
	while (j <= i)
	{
		aux = *(init + j);
		*(init + j) = *(final + i);
		*(final + i) = aux;
		j++;
		i--;
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimentional array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: the pointer ot the formed grid
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, k, fr;

	fr = 0;
	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(height * sizeof(int *));

	if (p == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(p[k]);
		}
		free(p);
	}
	return (p);
}

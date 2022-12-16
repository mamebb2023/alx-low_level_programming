#include "main.h"

/**
 * print_triangle - Prints a square, followed by a new line
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				x = (size - i) - 1;
				if (j < x)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

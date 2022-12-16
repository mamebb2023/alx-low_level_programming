#include "main.h"

/**
 * print_diagonal - Prints a diagonal
 * @n: the number of times
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (n < 0)
				_putchar('\n');
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

	_putchar('\n');
}

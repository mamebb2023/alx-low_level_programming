#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int n, o, j = 0;

	for (n = 0; n <= 9; n++)
	{
		for (o = 0; o <= 9; o++)
		{
			j = o * n;
			if (o != 0)
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(j + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
			}
			else
			{
				if (j < 9)
				{
					_putchar(j + '0');
				}
				else
				{
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}

#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long d = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % d == 0)
		{
			num = num / d;
			larg_prim = d;
		}
		d++;
	}
	printf("%ld\n", larg_prim);
	return (0);
}

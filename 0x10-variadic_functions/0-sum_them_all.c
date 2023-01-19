#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all it arguments
 * @n: the number of the argumets
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int a = 0;

	va_list arg;
	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		a += va_arg(arg, int);
	}

	va_end(arg);

	return (a);
}

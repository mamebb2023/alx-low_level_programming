#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers with a separation
 * @separator: the separator
 * @n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arg);
}

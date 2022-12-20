#include "main.h"

/**
 * puts_half - -prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;
	int n = 0;

	for (i = 0; str[i] != '\0'; i++)
		;

	n = i / 2;
	if (i % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

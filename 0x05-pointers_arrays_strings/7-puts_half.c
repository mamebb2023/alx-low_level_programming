#include "main.h"

/**
 * puts_half - -prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;
	int n;

	for  (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 1)
		n += 1;
	for (n = i / 2; str[n] != '\0'; n++)
		_putchar(str[n]);

	_putchar('\n');
}

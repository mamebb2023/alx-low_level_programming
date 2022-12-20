#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int j;
	char str;

	for (i = 0; s[i] != '\0'; i++)
		;

	i--;
	for (j = 0; j < i; j++)
	{
		str = s[i];
		s[i] = s[j];
		s[j] = str;
		i--;
	}
}

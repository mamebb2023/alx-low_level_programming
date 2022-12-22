#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * @s: the string
 *
 * Return: the pointer to the changed string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - ' ';
	}
	return (s);
}

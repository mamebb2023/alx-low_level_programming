#include "main.h"

/**
 * *leet - Switches characters of a string
 * @s: the string
 *
 * Return: the pointer to the changed string
 */

char *leet(char *s)
{
	int i;
	int j;
	char *src = "aAeEoOlLtT";
	char *dest = "4433001177";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			if (s[i] == src[j])
				s[i] = dest[j];
		}
		j = 0;
	}

	return (s);
}

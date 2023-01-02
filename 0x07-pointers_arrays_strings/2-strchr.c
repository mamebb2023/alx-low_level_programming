#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates the first occurace of a character
 * @s: the string
 * @c: the charachter
 *
 * Return: the pointer to the character
 */

char *_strchr(char *s, char c)
{
	
	for (;*s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}

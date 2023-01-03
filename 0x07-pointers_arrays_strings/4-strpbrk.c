#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: the string
 * @accept: the string of any byte
 *
 * Return: a pointer to the result 's'
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}

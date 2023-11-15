#include "main.h"

/**
 * _strspn - Gets the length of prefix substring
 * @s: the string
 * @accept: the byte of characters
 *
 * Return: the number of bytes n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				j = 1;
			i++;
		}
		i = 0;
		if (j == 0)
			break;
		n++;
		s++;
	}
	return (n);
}

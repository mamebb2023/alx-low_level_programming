#include "main.h"

/**
 * string_nconcat - Concatinates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of the second string
 *
 * Return: The concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *p;

	if (s1)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2)
	{
		for (j = 0; j < n && s2[j]; j++)
			;
	}

	p = malloc(sizeof(char) * (j + i+ 1));
	if (!p)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}

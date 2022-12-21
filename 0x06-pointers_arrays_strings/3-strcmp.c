#include "main.h"

/**
 * _strcmp - Compares strings
 * @s1: first stirng
 * @s2: second stirng
 *
 * Return: the compared value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
		else if (s1[i] < s2[i])
		{
			n = s1[i] - s2[i];
			return (n);
		}
	}

	return (0);
}

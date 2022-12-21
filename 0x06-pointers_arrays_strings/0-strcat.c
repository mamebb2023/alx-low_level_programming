#include "main.h"

/**
 * *_strcat - Concatinates two strings
 * @dest: the destination
 * @src: the source
 *
 * Return: a pointer to the resulting dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

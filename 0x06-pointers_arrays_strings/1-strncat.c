#include "main.h"

/**
 * *_strncat - Concatinates n bytes of a string to another
 * @dest: the destination
 * @src: the source
 * @n: the n bytes
 *
 * Return: the resunting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}

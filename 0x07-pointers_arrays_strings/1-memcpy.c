#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: the destination
 * @src: the source
 * @n: the bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}

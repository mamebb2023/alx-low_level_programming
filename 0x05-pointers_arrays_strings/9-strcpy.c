#include "main.h"

/**
 * *_strcpy - Copies one string
 * from one poiter to another
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strlen - Prints the lenght of a string
 * @s: the string
 *
 * Return: the value
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

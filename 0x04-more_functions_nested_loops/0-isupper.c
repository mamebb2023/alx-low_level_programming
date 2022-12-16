#include "main.h"

/**
 * _isupper - Checkes for uppercase letter
 * @c: the letter
 *
 * Return: 1 if true
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

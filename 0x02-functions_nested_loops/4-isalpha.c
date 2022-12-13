#include "main.h"

/**
 * _isalpha - Checkes if a letter is alphabet
 * @c: the letter
 *
 * Return: 1 if true or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}

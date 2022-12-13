#include "main.h"

/**
 * _islower - Checkes if the letter is lowercase or not
 * @c: the letter
 *
 * Return: 1 if true or 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

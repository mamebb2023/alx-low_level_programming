#include "main.h"

/**
 * _isdigit - Checkes if it a letter is a digit
 * @c: the variable
 *
 * Return: 1 if ture, 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

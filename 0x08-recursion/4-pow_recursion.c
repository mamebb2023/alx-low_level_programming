#include "main.h"

/**
 * _pow_recursion - Calculate x raised to y
 * @x: the number
 * @y: the rais to
 *
 * Return: the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	
	return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * the_sqrt - finds the number
 * @a: the base number
 * @b: the square root number
 *
 * Return: the result
 */

int the_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b == a)
		return (-1);

	return (the_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root
 * @n: the number
 *
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (the_sqrt(n, 1));
}

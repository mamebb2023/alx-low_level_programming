#include "main.h"

/**
 * the_prime - Checkes the number if prime
 * @a: the number
 * @b: the checker number
 * 
 * Return: the result
 */

int the_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (the_prime(a, b + 1));
}

/**
 * is_prime_number - Checkes if prime number or not
 * @n: the number
 *
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (the_prime(n, 2);
}

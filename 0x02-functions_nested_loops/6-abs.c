#include "main.h"

/**
 * _abs - Prints the absholute value of the number
 * @n: the number
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
		return (n);
}

#include <stdio.h>

/**
 * main - Prints from 0 - 9
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}

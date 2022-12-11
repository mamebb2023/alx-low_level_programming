#include <stdio.h>

/**
 * main - Print all numbers of base16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Print the alphabet in lower and upper
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);

	putchar('\n');
}

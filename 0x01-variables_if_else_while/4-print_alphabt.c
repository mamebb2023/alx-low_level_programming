#include <stdio.h>

/**
 * main - Print the alphabet exept q and e
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}

	putchar('\n');

	return (0);
}

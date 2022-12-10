#include <stdio.h>

/**
 * main - Prints the size of the file
 * Return: 0
 */

int main(void)
{
	pritnf("Size of a char: %d byte(s)", sizeof(char));
	pritnf("Size of an int: %d byte(s)", sizeof(int));
	pritnf("Size of a long int: %d byte(s)", sizeof(long int));
	pritnf("Size of a long long int: %d byte(s)", sizeof(long long int));
	pritnf("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}

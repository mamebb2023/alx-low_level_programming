#include "lists.h"

/**
 * print_listint - Prints the number of elements
 * @h: a list
 *
 * Return: the number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		printf("%d\n", i);
		i++;
	}

	return (i);
}

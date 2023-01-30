#include "lists.h"

/**
 * print_listint - Prints the number of elements
 * @h: a list
 *
 * Return: the number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *temp = h;

	for (; temp; temp = temp->next)
	{
		printf("%d\n", temp->n);
		i++;
	}
	return (i);
}

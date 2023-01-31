#include "lists.h"

/**
 * print_listint - Prints the number of elements
 * @h: a list
 *
 * Return: the number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

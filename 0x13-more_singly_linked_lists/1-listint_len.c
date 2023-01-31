#include "lists.h"

/**
 * print_listint - Prints the number of elements
 * @h: a list
 *
 * Return: the number of the nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

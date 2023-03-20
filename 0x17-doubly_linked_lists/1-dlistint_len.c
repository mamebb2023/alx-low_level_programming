#include "lists.h"

/**
 * dlistint_len - Prints the number of the list
 * @h: the list
 *
 * Return: the number of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i,n = 0;

	while (h)
	{
		n++;
		h = h->next;
		i++;
	}

	return (n);
}

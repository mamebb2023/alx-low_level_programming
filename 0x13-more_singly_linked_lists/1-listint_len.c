#include "lists.h"

/**
 * print_listint - Prints the number of elements
 * @h: a list
 *
 * Return: the number of the nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t  *temp = h;

	for (; temp; temp = temp->next)
		i++;
        return (i);
}

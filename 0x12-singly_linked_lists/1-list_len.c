#include "lists.h"

/**
 * list_len - Lists the number of elements in list_t
 * @h: the pointer to the struct list_s
 *
 * Return: the length of the elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t i;

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}

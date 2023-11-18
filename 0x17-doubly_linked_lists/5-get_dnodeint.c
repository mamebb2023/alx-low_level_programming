#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a list
 * @head: the head
 * @index: the index
 *
 * Return: The node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at the index
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}

	return (head);
}

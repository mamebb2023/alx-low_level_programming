#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at the given index
 * @head: the head of the list
 * @idx: the location to add the node
 * @n: the value to use
 *
 * Return: the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = copy;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new_node->next = copy->next;
	copy->next = new_node;

	return (new_node);
}

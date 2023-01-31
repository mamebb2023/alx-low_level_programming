#include "lists.h"

/**
 * pop_listint - Deletes the head of the list
 * @head: the head of the file
 * 
 * Return: s the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	unsigned int value;
	listint_t *node;

	if (*head == NULL)
		return (0);

	node = *head;
	value = node->n;
	*head = node->next;
	free(node);

	return (value);
}

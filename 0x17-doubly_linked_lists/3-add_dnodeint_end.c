#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a list
 * @head: the head
 * @n: the number
 *
 * Return: the address of th new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nd, *end;

	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (*head == NULL)
	{
		nd->prev = NULL;
		*head = nd;
		return (nd);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = nd;
	nd->prev = end;

	return (nd);
}

#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: the head
 * @n: the number
 *
 * Return: the adress of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nd;

	nd = malloc(sizeof(dlistint_t));
	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->prev = NULL;
	nd->next = *head;
	if (*head != NULL)
		(*head)->prev = nd;
	*head = nd;

	return (nd);
}

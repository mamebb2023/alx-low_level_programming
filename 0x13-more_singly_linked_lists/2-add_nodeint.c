#include "lists.h"

/**
 * add_nodeint - Adds an element at the beginning of a list
 * @head: the head of the list
 * @n: the list
 *
 * Return: the address to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}

#include "lists.h"

/**
 * free_listint2 - Frees list
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = *head->next;
	}
	head = NULL;
}

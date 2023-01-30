#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head->next = head;
	}
}

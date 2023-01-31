#include "lists.h"

/**
 * sum_listint - Sums up all the data in the list
 * @head: the head of the list
 *
 * Return: the sumof the list
 */

int sum_listint(listint_t *head)
{
	int i;
	int val = 0;

	for (i = 0; head; i++)
	{
		val += head->n;
		head = head->next;
	}

	return (val);
}

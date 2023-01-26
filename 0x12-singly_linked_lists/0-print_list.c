#include "lists.h"

/**
 * print_list - Prints all the elements of list_t
 * @h: a pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp;

	temp = h;

	for (i = 0; temp != NULL; i++)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			temp = temp->next;
		}
		else
		{
			printf("[%d], %s\n", temp->len, temp->str);
			temp = temp->next;
		}
	}

	return (i);
}

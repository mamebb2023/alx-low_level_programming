#include "lists.h"

/**
 * add_node_end - Add a new node at the end of the list
 * @head: the head of the list
 * @str: the string to be added
 *
 * Return: the address of the new added element
 */

list_t *add_node_end(list_h **head, const char *str)
{
	unsigned int i;
	list_h *node, *temp;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	node->len = i;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		{
			temp->next = node;
		}
	}

	return (node);
}

#include "lists.h"

/**
 * add_node - Adds a new node at the
 * beginning of a list_t
 * @head: the head of the list
 * @str: the string to add
 *
 * Return: the address of
 * the new added string or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;

	return (node);
}

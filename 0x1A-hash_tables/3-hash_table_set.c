#include "hash_tables.h"

/**
 * hash_table_set - Set an element in the table
 * @ht: the table
 * @key: the key of the element
 * @value: the value of the element
 *
 * Return: 1 if success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *current_item;

	if (ht == NULL || key == NULL || *key == '\0' || value  == NULL)
		return (0);

	item = malloc(sizeof(hash_node_t));
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	if (item->key == NULL || item->value == NULL || item == NULL)
		return (0);

	strcpy(item->key, key);
	strcpy(item->value, value);

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];

	if (current_item == NULL)
		ht->array[index] = item;
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			free(ht->array[index]->value);
			strcpy(ht->array[index]->value, value);
		}
	}
	return (1);
}

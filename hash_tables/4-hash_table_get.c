#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: hash table
 * @key: key value as string
 * Return: value of key as string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node = NULL;
	unsigned long int index = 0;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	current_node = ht->array[index];
	while (current_node)
	{
		if (current_node->key && strcmp(current_node->key, key) == 0)
			return (current_node->value ? current_node->value : NULL);

		current_node = current_node->next;
	}

	return (NULL);
}

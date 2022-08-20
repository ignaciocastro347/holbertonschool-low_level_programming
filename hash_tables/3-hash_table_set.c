#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: key value as string
 * @value: value as string
 * Return: 1 on succedd or 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *) key, ht->size);
	hash_node_t *new_hash_node = NULL;

	if (!ht)
		return (0);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
	}
	else
	{
		new_hash_node =  malloc(sizeof(hash_node_t));
		if (!new_hash_node)
			return (0);

		new_hash_node->key = strdup(key);
		new_hash_node->value = strdup(value);
		if (!new_hash_node->key || !new_hash_node->value)
			return (1);

		new_hash_node->next = ht->array[index] ? ht->array[index] : NULL;
		ht->array[index] = new_hash_node;
	}
	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *node = NULL, *tmp_node = NULL;

	if (!ht)
		return;

	while (i < (int) ht->size)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				if (node->key)
				{
					free(node->key);
					node->key = NULL;
				}
				if (node->value)
				{
					free(node->value);
					node->value = NULL;
				}
				tmp_node = node;
				node = node->next;
				free(tmp_node);
				tmp_node = NULL;
			}
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}

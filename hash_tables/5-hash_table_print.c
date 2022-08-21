#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, printed_nodes = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	printf("{");
	while (i < (int) ht->size)
	{
		if (!ht->array[i])
		{
			i++;
			continue;
		}

		node = ht->array[i];
		while (node)
		{
			if (node->key && node->value)
			{
				printf("%s", printed_nodes != 0 ? ", " : "");
				printed_nodes++;
				printf("\'%s\':", node->key);
				printf(" \'%s\'", node->value);
			}
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

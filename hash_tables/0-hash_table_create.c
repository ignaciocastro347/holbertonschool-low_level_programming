#include "hash_tables.h"

/**
 * hash_table_create - Create a table (malloc what is needed)
 * @size: size of table
 * Return: pointer to hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h = NULL;
	int i = 0;

	h = malloc(sizeof(hash_table_t));
	if (!h)
		return (NULL);
	h->size = size;
	h->array = malloc(size * sizeof(hash_node_t *));
	while (i < (int) size)
		h->array[i++] = NULL;
	if (!h->array)
	{
		free(h);
		return (NULL);
	}
	return (h);
}

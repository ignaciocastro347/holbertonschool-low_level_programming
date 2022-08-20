#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *h = NULL;
    h = malloc(sizeof(hash_table_t*));
    if (!h)
        return (NULL);
    h->size = size;
    h->array = malloc(sizeof(hash_node_t**));
    return (h);
}
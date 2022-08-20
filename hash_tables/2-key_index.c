#include "hash_tables.h"

/**
 * key_index - gives you teh index of a key
 * @key: key value as string
 * @size: size of the array of the hash table
 * Return: index value of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key = hash_djb2(key);

	return (hashed_key % size);
}


#include "hash_tables.h"

/**
 * key_idex - Gives the index of a key in a hash table array.
 * @key: The key.
 * @size: Size of the hash table array.
 *
 * Return: Index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}

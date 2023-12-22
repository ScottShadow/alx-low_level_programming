#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored.
 * @key: Key string.
 * @size: Size of the hash table.
 *
 * Return: Index where the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}

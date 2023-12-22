#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key string.
 * @value: The value corresponding to the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	hash_node_t *currentNode;
	int key_idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	key_idx = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[key_idx];
	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0 &&
			strcmp(currentNode->value, value) == 0)
		{
			return (1);
		}

		currentNode = currentNode->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[key_idx];
	ht->array[key_idx] = newNode;

	return (1);
}

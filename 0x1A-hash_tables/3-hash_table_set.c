#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	int key_idx;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	key_idx = key_index((unsigned char *)key, ht->size);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[key_idx];
	ht->array[key_idx] = newNode;

	return (1);
}

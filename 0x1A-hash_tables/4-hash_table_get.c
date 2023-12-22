#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a given key.
 * @ht: The hash table.
 * @key: The key to search for.
 *
 * Return: A pointer to the value associated with the key,
 *  or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	char *ret_value = NULL;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	key_idx = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[key_idx];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			ret_value = malloc(sizeof(char) * (strlen(current_node->value) + 1));
			if (ret_value == NULL)
				return (NULL);

			strcpy(ret_value, current_node->value);
			return (ret_value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}

#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));
	hash_node_t *currentNode;
	int key_idx;

	if (!newNode)
		return (0);

	newNode->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (newNode->key == 0)
	{
		free(newNode);
		return (0);
	}
	newNode->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (newNode->value == 0)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}

	strcpy(newNode->key, key);
	strcpy(newNode->value, value);
	newNode->next = NULL;
	key_idx = key_index((const unsigned char *)key, ht->size);

	currentNode = ht->array[key_idx];
	if (currentNode == NULL)
	{
		ht->array[key_idx] = newNode;
	}
	else
	{
		while (currentNode != NULL && currentNode->next != NULL)
		{
			if (strcmp(currentNode->key, key) == 0)
			{
				free(currentNode->value);
				currentNode->value = malloc(sizeof(char) * (strlen(newNode->value) + 1));
				if (currentNode == NULL)
				{
					free(newNode->value);
					free(newNode->key);
					free(newNode);
					return (0);
				}

				strcpy(currentNode->value, newNode->value);
				free(newNode->value);
				free(newNode->key);
				free(newNode);
				return (1);
			}
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	return (1);
}

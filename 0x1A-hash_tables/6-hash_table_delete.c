#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currentNode;
	hash_node_t *temp;

	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];
		while (currentNode)
		{
			temp = currentNode->next;
			free(currentNode->key);
			free(currentNode->value);
			free(currentNode);
			currentNode = temp;
		}
	}
	free(ht->array);
	free(ht);
}

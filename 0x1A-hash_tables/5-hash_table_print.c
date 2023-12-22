#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *myNode;
	int first_entry = 1;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		myNode = ht->array[i];
		while (myNode != NULL)
		{
			if (first_entry)
				first_entry = 0;
			else
				printf(", ");

			printf("'%s': '%s'", myNode->key, myNode->value);
			myNode = myNode->next;
		}
	}
	printf("}\n");
}

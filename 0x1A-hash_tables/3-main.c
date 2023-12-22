#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "8903");
	hash_table_set(ht, "betty", "wtf");
	hash_table_set(ht, "mentioner", "89as03");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}

#include "hash_tables.h"

/**
 * hash_table_print - prints the key/value pairs in the hash table (in the keys
 * numeric hash value order)
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key,
			       hash_table_get(ht, ht->array[i]->key));
			count++;
		}
	}
	printf("}\n");
}

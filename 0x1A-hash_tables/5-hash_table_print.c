#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
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

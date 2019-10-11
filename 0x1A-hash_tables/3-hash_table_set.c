#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key == "")
		return (0);

	index = key_index(key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = malloc(strlen(key) + 1);
		if (ht->array[index]->key == NULL)
			return (0);
		ht->array[index]->value = malloc(strlen(value) + 1);
		if (ht->array[index]->value == NULL)
			return (0);

		strcpy(ht->array[index]->key, key);
		strcpy(ht->array[index]->value, value);
		ht->array[index]->next = NULL;

		return (1);
	}
	while 
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		if (strcmp(ht->array[index]->value, value) == 0)
			return (1);
		free(ht->array[index]->value);
		ht->array[index]->value = malloc(strlen(value) + 1);
		if (ht->array[index]->value == NULL)
			return (0);
		strcpy(ht->array[index]->value, value);
		return (1);
	}
	else
	{
		
	}

}

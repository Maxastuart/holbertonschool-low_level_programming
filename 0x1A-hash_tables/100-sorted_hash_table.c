#include "shash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size: number of array slots to make the table.
 *
 * Return: pointer to the hash table created, or NULL if malloc failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i = 0;
        shash_table_t *ht = malloc(sizeof(shash_table_t));

        if (ht == NULL)
                return (NULL);
        ht->size = size;
        ht->array = malloc(sizeof(shash_node_t *) * size);
        if (ht->array == NULL)
                return (NULL);
        for (; i < size; i++)
                ht->array[i] = NULL;
        return (ht);
}

/**
 * shash_table_set - adds or updates an element to the sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	

	return (0);
}

/**
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	
}

/**
 */
void shash_table_print(const shash_table_t *ht)
{
	
}

/**
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	
}

/**
 */
void shash_table_delete(shash_table_t *ht)
{
	
}

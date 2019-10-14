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
 * set_pair - mallocs a key/value pair to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
shash_node_t *set_pair(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_pair_only - (no collision) set key:value pair to first array element
 * @ht: pointer to the sorted hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * @index: the key's index.
 *
 * Return: the node, or NULL if failed.
 */
shash_node_t *set_pair_only(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *node;

	node = set_pair(key, value);
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	ht->array[index] = node;
	return (node);
}

/**
 * update_value - updates the value of a given node.
 * @node: pointer to the node.
 * @value: string to put at the node.
 *
 * Return: 1 on success, 0 on fail.
 */
int update_value(node, value)
{
	if (strcmp(node->value, value) == 0)
		return (1);
	free(node->value);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->value, value);
	return (1);
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
	unsigned long int index;
	shash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
/* set the item in the table */
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		node = set_pair_only(ht, key, value, index);
		if (node == NULL)
			return (NULL);
	}
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return(update_value(node, value));
			node = node->next;
		}
		/* if (node == NULL) at end of ht->array[index] list: */
/*
 * set_pair_front() - sets key:value pair node to front of list at given index
 * @ht: 
 * @key: 
 * @value: 
 * @index: 
 *
 * Return: node 
 */
		node = set_pair(key, value);
		if (node == NULL)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
	}
/* arrange the item in the sorted linked list */
	if (ht->shead == NULL)
	{
		node->sprev == NULL;
		node->snext == NULL;
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	curr_old_node = ht->shead;
	while (curr_old_node != NULL)
	{
		if (strcmp(curr_old_node->key, node->key) >= 0)
		{
/* if old value is greater than or equal to new value put new value before old:
   if old->prev is NULL: make new the shead & new->prev = NULL.
   make new->next curr_old, make old prev the new head, make new prev null.) */
			if (curr_old_node->sprev == NULL)
				ht->shead = node;
			node->snext = curr_old_node;
			node->sprev = curr_old_node->sprev;
			curr_old_node->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			return (1);
		}
		curr_old_node = curr_old_node->next;
	}
	curr_old_node = ht->stail;
	ht->stail = node;
	node->next = NULL;
	node->prev = curr_old_node;
	curr_old_node->next = node;
	return (1);
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

#include "hash_tables.h"

/**
 * set_pair - mallocs a key/value pair to the hash table.
 * @node: a pointer to the hash table array node.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int set_pair(hash_node_t **node, const char *key, const char *value)
{
	*node = malloc(sizeof(hash_node_t));
	if (*node == NULL)
		return (0);
	(*node)->key = malloc(strlen(key) + 1);
	if ((*node)->key == NULL)
		return (0);
	(*node)->value = malloc(strlen(value) + 1);
	if ((*node)->value == NULL)
		return (0);
	strcpy((*node)->key, key);
	strcpy((*node)->value, value);
	return (1);
}

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
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		if (set_pair(&node, key, value) == 0)
			return (0);
		node->next = NULL;
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
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
		node = node->next;
	}
	if (node == NULL)
	{
		if (set_pair(&node, key, value) == 0)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}

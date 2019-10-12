#include "hash_tables.h"

/**
 * set_pair - mallocs a key/value pair to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
hash_node_t *set_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	printf("hi from set_pair\n");
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (0);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	if (strcmp(node->key, key) == 0)
		printf("set_pair succeeded\n");
	return (node);
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
		printf("calling set_pair before while loop\n");
		node = set_pair(key, value);
		node->next = NULL;
		ht->array[index] = node;
		if (strcmp(ht->array[index]->key, key) == 0)
			printf("assigning key and value worked\n");
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
		node = set_pair(key, value);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}

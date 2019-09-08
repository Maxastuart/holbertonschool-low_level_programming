#include "lists.h"

/**
 * list_len - finds the length of a linked list
 * @h: a pointer to a singly-linked structure list defined in header lists.h
 *
 * Return: size_t, the number of nodes (structs in the list).
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}

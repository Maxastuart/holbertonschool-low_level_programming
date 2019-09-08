#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to a singly-linked structure list defined in header lists.h
 *
 * Return: size_t, the number of nodes (structs in the list).
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (i);
}

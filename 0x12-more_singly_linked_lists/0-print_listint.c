#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to a singly-linked listint_t list defined in header lists.h
 *
 * Return: size_t, the number of nodes (structs in the list).
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}

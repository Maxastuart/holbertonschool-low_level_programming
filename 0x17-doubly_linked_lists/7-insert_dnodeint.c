#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of a double-linked structure dlistint_t
 * @idx: the index of the list where the new node should be added
 * @n: the integer to be added to the list
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *temp = *h;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;

	/* increment list to 1 before idx */
	for (i = 0; (i < idx - 1) && (temp != NULL); i++)
		temp = temp->next;
	if (i != idx - 1)
		return (NULL);

	new->next = temp->next; /* points new node to the one after idx */
	temp->next = new; /* sets one prior to new to point to new */
	new->prev = temp; /* sets new-prev */
	temp = new->next; /* increments list to one after idx */
	temp->prev = new; /* sets one after new's -prev to point to new */

	return (new);
}

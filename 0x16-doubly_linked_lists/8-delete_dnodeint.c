include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: the head of a double-linked structure dlistint_t
 * @index: the index of the list where to delete the node
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new, *temp = *h;

	if (head == NULL)
		return (NULL);

	/* increment list to 1 before index */
	for (i = 0; (i < index - 1) && (temp != NULL); i++)
		temp = temp->next;
	if (i != index - 1)
		return (NULL);

	new->next = temp->next; /* points new node to the one after idx */
	temp->next = new; /* sets one prior to new to point to new */
	new->prev = temp; /* sets new-prev */
	temp = new->next; /* increments list to one after idx */
	temp->prev = new; /* sets one after new's -prev to point to new */

	free(the old one);

	return (new);
}

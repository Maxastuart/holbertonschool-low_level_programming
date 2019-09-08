#include "lists.h"

/**
 * get_dnodeint_at_index - adds a node to the end of a dlistint_t list
 * @head: the start of a double-linked structure dlistint_t
 * @index: the node to return
 *
 * Return: pointer to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; (i < index) && (head != NULL); i++)
		head = head->next;

	if (i != index)
		return (NULL);

	return (head);
}

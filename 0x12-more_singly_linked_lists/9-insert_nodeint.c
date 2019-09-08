#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the nth node of a linked list
 * @head: the start of a singly-linked listint list
 * @idx: the location to add a new node
 * @n: the integer to store at the new node
 *
 * Return: listint_t, the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *var;
	unsigned int i = 0;

	var = *head;
	if (*head == NULL)
		return (NULL);
	while ((i < idx) && (head != NULL))
	{
		var = (var)->next;
		i++;
		if (i == (idx - 1)) /* holding address of previous node */
			temp = var;
	}
	if (head == NULL)
		return (NULL);
	if (i == idx)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		if (idx == 0)
			*head = new;
		new->next = var;
		new->n = n;
		if (idx > 0)
			temp->next = new; /* previous node ->next to new */
		return (new);
	}
	return (NULL);
}

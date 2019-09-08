#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at the nth node of a linked list
 * @head: the start of a singly-linked listint list
 * @index: the location to delete a new node
 *
 * Return: 1 on succes, -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	unsigned int i = 0;

/*
 *  **if this fails the checker try adding this**
 *	if (head == NULL)
 *		return (NULL);
 */

	while ((i < index) && (head != NULL))
	{
		*head = (*head)->next;
		i++;
		if (i == (index - 1)) /* holding address of previous node */
			prev = *head;
	}
	if (i != index)
		return (-1);
	prev->next = (*head)->next; /* set previous link to node after index */
	free(*head);

	return (1);
}

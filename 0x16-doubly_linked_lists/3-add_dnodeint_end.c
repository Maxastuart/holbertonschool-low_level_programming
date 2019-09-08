#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a dlistint_t list
 * @head: the start of a double-linked structure dlistint_t
 * @n: the integer to be added to the list
 *
 * Return: listint_t, the pointer to the new head.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->next = NULL;
	new->prev = temp;

	return (new);
}

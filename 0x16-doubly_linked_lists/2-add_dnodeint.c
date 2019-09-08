#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a dlistint_t list
 * @head: the start of a double-linked structure dlistint_t
 * @n: the integer to be added to the list
 *
 * Return: listint_t, the pointer to the new head.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}

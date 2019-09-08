#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked listint
 * @head: the start of a singly-linked structure listint
 * @n: the integer to be added to the list
 *
 * Return: listint_t, the pointer to the new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

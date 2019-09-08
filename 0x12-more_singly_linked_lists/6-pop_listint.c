#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: the start of a singly-linked structure listint
 *
 * Return: the integer stored in the pop'd list item.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (i);
}

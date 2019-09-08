#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: the start of a singly-linked listint list
 * @n: the integer to be added to the list
 *
 * Return: listint_t, the pointer to the list head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL) /* increment head to 1 before NULL */
			temp = temp->next;
		temp->next = new;          /* set last to point to new */
	}
	new->n = n;
	new->next = NULL;

	return (*head);
}

#include "lists.h"

/**
 * free_listint2 - frees the structs of a linked list
 * @head: a singly-linked listint list defined in header lists.h
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

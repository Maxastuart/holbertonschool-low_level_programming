#include "lists.h"

/**
 * free_listint - frees the structs of a linked list
 * @head: a singly-linked structure list defined in header lists.h
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

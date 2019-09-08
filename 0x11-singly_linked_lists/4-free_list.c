#include "lists.h"

/**
 * free_list - frees the structs of a linked list
 * @head: a pointer to a singly-linked structure list defined in header lists.h
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: the head of a double-linked structure dlistint_t
 * @index: the index of the list where to delete the node
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp1, *temp0;

	if (head == NULL)
		return (-1);
	temp0 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	else
	{
		/* increment to index or last node*/
		for (i = 0; (i < index) && (temp0->next != NULL); i++)
			temp0 = temp0->next;
		if (index > i)
			return (-1);
		temp1 = temp0->prev;
		temp1->next = temp0->next;
		temp0->next->prev = temp1;
	}

	free(temp0);

	return (1);
}

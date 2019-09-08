#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: the start of a singly-linked listint list
 * @index: the integer number of the node to return
 *
 * Return: listint_t, the pointer to the nth (index) list node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while ((i < index) && (head))
	{
		head = head->next;
		i++;
	}

	return (head);
}

#include "lists.h"

/**
 * sum_listint - adds the ints in a listint linked list
 * @head: the start of a singly-linked listint list
 *
 * Return: int, the sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

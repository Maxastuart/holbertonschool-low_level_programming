#include "sort.h"
#include <stdio.h>

/**
 * swap_list - swaps 2 nodes in a doubly linked list of ints
 * @temp2: the node to swap with it's prior
 */
void swap_list(listint_t *temp2)
{
	if (temp2->next == NULL &&
	    temp2->prev->prev == NULL)
	{ /* 2 element list */
		temp2->prev->next = NULL;
		temp2->prev->prev = temp2;
		temp2->next = temp2->prev;
		temp2->prev = NULL;
	}
	else if (temp2->next == NULL)
	{ /* end of list */
		temp2->prev->prev->next = temp2;
		temp2->next = temp2->prev;
		temp2->prev = temp2->prev->prev;
		temp2->next->prev = temp2;
		temp2->next->next = NULL;
	}
	else if (temp2->prev->prev == NULL)
	{ /* beginning of list */
		temp2->prev->next = temp2->next;
		temp2->next->prev = temp2->prev;
		temp2->next = temp2->prev;
		temp2->prev = NULL;
		temp2->next->prev = temp2;
	}
	else
	{ /* mid-list, no NULL in sight */
		temp2->prev->next = temp2->next;
		temp2->next->prev = temp2->prev;
		temp2->next = temp2->prev;
		temp2->prev->prev->next = temp2;
		temp2->prev = temp2->prev->prev;
		temp2->next->prev = temp2;
	}
}

/**
 * cocktail_sort_list - sorts a 2x linked list of integers in ascending order
 * @list: A doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{	listint_t *temp;
	size_t i, length, flag = 0;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	temp = *list;
	for (length = 0; temp->next != NULL; length++)
		temp = temp->next;
	temp = *list;
	while (length > 0)
	{	flag = 0;
		for (i = 0; i < length; i++)
		{
			temp = temp->next;
			if (temp->prev->n > temp->n)
			{
				swap_list(temp);
				print_list(*list);
				temp = temp->next;
				flag = 1;
			}
		}
		if (flag == 0)
			return;
		flag = 0;
		for (i = 0; i < length; i++)
		{
			if (temp->prev->n <= temp->n)
				temp = temp->prev;
			else if (temp->prev->n > temp->n)
			{
				swap_list(temp);
				if (temp->prev == NULL)
					*list = temp;
				print_list(*list);
				flag = 1;
			}		}
		if (flag == 0)
			return;
		length--;
	}}

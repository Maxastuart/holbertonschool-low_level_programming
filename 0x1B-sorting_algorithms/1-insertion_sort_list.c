#include "sort.h"

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
 * insertion_sort_list - sorts a 2x linked list of integers in ascending order
 * @list: A doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp2, *temp;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	temp = (*list)->next;
	while (temp != NULL)
	{
		if (temp->prev->n > temp->n)
		{
			temp2 = temp;
			while (temp2 != NULL &&
				 temp2->prev != NULL &&
				 temp2->prev->n > temp2->n)
			{
				swap_list(temp2);
				if (temp2->prev == NULL)
					*list = temp2;
				print_list(*list);
			}
			temp = temp2->next;
		}
		temp = temp->next;
	}
}

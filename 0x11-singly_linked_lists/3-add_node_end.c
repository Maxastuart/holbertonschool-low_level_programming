#include "lists.h"

/**
 * _strlen - calculates and returns the length of a string
 * @s: a string, an array of characters
 *
 * Return: an integer.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: a double pointer to the start of a singly-linked structure list
 * @str: the string to be added to the list
 *
 * Return: list_t, the pointer to the list head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
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
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	return (*head);
}

#ifndef __LISTS__
#define __LISTS__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);

list_t *add_node_end(list_t **head, const char *str);

list_t *add_node(list_t **head, const char *str);

int _strlen(const char *s);

size_t list_len(const list_t *h);

int _putchar(char c);

size_t print_list(const list_t *h);

#endif /* __LISTS__ */

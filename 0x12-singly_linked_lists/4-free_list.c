#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list_t
 * @head: the linked list
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *my_pointer;

	while (my_pointer != NULL)
	{
		my_pointer = head->next;

		free(head->str);
		free(head);
		my_pointer = head;
	}
}

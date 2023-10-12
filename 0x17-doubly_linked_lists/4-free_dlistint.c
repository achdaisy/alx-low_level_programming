#include "lists.h"

/**
 * free_dlistint frees a linked list
 *
 * @head - head of the linked list to be freed
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

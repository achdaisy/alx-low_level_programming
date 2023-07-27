#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in the list
 * @h: the linked list
 *
 * Return: no of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t list_length = 0;

	while (h)
	{
		h = h->next;
		list_length++;
	}
	return (list_length);
}

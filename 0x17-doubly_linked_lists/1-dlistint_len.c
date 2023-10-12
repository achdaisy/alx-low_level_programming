#include "lists.h"

/**
 * dlistint_len - returns nuber of elements in a linked list
 *
 * @h: the linked list
 * Return: no of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

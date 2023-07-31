#include "lists.h"

/**
 * listint_len - returns number of elements in the list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of the linked list
 * @index: indexes of the nodes in the linked list
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (c < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		c++;
	}
	return (head);
}

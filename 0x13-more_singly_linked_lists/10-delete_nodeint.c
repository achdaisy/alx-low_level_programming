#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the specified index
 * @head: head of the linked list
 * @index: given index at which deletion is done
 *
 * Return: 1 if success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *my_node, *adjacent;

	if (head == NULL || *head == NULL)
		return (-1);
	my_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(my_node);
		return (1);
	}
	for (; i < (index - 1); i++)
	{
		my_node = my_node->next;
		if (my_node == NULL)
			return (-1);
	}
	adjacent = my_node->next;
	my_node->next = adjacent->next;
	free(adjacent);
	return (1);
}

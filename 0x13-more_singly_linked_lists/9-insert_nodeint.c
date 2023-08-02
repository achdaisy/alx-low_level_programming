#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the linked list
 * @idx: the specified index
 * @n: linked list data
 *
 * Return: address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *my_node;

	/*Allocating memory to the new node and checking if allocation is successful*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/*Inserting at the beginning of the list*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	/*Traversing to the node before the specified index*/
	my_node = *head;
	while (idx > 1)
	{
		my_node = my_node->next;
		idx--;

		if (!my_node)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = my_node->next;
	my_node->next = new_node;
	return (new_node);
}

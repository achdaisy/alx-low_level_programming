#include "lists.h"

/**
 * pop_listint - deletes head node and returns head node data
 * @head: pointer to the head node
 *
 * Return: head node data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *my_new_head;
	int n = 0;

	while (*head != NULL)
	{
		my_new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = my_new_head;
	}
	return (n);
}

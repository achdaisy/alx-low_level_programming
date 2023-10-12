#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: head of the linked list
 * @n: an integer value stored in the linked list
 *
 * Return: address of the new element, else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}

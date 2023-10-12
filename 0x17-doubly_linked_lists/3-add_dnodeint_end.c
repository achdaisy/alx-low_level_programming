#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a list
 * @head: head of the linked list
 * @n: integer value in the linked list
 *
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newtail, *tail;

	newtail = malloc(sizeof(dlistint_t));
	if (newtail == NULL)
		return (NULL);
	newtail->n = n;
	newtail->next = NULL;
	if (*head == NULL)
	{
		newtail->prev = NULL;
		*head = newtail;
		return (newtail);
	}
	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newtail;
	newtail->prev = tail;
	return (newtail);
}

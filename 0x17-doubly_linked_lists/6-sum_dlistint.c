#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data in a linked list
 *
 * @head: head of linked list
 * Return: sum of all data else 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

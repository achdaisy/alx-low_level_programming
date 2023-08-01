#include "lists.h"

/**
 * sum_listint - returns sum of data(n) of the linked list
 * @head: head of the linked list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

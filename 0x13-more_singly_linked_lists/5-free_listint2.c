#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: pointer to head of the linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;/*temp keeps track of the node being freed currently*/

	/*checks the head and the pointer its pointing to*/
	if (head && *head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}

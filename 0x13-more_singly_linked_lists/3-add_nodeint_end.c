#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of the linked list
 * @n: integer element which is a member of the linked list
 *
 * Return: address of the new element, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *my_new_list, *temp;

	if (head != NULL)
	{
		/*allocating memory*/
		my_new_list = malloc(sizeof(listint_t));
		if (my_new_list != NULL)
		{
			my_new_list->n = n;
			my_new_list->next = NULL;
		}
		/*Cheking the address of head*/
		if (*head == NULL)
		{
			*head = my_new_list;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = my_new_list;
		}
		return (my_new_list);
	}
	return (NULL);
}

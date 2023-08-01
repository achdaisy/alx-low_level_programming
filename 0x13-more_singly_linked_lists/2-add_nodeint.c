#include "lists.h"

/**
 * add_nodeint - adds a new node at teh beginning of a list
 * @head: the head of a linked list
 * @n: an integer which is a member of the list
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_new_list;

	if (head != NULL)
	{
		/*Allocating memory to the linked list*/
		my_new_list = malloc(sizeof(listint_t));
		/*Ensuring the new list is not empty*/
		while (my_new_list != NULL)
		{
			my_new_list->n = n;
			my_new_list->next = *head;
			*head = my_new_list;
			return (my_new_list);
		}
		return (NULL);
	}
	return (NULL);
}

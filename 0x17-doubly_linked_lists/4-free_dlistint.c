#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head node list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next; /**address of the next node*/
		free(head);
		head = temp;
	}
}

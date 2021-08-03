#include "lists.h"
#include <string.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: listint_t list.
 * Return: void.
*/

void free_listint(listint_t *head)
{
listint_t *temp;

	while (head)
	{
		temp = head->next; /**address of the next node*/
		free(head);
		head = temp;
	}
}

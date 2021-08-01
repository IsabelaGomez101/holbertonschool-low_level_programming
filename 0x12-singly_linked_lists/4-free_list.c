#include "lists.h"
#include <string.h>

/**
 * free_list - function that frees a list_t list.
 * @head: list_t list.
 * Return: void.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next; /**address of the next node*/
		free(head->str);
		free(head);
		head = temp;
	}
}

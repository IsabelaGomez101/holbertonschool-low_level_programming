#include "lists.h"
#include <string.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: listint_t list.
 * Return: void.
*/

void free_listint2(listint_t **head)
{
listint_t *temp;
listint_t *temp2;

temp2 = *head;
if (head == NULL)
return;
	while (temp2 != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}

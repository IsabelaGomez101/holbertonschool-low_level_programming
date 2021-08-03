#include "lists.h"
#include <string.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: double pointer to head of list.
 * Return: void.
*/

void free_listint2(listint_t **head)
{
listint_t *temp;
listint_t *temp2;

if (head == NULL)
return;
temp2 = *head;
	while (temp2 != NULL)
	{
		temp = temp2;
		free(temp);
		temp2 = temp2->next;
	}
	*head = NULL;
}

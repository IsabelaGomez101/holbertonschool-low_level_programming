#include "lists.h"
#include <string.h>

/**
 * pop_listint - function deletes the head node of a listint_t linked list.
 * @head: double pointer to head of list.
 * Return: and returns the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
listint_t *temp2;
int i;

if (head == NULL)
return (0);
temp = temp2 = *head;
if (*head)
{
i = temp2->n;
*head = temp2->next;
free(temp);
}
else
i = 0;
return (i);
}

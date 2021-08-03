#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - function that adds a new node at the end.
 * @head: listint_t list.
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *temp2;

	temp = malloc(sizeof(listint_t));
	temp2 = *head;
	if (!temp)
	return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (temp2 == NULL)
	{
	*(head) = temp;
	return (temp);
	}
	while (temp2->next != NULL)
	{
	temp2 = temp2->next;
	}
	temp2->next = temp;
	return (temp);
}

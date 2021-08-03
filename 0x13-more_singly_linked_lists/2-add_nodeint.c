#include "lists.h"
#include <string.h>

/**
 * add_nodeint - function that adds a new node, listint_t list.
 * @head: listint_t list.
 * @n: integer
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head != NULL)
	{
	temp->next = *head;
	}
	*head = temp;
	return (temp);
}

#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: node head.
 * Return: sum of all data or NULL
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

if (head != NULL)
	{
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
	}
	return (0);
}

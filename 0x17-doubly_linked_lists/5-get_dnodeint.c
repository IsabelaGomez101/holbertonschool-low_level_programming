#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: node head.
 * @index: index of the node, starting from 0.
 * Return: the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int len = 0;

current = head;
	while (current != NULL)
	{
	if (len == index)
	return (current);
	len++;
	current = current->next;
	}
	return (NULL);
}

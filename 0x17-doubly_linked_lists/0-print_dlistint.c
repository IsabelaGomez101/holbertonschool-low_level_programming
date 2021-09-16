#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head node.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	int len = 0;

	current = h;
	while (current != NULL)
	{
	printf("%i\n", current->n);
	current = current->next;
	len++;
	}
return (len);
}

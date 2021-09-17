#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: head node.
 * Return: the number of nodes.
 */


size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	int len = 0; /**counter number of nodes*/

	current = h;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
return (len);
}

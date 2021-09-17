#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: node head.
 * @idx: position.
 * @n: new node.
 * Return: new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;
	unsigned int len = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	current = *h;

if (h != NULL)
{
	while (current != NULL)
	{
		if (len == idx - 1)
		{
			temp = current->next;
			current->next = new_node;
			new_node->next = temp;
			new_node->prev = current;
			temp->prev = new_node;
			return (new_node);
		}
		current = current->next;
		len++;
	}
}
return (NULL);
}

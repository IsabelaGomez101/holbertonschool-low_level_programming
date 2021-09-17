#include "lists.h"

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

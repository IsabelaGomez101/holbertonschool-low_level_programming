#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: list_t list.
 * @str: string.
 * Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *temp2;
	unsigned int i = 0; /**count the length of the string*/

	temp = malloc(sizeof(list_t));
	temp2 = *head;
	if (!temp)
	return (NULL);
	while (str[i])
	{
		i++;
	}
	temp->str = strdup(str);
	temp->len = i;
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

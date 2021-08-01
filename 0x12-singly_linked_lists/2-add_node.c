#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: list_t list.
 * @str: string.
 * Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i = 0; /**count the length of the string*/

	temp = malloc(sizeof(list_t));
	if (!temp)
	return (NULL);
	while (str[i])
	{
		i++;
	}
	temp->str = strdup(str);
	temp->len = i;
	temp->next = NULL;
	if (*head != NULL)
	{
	temp->next = *head;
	}
	*head = temp;
	return (temp);
}

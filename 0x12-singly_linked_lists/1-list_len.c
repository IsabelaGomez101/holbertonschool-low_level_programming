#include "lists.h"

/**
 * list_len - function that returns the number of elements.
 * @h: in a linked list_t list.
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
const list_t *temp = NULL;
int i = 0; /**counter number of nodes*/
char *s;

temp = h;
while (temp)
{
s = temp->str;
if (s == NULL)
{
s = "(nil)";
}
i++;
temp = temp->next;
}
return (i);
}

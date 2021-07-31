#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list_t list.
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *temp = NULL;
int i = 0; /**counter number of nodes*/
char *s;
int l = 0;

temp = h;
while (temp)
{
s = temp->str;
l = temp->len;
if (s == NULL)
{
s = "(nil)";
l = 0;
}
printf("[%i] %s\n", l, s);
i++;
temp = temp->next;
}
return (i);
}

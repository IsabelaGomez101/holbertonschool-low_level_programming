#include "lists.h"
#include <string.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list_t list.
 * Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
const listint_t *temp = NULL;
int i = 0; /**counter number of nodes*/
int num;

temp = h;
while (temp)
{
num = temp->n;
printf("%i\n", num);
i++;
temp = temp->next;
}
return (i);
}

#include "lists.h"
#include <string.h>

/**
 * listint_len - function that returns the number of elements.
 * @h: list_t list.
 * Return: number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
const listint_t *temp = NULL;
int i = 0; /**counter number of nodes*/
int num;

temp = h;
while (temp)
{
num = temp->n;
i++;
temp = temp->next;
}
return (i);
}

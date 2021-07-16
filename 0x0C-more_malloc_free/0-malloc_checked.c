#include <stdlib.h>
#include "holberton.h"

/**
* malloc_checked - function that allocates memory using malloc.
* @b: value.
* Return: Returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}

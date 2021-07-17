#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc.
* @size: size
* @nmemb: number of elements.
* Return: void.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i = 0;
if (size == 0 || nmemb == 0)
{
return (NULL);
}
s = malloc(nmemb * size);
{
if (s == NULL)
{
return (NULL);
}
while (i < size * nmemb)
{
*(s + i) = 0;
i++;
}
return (s);
}
}

#include "holberton.h"
#include <stdlib.h>

/**
* *create_array - that creates an array of chars.
* @size: size
* @c: character
* Return: Returns a pointer to the array or null.
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
s = malloc(sizeof(char) * size);
{
if (s == NULL)
{
return (NULL);
}
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
}

#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - function that returns pointer to a newly allocated space in memory
* @str: string.
* Return: pointer to a new string or NULL
*/

char *_strdup(char *str)
{
int i;
int size;
char *news;
if (str == 0)
{
return (0);
}
for (size = 0; str[size] != '\0'; size++)
{
}
news = malloc((sizeof(char) * size) + 1);
if (news == 0)
{
return (0);
}
for (i = 0; i <= size; i++)
{
news[i] = str[i];
}
return (news);
}

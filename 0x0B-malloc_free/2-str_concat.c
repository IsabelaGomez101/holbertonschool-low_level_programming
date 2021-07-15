#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - function that concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to a new string or NULL
*/

char *str_concat(char *s1, char *s2)
{
int i;
int j;
char *sc;
if (s1 == 0 && s2 == 0)
{
s1 = "";
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
sc = malloc((sizeof(char) * (i + j)) + 1);
if (sc == 0)
{
return (0);
}
for (i = 0; s1[i] != 0; i++)
{
sc[i] = s1[i];
}
for (j = 0; s2[j] != 0; j++)
{
sc[i] = s2[j];
i++;
}
sc[i] = '\0';
return (sc);
}

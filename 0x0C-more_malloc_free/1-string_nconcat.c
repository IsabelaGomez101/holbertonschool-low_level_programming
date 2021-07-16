#include <stdlib.h>
#include "holberton.h"

/**
* string_nconcat - function that concatenates two strings.
* @s1: string 1.
* @s2: string 2.
* @n: the first n bytes of s2.
* Return: Returns a pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i;
int j;
char *snc;

if (s1 == 0)
{
s1 = "";
}
if (s2 == 0)
{
s2 = "";
}
if (s1 != 0)
for (i = 0; s1[i] != '\0'; i++)
{
}
if (s2 != 0)
for (j = 0; s2[j] != s2[n]; j++)
{
}
snc = malloc((sizeof(char) * (i + j)) + 1);
if (snc == 0)
{
return (0);
}
for (i = 0; s1[i] != 0; i++)
{
snc[i] = s1[i];
}
for (j = 0; s2[j] != s2[n]; j++)
{
snc[i] = s2[j];
i++;
}
snc[i] = '\0';
return (snc);
}

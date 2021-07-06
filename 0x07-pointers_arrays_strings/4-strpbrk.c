#include "holberton.h"

/**
* *_strpbrk - function that searches a string for any of a set of bytes.
* @s: string.
* @accept:string
*
* Return: a pointer to the first occurrence of the character .
*/

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int a;
for (i = 0; s[i] != '\0'; i++)
{
}
i++;
for (j = 0; j <= i; j++)
{
for (a = 0; accept[a] != '\0'; a++)
{
if (accept[a] == s[j])
return (&s[j]);
}
}
return (0);
}

#include "holberton.h"

/**
* *_strchr - function that locates a character in a string.
* @s: string.
* @c: character in a string
*
* Return: a pointer to the first occurrence of the character .
*/

char *_strchr(char *s, char c)
{
int i;
for (i = 0 ; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}

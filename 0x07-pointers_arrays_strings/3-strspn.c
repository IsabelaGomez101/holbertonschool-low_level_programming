#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: string.
* @accept: string
*
* Return: unsigned integer.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int len;
int i;
for (len = 0 ; accept[len] != '\0'; len++)
{
}
len++;
for (i = 0; s[i] <= s[len]; i++)
{
}
return (len);
}

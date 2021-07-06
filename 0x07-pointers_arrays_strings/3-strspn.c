#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring.
* @s: string.
* @accept: string.
*
* Return: unsigned integer.
*/

unsigned int _strspn(char *s, char *accept)
{
int j;
int i;
unsigned int len = 0;
for (j = 0 ; s[j] != ' '; j++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (s[j] == accept[i])
len++;
else
continue;
}
}
return (len);
}

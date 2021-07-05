#include "holberton.h"

/**
 * *leet - function that encodes a string into 1337..
 * @a: character
 * Return: value of a.
 */
char *leet(char *a)
{
int i, j;
char c[] = "AaEeOoTtLl";
char s[] = "4433007711";
for (i = 0; a[i]; i++)
{
for (j = 0; j < 10; j++)
{
if (a[i] == c[j])
{
a[i] = s[j];
}
}
}
return (a);
}

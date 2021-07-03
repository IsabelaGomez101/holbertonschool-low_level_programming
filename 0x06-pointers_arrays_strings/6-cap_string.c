#include "holberton.h"

/**
 * *cap_string - function that capitalizes all words of a string..
 * @a: character.
 * Return: character.
 */

char *cap_string(char *a)
{
int i = 0;
if (a[0] >= 'a' && a[0] <= 'z')
{
a[0] = a[0] - 32;
}
for (; a[i] != '\0'; i++)
{
switch (a[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case ')':
case '(':
case '{':
case '}':
if (a[i + 1] > 96 && a[i + 1] < 123)
{
a[i + 1] = a[i + 1] - 32;
}
}
}
return (a);
}

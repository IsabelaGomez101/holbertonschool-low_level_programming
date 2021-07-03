#include "holberton.h"

/**
 * *string_toupper - function that changes all lowercase letters to uppercase.
 * @a: character
 * Return: character.
 */
char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
i++;
}
return (a);
}

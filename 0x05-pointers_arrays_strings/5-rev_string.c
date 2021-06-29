#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: takes a string.
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
int r;
char a;
char b;
while (s[i] != '\0')
{
i++;
}
i--;
for (r = 0; r < i; r++)
{
a = s[r];
b = s[i];
s[r] = b;
s[i] = a;
i--;
}
}

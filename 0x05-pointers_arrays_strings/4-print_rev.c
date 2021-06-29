#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 * @s: takes a string.
 * Return: void.
 */
void print_rev(char *s)
{
int i = 0;
int j;
while (*(s + i) != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}

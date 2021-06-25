#include "holberton.h"

/**
 * print_diagonal - write a function that draws a diagonal line
 * @n: integer.
 * Return: void.
 */

void print_diagonal(int n)
{
int i;
int c;
for (i = 0; i < n; i++)
{
for (c = 0; c <= i; c++)
{
if (c != i)
{
_putchar(' ');
}
else
{
_putchar('\\');
}
}
_putchar('\n');
}
if (n >= 0)
{
_putchar('\n');
}
}

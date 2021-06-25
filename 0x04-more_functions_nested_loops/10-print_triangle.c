#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 * @size: integer.
 * Return: void.
 */

void print_triangle(int size)
{
int i;
int c;
int s = size - 1;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (c = 1; c <= size; c++)
{
if (c > (s - i))
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}

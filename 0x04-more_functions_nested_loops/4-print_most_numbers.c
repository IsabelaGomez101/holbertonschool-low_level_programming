#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, do not print 2 nd 4.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
if (n != '2' && n != '4')
{
_putchar(n);
}
}
_putchar('\n');
}

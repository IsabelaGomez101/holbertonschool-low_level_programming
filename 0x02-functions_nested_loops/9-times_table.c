#include "holberton.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: void.
 */

void times_table(void)
{
int i;
int m;
int n;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (m = 1; m <= 9; m++)
{
n = m * i;
if (n <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
}

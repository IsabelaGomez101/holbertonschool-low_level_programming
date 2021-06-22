#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @d: takes a number.
 * Return: the value of the last digit.
 */

int print_last_digit(int d)
{
int ld = d % 10;
if (d < 0)
{
ld = ld * -1;
_putchar(ld + '0');
return (ld);
}
else
{
_putchar(ld + '0');
return (ld);
}
}

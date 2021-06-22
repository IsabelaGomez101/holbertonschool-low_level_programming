#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @d: takes a number.
 * Return: the value of the last digit.
 */

int print_last_digit(int d)
{
if (d < 0)
d = (d * -1);
_putchar((d % 10) + '0');
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 * @n: the number of integers passed to the function
 * @separator: separator.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list numbers;
va_start(numbers, n);
for (i = 0; i < n; i++)
{
num = va_arg(numbers, int);
if (i == (n - 1) || separator == NULL)
{
printf("%d", num);
}
else
{
printf("%d%s", num, separator);
}
}
printf("\n");
va_end(numbers);
}

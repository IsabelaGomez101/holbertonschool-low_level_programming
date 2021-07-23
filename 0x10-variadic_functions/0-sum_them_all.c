#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: integer.
 *
 * Return: result.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list numbers;
if (n == 0)
{
return (0);
}
va_start(numbers, n);
for (i = 0; i < n; i++)
{
sum += va_arg(numbers, int);
}
va_end(numbers);
return (sum);
}

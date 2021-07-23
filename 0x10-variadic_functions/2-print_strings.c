#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @n: the number of integers passed to the function
 * @separator: separator.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list strings;
va_start(strings, n);
for (i = 0; i < n; i++)
{
str = va_arg(strings, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s%s", str, separator);
if (i == (n - 1) || separator == NULL)
{
printf("%s", str);
}
}
}
printf("\n");
va_end(strings);
}

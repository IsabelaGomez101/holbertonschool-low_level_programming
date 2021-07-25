#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include "3-functions_print.h"

/*MY FUNCTION*/
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: void.
 */

void print_all(const char *const format, ...)
{
	char *separator = "";
	int i, j = 0; /*variables to iterate*/
	va_list arg;

	/*SELECTS THE CORRECT FUNCTION*/
	pr_t ptf[] = {
	    {"c", p_char},
	    {"i", p_int},
	    {"f", p_float},
	    {"s", p_str},
	    {NULL, NULL},
	};

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;
		while (ptf[j].tp != NULL)
		{
			if (format[i] == *(ptf[j].tp))
			{
				printf("%s", separator);
				ptf[j].f(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}

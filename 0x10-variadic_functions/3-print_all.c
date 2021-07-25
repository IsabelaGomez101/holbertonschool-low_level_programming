#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

/*FUNCTIONS TO PRINT*/

/**
 * p_char - function that prints type char.
 * @arg: list of arguments passed to the function.
 * Return: void.
 */
void p_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * p_int - function that prints type int.
 * @arg: list of arguments passed to the function.
 * Return: void.
 */
void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * p_float - function that prints type float.
 * @arg: list of arguments passed to the function.
 * Return: void.
 */
void p_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * p_str - function that prints type string.
 * @arg: list of arguments passed to the function.
 * Return: void.
 */
void p_str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	else
	{
		printf("%s", s);
	}
}

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

	while (format[i] != '\0')
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

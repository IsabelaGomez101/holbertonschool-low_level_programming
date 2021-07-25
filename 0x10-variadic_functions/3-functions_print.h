#ifndef _FUNCTIONS_PRINT_H
#define _FUNCTIONS_PRINT_H
#include <stdarg.h>

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
#endif

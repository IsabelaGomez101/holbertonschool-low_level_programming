#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/*PROTOTYPES TASK 3*/

/**
 * struct printypes - structure containing two variables
 * @tp: Type of argument.
 * @f: The function associated.
 */
typedef struct printypes
{
	char *tp;
	void (*f)(va_list arguments);
} pr_t;

void printchar(va_list arg);
void printint(va_list arg);
void printfloat(va_list arg);
void printstring(va_list arg);
void print_all(const char *const format, ...);

#endif /*variadic functions*/

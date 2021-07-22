#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name.
 * @name: name.
 * @f: pointer to function.
 * Return: void.
 **/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL && name != '\0')
f(name);
}

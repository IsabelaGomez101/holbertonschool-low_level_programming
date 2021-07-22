#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator- function that executes a function.
 * @array: pointer toarray
 * @size: size of the array
 * @action: pointer to function
 * Return: void.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}

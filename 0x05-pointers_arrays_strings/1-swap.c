#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers..
 * @a: takes a pointer to an int
 * @b: takes a pointer to an int
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int tem = *a;
*a = *b;
*b = tem;
}

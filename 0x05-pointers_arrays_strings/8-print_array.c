#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: array.
 * @n: number of elements of the array to be printed.
 * Return: void.
 */
void print_array(int *a, int n)
{
int i = 0;
int j = n - 1;
while (i < j)
{
printf("%d, ", a[i]);
i++;
if (i == j)
{
printf("%d", a[i]);
}
}
printf("\n");
}

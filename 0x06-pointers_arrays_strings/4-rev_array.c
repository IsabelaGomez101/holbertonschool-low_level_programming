#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int t;
while (i < n--)
{
t = a[i];
a[i] = a[n];
a[n] = t;
i++;
}
}


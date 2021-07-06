#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix of integers
* @a: matrix of integers.
* @size: size of matrix.
* Return: void
*/

void print_diagsums(int *a, int size)
{
int i;
int sumDP = 0;
int sumDS = 0;
int l = size*size;

for (i = 0; i < l; i += size + 1)
{
sumDP += a[i];
}
for (i = size - 1; i < l - 1; i += size - 1)
{
sumDS += a[i];
}
printf("%d, %d\n", sumDP, sumDS);
}

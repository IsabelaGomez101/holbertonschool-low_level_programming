#include <stdlib.h>
#include "holberton.h"

/**
* array_range - function that creates an array of integers.
* @min: min integer.
* @max: max integer
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *array;
int i;
int j;

if (min > max)
{
return (NULL);
}
i = (max - min) + 1;
array = malloc(sizeof(int) * i);
{
if (array == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
if (min <= max)
{
array[j] = min;
min++;
}
}
return (array);
}
}

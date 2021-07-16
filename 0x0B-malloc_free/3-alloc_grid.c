#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - function that returns pointer to a 2 dimensional array.
* @width: width of array
* @height: height of array.
* Return: pointer.
*/

int **alloc_grid(int width, int height)
{
int **array = NULL;
int i;
int j;

if (width <= 0 || height <= 0)
{
return (0);
}
array = malloc(sizeof(int *) * height);
if (!(array))
{
return (NULL);
}
for (j = 0; j < height; j++)
{
array[j] = malloc(sizeof(int *) * width);
if (!(array[j]))
{
while (--j >= 0)
{
free(array[j]);
}
free(array);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (i = 0; i < width; i++)
{
array[j][i] = 0;
}
}
return (array);
}

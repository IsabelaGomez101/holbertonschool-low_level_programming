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
int **array;
int i;
int j;

if (width < 1 || height < 1)
{
return (NULL);
}
array = malloc(sizeof(int *) * height);
if (array == NULL)
{
return (NULL);
}
for (j = 0; j < height; j++)
{
array[j] = malloc(sizeof(int *) * width);
if (array[j] == NULL)
{
for (j = j - 1; j >= 0; j--)
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
array[j][i] = 0;
}
return (array);
}

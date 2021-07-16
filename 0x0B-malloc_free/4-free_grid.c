#include <stdlib.h>
#include "holberton.h"

/**
* free_grid -  function that frees a 2 dimensional grid previously created
* @grid: pointer to array 2 dimensional.
* @height: height of array.
* Return: void
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

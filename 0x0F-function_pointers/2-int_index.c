#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: pointer to array
 * @size: number of elements in the array.
 * @cmp: pointer to function
 * Return: integer.
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			(*cmp)(array[i]);
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	return (-1);
}

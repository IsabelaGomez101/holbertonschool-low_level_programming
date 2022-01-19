#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search
 * Return: the first index where value is located
 * if value is not present in array or if array is NULL,return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t end = 0, start = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (array[end] < value && end < size)
	{
	printf("Value checked array[%ld] = [%d]\n", end, array[end]);
	start = end;
	end += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	if (end >= size)
	{
		end = size - 1;
	}
	for (i = start; i < end && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
	return (i);
	}
	return (-1);
}

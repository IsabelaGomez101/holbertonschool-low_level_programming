#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search
 * Return: the first index where value is located
 * if value is not present in array or if array is NULL,return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, last = size - 1, medium = 0;

	if (array == NULL)
		return (-1);
	while (first <= last)
	{
	printf("Searching in array: ");
	for (i = first; i < last; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[last]);
	medium = (first + last) / 2;
	if (array[medium] < value)
		first = medium + 1;
	else if (array[medium] > value)
		last = medium - 1;
	else
		return (medium);
	}
	return (-1);
}

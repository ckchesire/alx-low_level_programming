#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - Algorithm to perform linear search in an array
 * @array: Pointer to the 1st element of an array of to search
 * @size: Number of elements in the array
 * @value: Integer value to be searched
 *
 * Return: Index where the value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);

		if (array[n] == value)
			return (n);
	}
	return (-1);
}

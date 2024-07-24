#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: integer elements
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of first element for which cmp function
 * does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
